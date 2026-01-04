def bisection(f, a, b, tol=0.0005, max_iter=100):
    iter_count = 1
    print(f"{'Iteration':>10} {'a':>12} {'b':>12} {'c':>12} {'f(c)':>15}")
    print("-" * 65)

    while iter_count < max_iter:
        c = (a + b) / 2
        fc = f(c)
        print(f"{iter_count:10d} {a:12.6f} {b:12.6f} {c:12.6f} {fc:15.6f}")

        if abs(fc) < tol:
            print(f"\nRequired root is: {c:.8f}")
            return c
        elif f(a) * fc < 0:
            b = c
        else:
            a = c

        iter_count += 1

    print(f"\nReached max iterations. Approximate root is: {(a + b) / 2:.8f}")
    return (a + b) / 2
