from math import  cos
def f(x):
    return 3*x-cos(x)-1
def g(x):
    return(cos(x)+1)/3

def fixed_point_iteration(x0,tol,max_iter=100):
    print("Iteration | x0    | x1    | f(x)   | g(x)")
    itr=0
    while itr<max_iter:
        x1=g(x0)
        print(f"{itr+1:^9} | {x0:.3f} | {x1:.3f} | {f(x0):.3f} | {g(x0):.3f}")
        if abs(x1 - x0) < tol:
             return x1
        x0 = x1
        itr += 1
    print("Did not converge within max iterations.")
    return None
x0 = 3.2
tolerance = 0.005
root = fixed_point_iteration(x0, tolerance)
if root is not None:
    print(f"\nApproximate root: {root:.3f}")