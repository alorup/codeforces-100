n = int(input().strip())
a = list(map(int, input().split()))
m = int(input().strip())
b = list(map(int, input().split()))
best = 0
cnt = 0
for ai in a:
    for bj in b:
        if bj % ai == 0:
            r = bj // ai
            if r > best:
                best = r
                cnt = 1
            elif r == best:
                cnt += 1
print(cnt)
