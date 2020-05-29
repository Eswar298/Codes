Just like in the previous problem, imagine the field is a 2D plane. Each cell is either water 'W' or a tree 'T'. 
A forest is a collection of connected trees. Two trees are connected if they share a side i.e. if they are adjacent to each other.

Your task is, given the information about the field, print the number of forests.

See the sample case for clarity

Sample Input 0

5
TTTWW
TWWTT
TWWTT
TWTTT
WWTTT
Sample Output 0

2

def count(l,i,j,f,n,v):
    if(j+1<n and l[i][j+1]=='T' and v[i][j+1] == 0):
        v[i][j+1] = 1
        f[0] += 1
        count(l,i,j+1,f,n,v)
        #print(i,j+1,"added")
    if(i+1<n and l[i+1][j] == 'T' and v[i+1][j] == 0):
        v[i+1][j] = 1
        f[0] += 1
        #print(i+1,j,"added")
        count(l,i+1,j,f,n,v)
    if(i-1> -1 and l[i-1][j] == 'T' and v[i-1][j] == 0):
        v[i-1][j] = 1
        f[0] += 1
        count(l,i-1,j,f,n,v)
        #print(i-1,j,"added")
    if(j-1> -1 and l[i][j-1] == 'T' and v[i][j-1] == 0):
        v[i][j-1] = 1
        f[0] += 1
        count(l,i,j-1,f,n,v)
        #print(i,j-1,"added")
        
        
n = int(input())
l=[]
v = []
for i in range(n):
    s = input()
    s = list(s)
    l.append(s)
for i in range(n):
    f = [0]*n
    v.append(f)
k  = [] 
f = []
f.append(0)
for i in range(n):
    for j in range(n):
        f[0] = 0
        if(v[i][j]==0):
            if(l[i][j]=='T'):
                v[i][j] = 1
                f[0] += 1
                count(l , i , j , f , n , v)
                k.append(f[0])
print(len(k))
