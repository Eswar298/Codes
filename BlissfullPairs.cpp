Given a permutation of number from 1 to N. Among all the subarrays, find the number of unique pairs (a,b) such that a≠b 
and a is maximum and b is second maximum in that subarray.


#include<bits/stdc++.h>
using namespace std;
set<pair<int,int> > s;
void subarray(int i,int j,int a[],int n)
{
    int max1=0,max2=0,l;
    for(l=i;l<=j;l++)
    {
        if(a[l]>max1)
        {

            max1=a[l];
        }
    }
    for(l=i;l<=j;l++)
    {
        if(a[l]>max2 && a[l]!=max1)
        {
            max2=a[l];
        }
    }
    pair<int,int> x=make_pair(max1,max2);
    if(!(s.count(x)))
    {
        s.insert(x);
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
              subarray(i,j,a,n);
        }
    }
    cout<<(int)s.size();
    return 0;
}
