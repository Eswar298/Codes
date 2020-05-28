//Number of set bits from a=10 to b=15
int countSetBits(int n)
{
	int count=0;
	while(n>0)
	{
		count +=(n&1);
		n=n>>1;
	}
	return count;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int count=0;
	int a,b;
	cin>>a>>b;
	int i;
	for(i=a;i<=b;i++)
	{
		if((i&1 == 0) && i<b)
		{
			count +=2*countSetBits(i) + 1;
			i++;
			continue;
		}
		count += countSetBits(i);
	}
	cout<<count<<"\n";
}