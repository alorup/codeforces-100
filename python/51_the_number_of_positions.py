n, a, b = map(int, input().split())
ans = n - a - b
if ans < 0:
    ans = 0
print(ans)
