Given an array A[ ] denoting the time taken to complete N tasks, determine the minimum amount of time required to finish the tasks 
considering that you can skip any task, but skipping two consecutive tasks is forbidden.
 

For example 
For the array arr [] = {10, 5, 2, 4, 8, 6, 7, 10}
the output will be  22  (Skip the tasks taking more time ,avoiding consective skipping(10,8,10). Tasks done in: 5+2+4+6+7)

Examples 

Input
4
4
10 5 7 10
6
5 6 7 8 9 10
2
10 20
5
22 10 15 3 5

Output
12
21
10
13


Expected Complexity
Time: O(N)
Space: O(1)


Explanation:
Test Case 1: {10, 5, 7, 10}
We can skip tasks 0 and 3. Remaining tasks done in 5 + 7 = 12 units of time.
Test Case 2: {5, 6, 7, 8, 9, 10}
We can skip tasks 1, 3 and 5. Remaining tasks done in 5 + 7 + 9 = 21 units of time.


#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	ll t;
	cin>>t;
	while(t--){
	    ll n,a,b,c,i;
	    cin>>n;
	    ll arr[n];
	    for(i=0;i<n;i++)
	        cin>>arr[i];
	    if(n==1){
	        cout<<0<<endl;
	        continue;
	    }
	    a=arr[0],b=arr[1];
	    for(i=2;i<n;i++){
	        c=arr[i]+min(a,b);
	        a=b;
	        b=c;
	    }
	    cout<<min(a,b)<<endl;
    }
	return 0;
}
