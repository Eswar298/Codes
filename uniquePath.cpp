Given a M X N matrix with your initial position at the top-left cell, find the number of possible unique paths
to reach the bottom-right cellof the matrix from the initial position.

Note: Possible moves can be either down or right at any point in time, i.e., we can move to matrix[i+1][j] or matrix[i][j+1]
from matrix[i][j].

Input:
2
2 2
3 4

Output:
2
10

Example:
Testcase 1:
There are only two unique paths to reach the end of the matrix of size two from the starting cell of the matrix.

using namespace std;
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int m,n,i,j;
	    cin>>n>>m;
	    int arr[n][m];
	    for(i=0;i<m;i++)
	    {
	        arr[0][i]=1;
	    }
	    for(i=0;i<n;i++)
	    {
	        arr[i][0]=1;
	    }
	    for(i=1;i<n;i++)
	    {
	        for(j=1;j<m;j++)
	        {
	            arr[i][j]=arr[i-1][j]+arr[i][j-1];
	        }
	    }
	    cout<<arr[n-1][m-1]<<"\n";
	}
	return 0;
}
