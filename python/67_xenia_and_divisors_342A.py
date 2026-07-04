n = int(input().strip())
a = list(map(int, input().split()))
c = {x: a.count(x) for x in [1, 2, 3, 4, 6, 7]}
if c[1] != c[2] or c[3] != c[6] or c[4] != c[7] or c[2] != c[3]:
    print(-1)
else:
    for _ in range(c[1]):
        print("1 2 4")
    for _ in range(c[3]):
        print("1 3 6")
