y, k, n = map(int, input().split())
start = ((y + 1 + k - 1) // k) * k - y
end = n - y
if start > end:
    print(-1)
else:
    print(*range(start, end + 1, k))
