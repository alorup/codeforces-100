s = input().strip().split('+')
nums = sorted(int(x) for x in s)
print('+'.join(str(x) for x in nums))
