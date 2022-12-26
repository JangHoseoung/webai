# print(1e-4)

delta_x = 1e-4

x = 2

def fx(x):
    return x**2

def mibun(x):
    return (x**2 + 2*x) * delta_x

value = mibun(2)
print(value)