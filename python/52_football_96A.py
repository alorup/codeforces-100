s = input().strip()
cur = s[0]
cnt = 1
for ch in s[1:]:
    if ch == cur:
        cnt += 1
        if cnt >= 7:
            print("YES")
            break
    else:
        cur = ch
        cnt = 1
else:
    print("NO")
