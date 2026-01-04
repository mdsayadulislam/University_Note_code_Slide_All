def f(x):
    return x*3 - 2*x - 5

a = float(input("First guess: "))
b = float(input("Second guess: "))
c = float(input("Tolerable Error: "))

# Implementing False Position Method
def false_position(a, b, c):
    i = 1
    print(f"{'Iteration': <12}{'a':<12}{'b':<12}{'f(a)':<12}{'f(b)':<12}{'c':<12}{'f(c)':<12}")
    print("_" * 85)

    while True:
        fa = f(a)
        fb = f(b)
        new_c = (a * fb - b * fa) / (fb - fa)  # False position method
        fc = f(new_c)

        print(f"{i: <12}{a:<12.6f}{b:<12.6f}{fa:<12.6f}{fb:<12.6f}{new_c:<12.6f}{fc:<12.6f}")

        if fa * fc < 0:
            b = new_c
        else:
            a = new_c

        if abs(fc) <= c:
            break  # Step if error tolerable is met

        i += 1

    print(f"\nRequired Root is: {new_c:0.8f}")

# Checking correctness of initial guess values and applying the method

if f(a) * f(b) > 0.0:
    print("Wrong guess value! Try again with different values.")
else:
    false_position(a, b, c)