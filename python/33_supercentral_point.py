n = int(input().strip())
pts = [tuple(map(int, input().split())) for _ in range(n)]
for i, (x, y) in enumerate(pts):
    left = right = up = down = False
    for xx, yy in pts:
        if xx == x and yy > y:
            up = True
        if xx == x and yy < y:
            down = True
        if yy == y and xx > x:
            right = True
        if yy == y and xx < x:
            left = True
    if left and right and up and down:
        print(i + 1)
        break
else:
    print(-1)
