Mario and Luigi's world have been turned upside down. The edges in their world are no more all of the same length. Each edge has its own length now.
You are given a graph with N nodes and M edges. There may be multiple edges between the same pair of nodes and there may be self loops. Nodes are indexed from 1 to N.
Mario resides in node indexed P while Luigi lives in the node with index Q. It takes T amount of time to travel 1 kilometre. Your task is to calculate the minimum time that it will take for Mario to go visit Luigi.
Input
First line contains 5 integers : N, M, P, Q, T.
Next M lines each contain three integers U,V and W denoting an edge between the vertex with index U and the vertex with index V with weight W.
Note that the edges are bidirectional
Output
Print the minimum time it takes for mario to go meet luigi
If it is not possible for mario to go visit luigi, print -1.
Notes
All input values are less than or equal to 1000
Sample Input 0
5 6 1 5 2
1 2 1
1 3 2
1 4 3
2 4 1
3 4 1
4 5 1
Sample Output 0
6

void shortPath(int a[][1005],int b,int n){
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++){
            if(a[i][b]!=1000000 && a[b][j]!=1000000)
                a[i][j]=min(a[i][j],a[i][b]+a[b][j]);
        }
}

int main() {
    int n,m,p,q,t;
    cin>>n>>m>>p>>q>>t;
    int a[n+1][1005];
    
    int u,v,w;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
            if(i==j)
                a[i][j]=0;
            else a[i][j]=1000000;
    }
    for(int i=0;i<m;i++){
        cin>>u>>v>>w;
        if(u==v){
            a[u][v]=0;
        }
        else {
            a[u][v]=min(a[u][v],w);
            a[v][u]=min(a[v][u],w);
        }
    }
    for(int j=0;j<2;j++)
    for(int i=1;i<=n;i++){
        shortPath(a,i,n);
    }
    if(a[p][q]!=1000000)
    cout<<a[p][q]*t;
    else cout<<"-1";
    return 0;
}
