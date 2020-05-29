#DynamicProgramming

You are given two integer sequences A and B,

Your task is to make the sequence A exactly identical to B.

You can perform three operations on the sequence A :

Insert an integer at some position
Remove an integer from some position
Modify an integer i.e. give a new value to an integer at some position
Every operation takes 1 unit of cost.

Your task is, given A and B, find the minimum cost to convert A to B.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int mini (int a,int b,int c)
{
    return (a<b)?((a<c)?a:c):((b<c)?b:c);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,m,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>m;
    
    int b[m];
    for(i=0;i<m;i++)
        cin>>b[i];
    if(n==0||m==0)
    {
        if(n==0 && m==0)
            cout<<0;
        else if(n==0)
            cout<<m;
        else if(m==0)
            cout<<n;
        return 0;
        
    }
    int dist[n+1][m+1];
    for(i=0;i<n+1;i++)
        for(j=0;j<m+1;j++)
        {
            if(i==0)
                dist[i][j]=j;
            else if(j==0)
                dist[i][j]=i;
            else if(a[i-1] == b[j-1])
            {
             
                dist[i][j]=dist[i-1][j-1];
               
            }
            else if(a[i-1]!=b[j-1])
            {
                    dist[i][j]=mini(dist[i][j-1],dist[i-1][j-1],dist[i-1][j])+1;
            }
        }
  
    cout<<dist[n][m];
        
    
    return 0;
}
