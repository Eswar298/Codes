.Find the kth smallest element 
int main()
{
	vector<int> arr;
	for(i=0;i<n;i++)
	{
	     cin>>ele;
	     arr.push_back(ele);
	}
	sort(arr.begin(),arr.end())
	cout<<arr[k-1];
}

.Given two numbers as strings very large numbers find the sum of them if taken as strings 

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int n1=s1.length();
	int n2=s2.length();
	if(n1<n2)
	{
	    swap(s1,s2);
	}
	reverse(s1.begin(),s1.end());
	reverse(s2.begin(),s2.end());
	int carry=0;
	string res=" ";
	for(i=0;i<n1;i++)
	{
		int sum=(s1[i]-'0')+(s2[i]-'0')+carry;
		res.push_back(sum%10+'0');
		carry=sum/10;
	}
	for(i=n1;i<n2;i++)
	{
		int sum=(s2[i]-'0');
		res.push_back(sum%10)+'0';
		carry=sum/10;
	}
	if(carry)
	{
		res.push_back(carry+'0');
	}
	reverse(res.begin(),res.end());
	return res;
}
