import math


def f(x):
    return 3 * x - math.cos(x) - 1


def secant(x0, x1, e):
    print('-' * 100)
    print("i \t X1      \tX0    \t f(X1)     \t f(X0)     \t    x2     f(x2)")
    print('-' * 100)
    step = 1


    while True:
        if f(x0) == f(x1):
            print('oh shit it is an error!')
            break

        x2 = x0 - (x1 - x0) * f(x0) / (f(x1) - f(x0))
        print(f"{step} \t {x1:.5f} \t {x0:.5f} \t {f(x1):.5f} \t {f(x0):.5f} \t {x2:.5f} \t {f(x2): .5f}")

        x0 = x1
        x1 = x2
        step += 1

        while abs(f(x2)) <= e:
            print(f"\nRoot found: {x2:.8f}")
            break




# Call the secant function
secant(0,1,0.0005)