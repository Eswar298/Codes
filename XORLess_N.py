# unordered pairs of distinct integers from 1 to N whose bit-wise XOR does not exceed N.

for _ in range(int(input())):
    n=int(input())
    count=0
    for i in range(2,n+1):
        for j in range(1,i+1):
            if(i!=j):
                if ((i^j)<=n):
                    count=count+1
    print(count)
