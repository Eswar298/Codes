You are in a 2D maze of dimensions N x M. Your initial position is (1,1) and your final position is (N,M).

The cell(i,j) has value A[i][j]. The cost of travelling any path in this maze is equal to the sum of values of all cells that you
have visited while travelling the path.

From a cell (i,j) you can only go either right, or down, i.e. you can only go to (i + 1, j) or (i, j + 1). 
Note that at any point you cannot leave the grid.

Your task is to calculate the minimum cost that it would take you to go from the initial position to the final position.

Sample Input 0

3 3
1 1 2
2 3 1
2 2 1
Sample Output 0

6

int min(int a,int b)
{
    return a<b?a:b;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m,i,j;
    cin>>n>>m;
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int temp[n][m],sum=0;
     for(j=0;j<m;j++)
    {
         temp[0][j]=sum+a[0][j];
         sum=temp[0][j];
    }
    sum=0;
        for(i=0;i<n;i++)
        {
            temp[i][0]=sum+a[i][0];
            sum=temp[i][0];
        }
    
    for(i=1;i<n;i++)
    {
        for(j=1;j<m;j++)
        {
            
                temp[i][j]=a[i][j]+min(temp[i][j-1],temp[i-1][j]);
            
        }
    }
  
    cout<<temp[n-1][m-1];
    return 0;
}
