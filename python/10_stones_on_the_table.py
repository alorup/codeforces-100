n = int(input().strip())
s = input().strip()
ans = sum(1 for i in range(1,n) if s[i]==s[i-1])
print(ans)
