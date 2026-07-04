n = int(input().strip())
cnt = 0
for _ in range(n):
    a,b,c = map(int, input().split())
    if a+b+c >= 2: cnt += 1
print(cnt)
