#Dynamic Programming
You are given two sequences of integers A(1,2...N) and B(1,2...M).

A new function F(A, B) has been devised to calculate the similarity between two integer sequences. Your task is to calculate F(A, B).

F(A, B) is the maximum possible number k such that there exists a certain i and a certain j with the following properties -

1 ≤ i ≤ i + k - 1 ≤ N
1 ≤ j ≤ j + k - 1 ≤ M
For every p = {0,1,2..k-1}, Ai+p = Bj+p

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int findsimilarity(int a[],int b[],int n,int m)
{
    int i,j,max=0;
    int L[n+1][m+1];
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=m;j++)
        {
            if(i==0 && j==0)
            {
                L[i][j]=0;
            }
            else if(i>=1 && j>=1 && a[i-1]==b[j-1])
            {
                L[i][j]=L[i-1][j-1]+1;
            }
            else{
                L[i][j]=0;
            }
            if(L[i][j]>max)
            {
                max=L[i][j];
            }
        }
    }
    return max;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    int b[m];
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    cout<<findsimilarity(a,b,n,m);
    return 0;
}
