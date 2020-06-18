A frog jumps either 1, 2 or 3 steps to go to top. In how many ways can it reach the top.

using namespace std;

int main() {
	//code
	int t;cin>>t;
	while(t--)
    {
        int n,i;
        cin>>n;
        int dp[n+1];
        dp[1]=1;dp[2]=2;dp[3]=4;
        //ways to reach 1 is only (1)
        //ways to reach step 2 in 2 ways are (1,1) and (2)
        //ways to reach step 3 is 4 ways (1,1,1) (1,2) (2,1) (3)
        for(i=4;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        }
        cout<<dp[n]<<"\n";
    }
	return 0;
}
