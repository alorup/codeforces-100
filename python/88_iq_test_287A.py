grid = [input().strip() for _ in range(4)]
for i in range(3):
    for j in range(3):
        cnt_hash = sum(1 for di in range(2) for dj in range(2) if grid[i + di][j + dj] == '#')
        cnt_dot = 4 - cnt_hash
        if cnt_hash >= 3 or cnt_dot >= 3:
            print('YES')
            raise SystemExit
print('NO')
