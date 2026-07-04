s, n = map(int, input().split())
arr = [tuple(map(int, input().split())) for _ in range(n)]
arr.sort()
for x, y in arr:
    if s <= x:
        print("NO")
        break
    s += y
else:
    print("YES")
