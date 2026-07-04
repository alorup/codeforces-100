s = input().strip()
i = 0
res = []
while i < len(s):
    if s[i]=='.':
        res.append('0'); i += 1
    else:
        if i+1 < len(s) and s[i+1]=='.':
            res.append('1'); i += 2
        else:
            res.append('2'); i += 2
print(''.join(res))
