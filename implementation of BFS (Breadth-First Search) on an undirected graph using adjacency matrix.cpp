#include <iostream>
#include <queue>
using namespace std;

class Graph {
public:
    int v;
    int** adj;

    Graph(int v) {
        this->v = v;
        adj = new int*[v];
        for (int i = 0; i < v; i++) {
            adj[i] = new int[v];
            for (int j = 0; j < v; j++) {
                adj[i][j] = 0;
            }
        }
    }

    void addEdge(int u, int v) {
        adj[u][v] = 1;
        adj[v][u] = 1; // undirected graph
    }

    void display() {
        cout << "Adjacency Matrix:\n";
        for (int i = 0; i < v; i++) {
            for (int j = 0; j < v; j++) {
                cout << adj[i][j] << " ";
            }
            cout << endl;
        }
    }

    void bfs(int start) {
        bool* visited = new bool[v] {false};
        queue<int> q;

        visited[start] = true;
        q.push(start);

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            cout << node << " ";

            for (int i = 0; i < v; i++) {
                if (adj[node][i] == 1 && !visited[i]) {
                    visited[i] = true;
                    q.push(i);
                }
            }
        }

        delete[] visited;
    }

    ~Graph() {
        for (int i = 0; i < v; i++) delete[] adj[i];
        delete[] adj;
    }
};

int main() {
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);

    g.display();

    cout << "\nBFS Traversal starting from vertex 0:\n";
    g.bfs(0);
    cout << endl;

    return 0;
}
