import sys

lines = sys.stdin.read().strip().split()
if not lines:
    sys.exit(0)
it = iter(lines)
n = int(next(it))
bestL = 10**18
bestR = -1
bestIdx = -1
for i in range(1, n + 1):
    l = int(next(it))
    r = int(next(it))
    if l < bestL or (l == bestL and r > bestR):
        bestL = l
        bestR = r
        bestIdx = i
print(bestIdx if bestIdx != -1 else -1)
