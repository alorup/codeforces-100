def distinct(y):
    s = str(y)
    return len(set(s))==len(s)

y = int(input().strip())
while True:
    y += 1
    if distinct(y):
        print(y); break
