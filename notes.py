#Notes 100,50,10,5,2,1

for i in range(int (input())):
    n=int(input())
    li=[100,50,10,5,2,1]
    ans=0
    while n>0:
        for i in li:
            if i<=n:
                ans= ans + (n//i)
                n=n%i
    print(ans)
