Given an array A1, A2, ..., AN, count the number of subarrays of array A which are non-decreasing.
A subarray A[i, j], where 1 ≤ i ≤ j ≤ N is a sequence of integers Ai, Ai+1, ..., Aj.

A subarray A[i, j] is non-decreasing if Ai ≤ Ai+1 ≤ Ai+2 ≤ ... ≤ Aj. You have to count the total number of such subarrays.


Input:
2
4
1 4 2 3
1
5

Output:
6
1


#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    ll a[n];
	    ll ans=n,count=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n-1;i++)
	    {
	        if(a[i]<=a[i+1])
	        count++;
	        else
	        {
	            ans+=(count*(count+1))/2;
	            count=0;
	        }
	    }
	    ans+=(count*(count+1))/2;
	    cout<<ans<<"\n";
	}
	return 0;
}
	
