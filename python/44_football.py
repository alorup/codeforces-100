s = input().strip()
cnt = 1
for i in range(1, len(s)):
    if s[i] == s[i - 1]:
        cnt += 1
        if cnt >= 7:
            print("YES")
            break
    else:
        cnt = 1
else:
    print("NO")
