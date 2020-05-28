//Sums in a triangle
Int a[n][n];
for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<=i;j++)
	        {
	           cin>>a[i][j];
	        }
	        
	    }
	    for(int i=n-1;i>=1;i--)
	    {
	        for(int j=0;j<=i;j++)
	        {
	            if(a[i][j]>=a[i][j+1])
	            a[i-1][j]=a[i-1][j]+a[i][j];
	            else
	            a[i-1][j]=a[i-1][j]+a[i][j+1];
	        }   
	    }

for i in range(int(input())):
    lis = []
    n = int(input())
    for j in range(n):
        d = list(map(int,input().split()))
        lis.append(d)
        
    for i in range(n-2,-1,-1):
        for j in range(i + 1):
            lis[i][j]=max(lis[i][j] + lis[i+1][j], lis[i][j] + lis[i+1][j+1]) 
    print(lis[0][0]) 
