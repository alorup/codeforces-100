import math

n = int(input().strip())
count = 0
for a in range(1, n + 1):
    for b in range(a, n + 1):
        c2 = a * a + b * b
        c = math.isqrt(c2)
        if c * c == c2 and c <= n and c > b:
            count += 1
print(count)
