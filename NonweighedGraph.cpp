You are given a graph with N nodes and M edges. There may be multiple edges between the same pair of nodes and there may be self loops.
Nodes are indexed from 1 to N. Mario resides in node indexed P while Luigi lives in the node with index Q. It takes T amount of time
to go from one node to an adjacent node. Your task is to calculate the minimum time that it will take for Mario to go visit Luigi.

Sample Input 0

5 6 1 5 2
1 2
1 3
1 4
2 4
3 4
4 5
Sample Output 0

4
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

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
        cin>>u>>v;
        w=1;
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

