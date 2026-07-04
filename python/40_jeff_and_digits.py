n = int(input().strip())
s = input().strip()
cnt5 = s.count("5")
cnt0 = s.count("0")
if cnt0 == 0:
    print(-1)
else:
    use5 = cnt5 - (cnt5 % 9)
    if use5 == 0:
        print(0)
    else:
        print("5" * use5 + "0" * cnt0)
