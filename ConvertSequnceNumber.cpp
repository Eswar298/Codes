You are given two integer sequences A and B,

Your task is to make the sequence A exactly identical to B.

You can perform three operations on the sequence A :

Insert an integer at some position
Remove an integer from some position
Modify an integer i.e. give a new value to an integer at some position
Every insertion operation costs x units.
Every removal operation costs y units.
Every modification operation costs z units

Your task is, given A and B, find the minimum cost to convert A to B.
    
Sample Input 0

6
1 2 3 4 5 6
8
1 5 7 2 8 4 5 6
5 5 10000
Sample Output 0

20

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int convertSeq(long long int a1[],long long int a2[],long long int n,long long int m,long long int ins,long long int rem,long long int mo){
    long long int dp[m+1][n+1];
    dp[0][0]=0;
    for(long long int i=1;i<=n;i++)
        dp[0][i]=dp[0][i-1]+rem;
    for(long long int i=1;i<=m;i++)
        dp[i][0]=dp[i-1][0]+ins;
    for(long long int i=1;i<=m;i++)
        for(long long int j=1;j<=n;j++)
            if(a2[i-1]==a1[j-1])
                dp[i][j]=dp[i-1][j-1];
            else{
                dp[i][j]=min(min(dp[i-1][j-1]+mo,dp[i-1][j]+ins),dp[i][j-1]+rem);
            }
    return dp[m][n];
}
int main() {
    /* Enter your code here. Read input from STDIN. Prlong long int output to STDOUT */   
    long long int n;
    cin>>n;
    long long int a1[n];
    for(long long int i=0;i<n;i++)
        cin>>a1[i];
    long long int m;
    cin>>m;
    long long int a2[m];
    for(long long int i=0;i<m;i++)
        cin>>a2[i];
    long long int ins,rem,mo;
    cin>>ins>>rem>>mo;
    cout<<convertSeq(a1,a2,n,m,ins,rem,mo);
    return 0;
}
