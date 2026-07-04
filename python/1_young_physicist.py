n = int(input().strip())
sx = sy = sz = 0
for _ in range(n):
    x,y,z = map(int, input().split())
    sx += x; sy += y; sz += z
print("YES" if sx==0 and sy==0 and sz==0 else "NO")
