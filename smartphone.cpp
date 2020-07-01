
https://www.codechef.com/LRNDSA01/submit/ZCO14003

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	// your code goes here
	ll n;
	cin>>n;
	vector<ll> v(n);
	for(ll i=0;i<n;i++)
	{
	    cin>>v[i];
	}
	ll size=n;
	sort(v.begin(),v.end());
	ll sum;
	ll mx=INT_MIN;
	for(ll i=0;i<n;i++)
	{
	    sum=v[i]*size;
	    size--;
	    mx=max(sum,mx);
	}
	cout<<mx;
	return 0;
}
