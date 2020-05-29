You are given an array A[N] of size N.
We define a 7-Divisible Pair as a pair of integers (i,j) such that Ai + Aj is divisible by 7.
Formally, a pair of integers (i,j) is a 7-Divisible pair if ( Ai + Aj ) % 7 = 0.
Your task is to find the total number of 7-Divisible pairs from the given array.


#include<bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,count=0,i,k=7;
    cin>>n;
    int a[n];int freq[7]={0};
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        freq[a[i]%7]++;
    }
    using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,ans=0,i,k=7;
    cin>>n;
    int a[n];int freq[7]={0};
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
     for(i=0;i<n;i++)
    {
        rem = a[i]%k;
        if(rem!=0)
            ans += freq[k - rem]; 
        else
            ans += freq[0]; 
        freq[rem]++; 
    }
    cout<<ans;
    return 0;
}
