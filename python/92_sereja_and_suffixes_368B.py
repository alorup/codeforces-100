import sys

input = sys.stdin.readline
n, m = map(int, input().split())
a = [0] + list(map(int, input().split()))
ans = [0] * (n + 2)
seen = set()
distinct = 0
for i in range(n, 0, -1):
    if a[i] not in seen:
        seen.add(a[i])
        distinct += 1
    ans[i] = distinct
for _ in range(m):
    l = int(input())
    print(ans[l])
