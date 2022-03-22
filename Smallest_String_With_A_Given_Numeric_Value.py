k=230
n=9
s='abcdefghijklmnopqrstuvwxyz'
d=dict()
j=1
for i in s:
    d[i]=j
    j+=1
res=''
for key,v in sorted(d.items(),key=lambda item:item[1],reverse=True):
    if k//v>0:
        for _ in range(k//v):
            res=key+res
            
        k=k%v
l=list(res)
while len(l)!=n:
    for i in range(len(l)):
        if d[l[i]]>1:
            #a 97
            l[i]=chr(96+d[l[i]]-1)
            l.append('a')
            break
l.sort()

print(''.join(l))
        
