def f(x):
    return x ** 3 + x ** 2 + x + 7


def bisection(a, b, tol=0.001):
    if f(a) * f(b) >= 0:
        print("Invalid interval. The function must have opposite signs at a and b.")
        return None

    while (b - a) / 2 > tol:
        c = (a + b) / 2
        if f(c) == 0:
            return c  # Found exact root
        elif f(a) * f(c) < 0:
            b = c
        else:
            a = c

    return round((a + b) / 2, 3)  # Rounding to 3 decimal places


a, b = -3, -2
root = bisection(a, b)
print("Root correct to three decimal places:", root)
