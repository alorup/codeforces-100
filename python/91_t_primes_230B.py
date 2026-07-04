import sys
import math

n = int(sys.stdin.buffer.readline())
values = list(map(int, sys.stdin.buffer.readline().split()))

limit = 10**6
is_prime = [True] * (limit + 1)
is_prime[0] = is_prime[1] = False
for i in range(2, int(math.isqrt(limit)) + 1):
    if is_prime[i]:
        for j in range(i * i, limit + 1, i):
            is_prime[j] = False

for x in values:
    r = math.isqrt(x)
    if r * r != x or r < 2:
        print('NO')
    else:
        print('YES' if is_prime[r] else 'NO')
