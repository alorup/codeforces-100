k,a,b,c = map(int, input().split())
cnt = sum(1 for i in range(1,k+1) if i%a==0 or i%b==0 or i%c==0)
print(cnt)
