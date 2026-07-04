n = int(input().strip())
p = [0] + list(map(int, input().split()))
ok = all(p[p[i]]==i for i in range(1, n+1))
print('YES' if ok else 'NO')
