#print the number of set bits in the binary representation of this number.
-->O(K), where K is the number of ones present in the binary form of the given number

for i in range(int(input())):
    n=int(input())
    count=0
    while n>0:
        n=n&(n-1)
        count=count+1
    print(count)
