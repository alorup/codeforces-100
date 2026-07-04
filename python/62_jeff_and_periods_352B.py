n = int(input().strip())
a = list(map(int, input().split()))
info = {}
for i, x in enumerate(a):
    if x not in info:
        info[x] = [0, i, 1]
    else:
        diff, last, cnt = info[x]
        if cnt == 1:
            info[x] = [i - last, i, 2]
        elif cnt > 1:
            if i - last != diff:
                info[x][2] = -1
            info[x][1] = i
            if info[x][2] != -1:
                info[x][2] += 1
valid = []
for x in sorted(info):
    diff, last, cnt = info[x]
    if cnt > 0:
        valid.append((x, diff))
print(len(valid))
for x, diff in valid:
    print(x, diff)
