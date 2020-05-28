#Close ALL tabs CLICK 1
a,b=map(int,input().split())
li=[0]*a
for i in range(b):
    s=input()
    if(s=="CLOSEALL"):
        li=[0]*a
    else:
        x=int(s[6:])
        if(li[x-1]==1):
            li[x-1]=0
        else:
            li[x-1]=1
    print(sum(li))
