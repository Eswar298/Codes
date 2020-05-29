#Dynamic Programming
FIND THE SUM OF THE MAXIMUM SUBARRAY.

Sample Input 0

8
-1 2 4 -3 5 2 -5 2
Sample Output 0

10

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int max(int a,int b)
{
    return (a>b)?a:b;
}
int subarray(int a[],int n)
{
    int s[n+1];
    s[0]=0;
    int i,maxi=0;
    for(i=1;i<=n;i++)
    {
        s[i]=max(s[i-1]+a[i-1],a[i-1]);
        if(s[i]>maxi)
        {
            maxi=s[i];
        }
    }
    return maxi;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i,j,max=0,sum=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=subarray(a,n);
    cout<<max;
    return 0;
}
