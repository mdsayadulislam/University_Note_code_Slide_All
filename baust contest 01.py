import sys
from collections import defaultdict
from math import gcd


def max_collinear_points(points):
    if len(points) < 2:
        return len(points)

    max_collinear = 1
    for i in range(len(points)):
        slopes = defaultdict(int)
        x1, y1 = points[i]

        for j in range(len(points)):
            if i == j:
                continue
            x2, y2 = points[j]
            dx, dy = x2 - x1, y2 - y1

            # Normalize the slope using gcd to store it as a fraction (dy/dx)
            g = gcd(dx, dy)
            dx //= g
            dy //= g

            # Ensure unique representation: always store (dy, dx) in a consistent format
            if dx < 0:
                dx = -dx
                dy = -dy

            slopes[(dy, dx)] += 1
            max_collinear = max(max_collinear, slopes[(dy, dx)] + 1)

    return max_collinear


def main():
    input_data = sys.stdin.read().splitlines()
    index = 0

    while index < len(input_data):
        n = int(input_data[index])
        if n == 0:
            break
        index += 1

        points = []
        for _ in range(n):
            x, y = map(int, input_data[index].split())
            points.append((x, y))
            index += 1

        print(max_collinear_points(points))


if __name__ == "__main__":
    main()
