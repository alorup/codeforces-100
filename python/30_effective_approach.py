n,m = map(int, input().split())
arr = list(map(int, input().split()))
pos = {val:i+1 for i,val in enumerate(arr)}
a=b=0
for _ in range(m):
    q = int(input().strip())
    p = pos[q]
    a += p
    b += (n-p+1)
print(a, b)
