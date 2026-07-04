import math

a, b, c = map(int, input().split())
x = int(math.sqrt(a * c / b) + 0.5)
y = int(math.sqrt(a * b / c) + 0.5)
z = int(math.sqrt(b * c / a) + 0.5)
print(x, y, z)
