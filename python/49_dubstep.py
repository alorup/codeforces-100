s = input().strip()
out = []
i = 0
while i < len(s):
    if i + 2 < len(s) and s[i : i + 3] == "WUB":
        i += 3
        if out and out[-1] != " ":
            out.append(" ")
    else:
        out.append(s[i])
        i += 1
res = "".join(out).strip()
print(res)
