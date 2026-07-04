x, y = map(int, input().split())
n = int(input())
MOD = 10**9 + 7
seq = [x, y, y - x, -x, -y, x - y]
ans = seq[(n - 1) % 6] % MOD
print(ans)
