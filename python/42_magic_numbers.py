n = int(input().strip())
if n % 2050 != 0:
    print(-1)
else:
    q = n // 2050
    s = 0
    while q:
        s += q % 10
        q //= 10
    print(s)
