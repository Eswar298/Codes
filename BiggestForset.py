Imagine the field is a 2D plane. Each cell is either water 'W' or a tree 'T'.
A forest is a collection of connected trees. Two trees are connected if they share a side i.e. if they are adjacent to each other.

Your task is, given the information about the field, print the size of the largest forest.

Size of a forest is the number of trees in it. See the sample case for clarity

Sample Input 0:-
5
TTTWW
TWWTT
TWWTT
TWTTT
WWTTT
Sample Output 0:-

10

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

    
maxi = 0
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
if(len(k)==0):
    print(0)
else:
    print(max(k))

    
    
 void track(string plane[], int n, int x, int y, int &cur, int &max );
 
int main(){
    int n;
    cin>>n;
    string plane[n];
    cin.get();
    for (int i=0;i<n;++i) getline(cin,plane[i],'\n');
    int cur=0, max=0;
    for (int i=0;i<n;++i)
        for (int j=0;j<n;++j){
            if (plane[i][j]=='T')
                            cur=0;
                track(plane,n,i,j,cur,max);
        }
    cout<<max;
    return 0;
}
 
void track(string plane[], int n, int x , int y, int &cur, int &max){
    if (plane[x][y]=='W'){
        if (cur>max) max= cur;
        return ;
    }
    if (plane[x][y]=='T'){
        plane[x][y]='W';
        cur++;
        if (x+1<n) track(plane,n,x+1,y,cur,max);
        if (y+1<n) track(plane,n,x,y+1,cur,max);
        if (x-1>=0) track(plane,n,x-1,y,cur,max);
        if (y-1>=0) track(plane,n,x,y-1,cur,max);
    }
}



def calculateMax(forest,i,j,n):
    if(i<0 or j<0 or i>=n or j>=n):
        return 0
    count=0
    if(forest[i][j]=='T'):
        count+=1
        forest[i][j]='W'
        count+=calculateMax(forest,i+1,j,n)
        count+=calculateMax(forest,i-1,j,n)
        count+=calculateMax(forest,i,j+1,n)
        count+=calculateMax(forest,i,j-1,n)
    return count
