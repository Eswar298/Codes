#for j in range(11,-1,-1):
#decrement by -1 from 11 to -1 (-1 not included)

#Power of 2
for _ in range(int(input())):
    N=int(input())
    ans=0 
    l=[2048,1024,512,256,128,64,32,16,8,4,2,1]
    while N>0:
        for j in l:
            if N>=j:
                ans+=N//j
                N%=j
    print(ans)
