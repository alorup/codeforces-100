n = int(input())
a = list(map(int, input().split()))

total_ones = sum(a)
best = cur = -10**9
for x in a:
    val = 1 if x == 0 else -1
    cur = max(val, cur + val)
    best = max(best, cur)
print(total_ones + best)
