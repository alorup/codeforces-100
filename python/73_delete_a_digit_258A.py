s = input().strip()
n = len(s)
pos = n - 1
for i in range(n - 1):
    if s[i] == "0":
        pos = i
        break
print(s[:pos] + s[pos + 1 :])
