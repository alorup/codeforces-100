k = int(input().strip())
a = list(map(int, input().split()))
a.sort(reverse=True)
if k == 0:
    print(0)
else:
    s = 0
    for i, x in enumerate(a, 1):
        s += x
        if s >= k:
            print(i)
            break
    else:
        print(-1)
