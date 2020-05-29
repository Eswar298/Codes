#
N=1
*

N = 2
 *
***
 *
 
N = 3
  *
 ***
*****
 ***
  *
  #include<bits/stdc++.h>
  int main()
  {
      int n,i,j,k;
      cin>>n;
      for(i=1;i<=n;i++)
	  {
	  		for(k=1;k<=(n-i);k++)
			{
				cout<<" ";
			}
			for(j=1;j<=2*(i-1)+1;j++)
			{
				cout<<"*";
			}
			cout<<"\n";
	  }
	for(i=n-1;i>=1;i--)
    {
        for(k=1;k<=n-i;k++)
        {
            cout<<" ";
        }
        for(j=1;j<=2*(i-1)+1;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
	return 0;
  }
