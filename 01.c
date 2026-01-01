#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_POINTS 1000

typedef struct {
    int x, y;
} Point;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void find_max_collinear(Point points[], int n) {
    if (n < 2) {
        printf("%d\n", n);
        return;
    }
    int max_count = 1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int dx = points[j].x - points[i].x;
            int dy = points[j].y - points[i].y;
            int d = gcd(dx, dy);
            dx /= d;
            dy /= d;

            int count = 2;
            for (int k = 0; k < n; k++) {
                if (k != i && k != j) {
                    int dx_k = points[k].x - points[i].x;
                    int dy_k = points[k].y - points[i].y;
                    int d_k = gcd(dx_k, dy_k);
                    dx_k /= d_k;
                    dy_k /= d_k;
                    if (dx_k == dx && dy_k == dy) {
                        count++;
                    }
                }
            }
            if (count > max_count) {
                max_count = count;
            }
        }
    }
    printf("%d\n", max_count);
}

int main() {
    int n;
    while (scanf("%d", &n) && n != 0) {
        Point points[MAX_POINTS];
        for (int i = 0; i < n; i++) {
            scanf("%d %d", &points[i].x, &points[i].y);
        }
        find_max_collinear(points, n);
    }
    return 0;
}
