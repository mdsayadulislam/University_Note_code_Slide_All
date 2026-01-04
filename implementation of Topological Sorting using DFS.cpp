#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Graph {
public:
    int v;
    vector<vector<int>> adj;

    Graph(int v) {
        this->v = v;
        adj.resize(v);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
    }

    void dfs(int curr, vector<bool>& visited, stack<int>& s) {
        visited[curr] = true;

        for (int i = 0; i < adj[curr].size(); i++) {
            int next = adj[curr][i];
            if (!visited[next])
                dfs(next, visited, s);
        }

        s.push(curr);
    }

    void topsort() {
        vector<bool> visited(v, false);
        stack<int> s;

        for (int i = 0; i < v; i++) {
            if (!visited[i])
                dfs(i, visited, s);
        }

        cout << "Scheduling order:\n";
        while (!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
    }
};

int main() {
    Graph g(6);

    g.addEdge(2, 3);
    g.addEdge(3, 1);
    g.addEdge(4, 1);
    g.addEdge(4, 0);
    g.addEdge(5, 0);
    g.addEdge(5, 2);

    g.topsort();

    return 0;
}
