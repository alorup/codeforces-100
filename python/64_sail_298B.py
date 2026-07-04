t, sx, sy, ex, ey = map(int, input().split())
s = input().strip()
x, y = sx, sy
for i, c in enumerate(s):
    if x == ex and y == ey:
        print(i)
        break
    if c == "E" and x < ex:
        x += 1
    elif c == "W" and x > ex:
        x -= 1
    elif c == "N" and y < ey:
        y += 1
    elif c == "S" and y > ey:
        y -= 1
else:
    if x == ex and y == ey:
        print(t)
    else:
        print(-1)
