s = input().strip()
vowels = set("aeiouy")
res = []
for ch in s.lower():
    if ch not in vowels and ch.isalpha():
        res.append("." + ch)
print("".join(res))
