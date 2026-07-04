n = int(input().strip())
ok = False
for _ in range(n):
    if input().strip() == 'f': ok = True
print('YES' if ok else 'NO')
