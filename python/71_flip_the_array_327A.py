n = int(input().strip())
a = list(map(int, input().split()))
ones = a.count(1)
best = -(10**9)
cur = 0
for x in a:
    v = 1 if x == 0 else -1
    cur = max(v, cur + v)
    best = max(best, cur)
print(ones + best)
