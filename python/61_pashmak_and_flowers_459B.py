n = int(input().strip())
a = list(map(int, input().split()))
mn = min(a)
mx = max(a)
cntmn = a.count(mn)
cntmx = a.count(mx)
if mn == mx:
    ways = n * (n - 1) // 2
else:
    ways = cntmn * cntmx
print(mx - mn, ways)
