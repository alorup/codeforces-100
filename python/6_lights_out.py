a = [list(map(int, input().split())) for _ in range(3)]
for i in range(3):
    out = []
    for j in range(3):
        s = 1 + a[i][j]
        if i>0: s += a[i-1][j]
        if i<2: s += a[i+1][j]
        if j>0: s += a[i][j-1]
        if j<2: s += a[i][j+1]
        out.append(str(s%2))
    print(''.join(out))
