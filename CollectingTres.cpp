Given a number N, and an infinite supply of Complete Binary Trees of various depths. Your task is to pick minimum number of binary trees such that sum of total number of leaf node of each tree you have picked is N. 

Note: For binary tree with only root node: Depth=1, Leaf nodes=1

Example:
Input:
2
1
5

Output:
1
2

Explanation:
1. For the first test one binary tree is sufficient.
2. For the second test case pick 2 binary trees of depth 1 and 3 .



#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int num;
	    cin>>num;
	    int j=0;
	    while(num>0)
	    {
	        if(num &1)
	        {
	        j++;
	        }
	        num=num>>1;
	    }
	    cout<<j<<"\n";
	}
	return 0;
}
