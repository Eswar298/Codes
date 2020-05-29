There are people randomly seated in an NxN grid.
In the grid a 0 means an empty seat. A positive integer denotes a person.
A person can be numbered from 1 to 5, 1 meaning he is perfectly healthy whereas 5 meaning he is highly infected with the virus.
Any person who is directly adjacent to an infected person (left-right-up-down-diagonally adjacent) is at a high risk.
If a healthy person numbered 1 is adjacent to an infected person numbered 3, he is at high risk 3, and so on.

Your task is to calculate the number of infected-k people for k = {2,3,4,5} and also the number of high risk-k people for k = {2,3,4,5}

Note that if person is beside multiple infected people, he is at risk for the highest level of infection.

Print 8 integers in the following format :

infected-2 infected-3 infected-4 infected-5  
highrisk-2 highrisk-3 highrisk-4 highrisk-5
Sample Input 0

5
0 0 0 1 5
1 1 1 1 1
3 1 2 1 0
1 1 1 1 1
4 4 1 3 1
Sample Output 0

1 2 2 1
2 6 4 3




n = int(input())
l=[]    
maxi = 0
for i in range(n):
    s = list(map(int,input().split()))
    l.append(s)
#print(l)
i2,i3,i4,i5 = 0,0,0,0
r2,r3,r4,r5 = 0,0,0,0
k = [0]*5
for i in range(n):
    i2  += l[i].count(2)
    i3  += l[i].count(3)
    i4  += l[i].count(4)
    i5   += l[i].count(5)
    for j in range(n):
        if(l[i][j]==1):
            a = 0
            
            if(i-1 >=0 and l[i-1][j] >1 and a<l[i-1][j]):
                
                a = l[i-1][j]
                #print(a,"changed")
            if(j-1 >=0 and l[i][j-1] >1 and a<l[i][j-1]):
                a = l[i][j-1]
                #print(a,"changed")
            if(i+1 <n and l[i+1][j] >1 and a<l[i+1][j]):
                a = l[i+1][j]
                #print(a,"changed")
            if(j+1 <n and l[i][j+1] >1 and a<l[i][j+1]):
                a = l[i][j+1]
                #print(a,"changed")
            if(j+1 <n and i-1>=0 and l[i-1][j+1] >1 and a<l[i-1][j+1]):
                a = l[i-1][j+1]
                #print(a,"changed")
            if(j+1 <n and i+1<n and l[i+1][j+1] >1 and a<l[i+1][j+1]):
                a = l[i+1][j+1]
                #print(a,"changed")
            if(j-1 >=0 and i-1>=0 and l[i-1][j-1] >1 and a<l[i-1][j-1]):
                a = l[i-1][j-1]
                #print(a,"changed")
            if(i+1 <n and j-1>=0 and l[i+1][j-1] >1 and a<l[i+1][j-1]):
                a = l[i+1][j-1]
                #print(a,"changed")
                
            #print(a,i,j)
            if(a!=0):
                
                k[a-1] += 1

print(i2,i3,i4,i5)
print(k[1],k[2],k[3],k[4])


