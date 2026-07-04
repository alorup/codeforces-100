n,k,l,c,d,p,nl,np = map(int, input().split())
total_drink = k*l
total_limes = c*d
toasts = min(total_drink//nl, total_limes, p//np)
print(toasts//n)
