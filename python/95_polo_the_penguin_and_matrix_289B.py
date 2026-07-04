import sys

data = list(map(int, sys.stdin.buffer.read().split()))
n, m, d = data[0], data[1], data[2]
a = data[3:]
base = a[0] % d
if any(x % d != base for x in a):
    print(-1)
else:
    a.sort()
    target = a[len(a) // 2]
    print(sum(abs(x - target) // d for x in a))
