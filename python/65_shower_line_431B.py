import itertools
import sys

g = [list(map(int, sys.stdin.readline().split())) for _ in range(5)]
best = 0
for perm in itertools.permutations(range(5)):
    res = 0
    q = list(perm)
    while q:
        for i in range(0, len(q) // 2 * 2, 2):
            u, v = q[i], q[i + 1]
            res += g[u][v] + g[v][u]
        q.pop(0)
    best = max(best, res)
print(best)
