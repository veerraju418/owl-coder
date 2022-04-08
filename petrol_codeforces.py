n=int(input())
l=[]
for _ in range(n):
    key=int(input())
    l.append(key)
s=len(l)
ps=2**s
fl=0
for counter in range(ps):
    tot=0
    for i in range(s):
        if counter&(1<<i):
            tot+=l[i]
        else:
            tot-=l[i]
    if tot%360==0:
        print("YES")
        fl=1
        break
if fl==0:
    print("NO")
