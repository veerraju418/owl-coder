def removeComments (self, don):
    # your code here
    last='\n'
    code=""
    for i in don:
        code+=i
    ind=0
    res=""
    while ind<len(code):
        
        if code[ind]=="/" and code[ind+1]=="/" :
            #find the index of \n
            i=ind+1
            while i<len(code)-1:
                if ord(code[i])==92 and code[i+1]=='n':
                    
                    ind=i
                    break
                i+=1
            ind=i+2
        elif code[ind]=="/" and code[ind+1]=="*" :
            #find the index of \n
            i=ind+1
            
            while i<len(code)-1:
                if code[i]=="*" and code[i+1]=="/":
                    
                    ind=i
                    break
                i+=1
            ind=i+2
        
        else:
            res+=code[ind]
            ind+=1
return res
