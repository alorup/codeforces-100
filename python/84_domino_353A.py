n = int(input().strip())
dom = [tuple(map(int, input().split())) for _ in range(n)]
sum1 = sum(a for a, _ in dom)
sum2 = sum(b for _, b in dom)
diff = sum1 - sum2
if diff == 0:
    print('YES')
elif diff % 2 != 0:
    print('NO')
else:
    ok = any(a - b == diff // 2 for a, b in dom)
    print('YES' if ok else 'NO')
