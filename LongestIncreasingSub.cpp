using namespace std;
int lis(int arr[],int n)
{
    int lis[n];
    lis[0]=1;
    for(int i=1;i<n;i++)
    {
        lis[i]=1;
        for(int j=0;j<i;j++)
        {
            if(arr[i]>arr[j]&&lis[i]<lis[j]+1)
            {
                lis[i]=lis[j]+1;
            }
        }
    }
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(lis[i]>mx)
        {
            mx=lis[i];
        }
    }
    return mx;
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int result;
	    result=lis(arr,n);
	    cout<<result<<endl;
	}
	return 0;
}
