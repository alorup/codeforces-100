r=c=0
for i in range(1,6):
    row = list(map(int, input().split()))
    for j,v in enumerate(row, start=1):
        if v==1:
            r,c = i,j
print(abs(r-3)+abs(c-3))
