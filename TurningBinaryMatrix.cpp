Consider a binary matrix A of size N X N.
Now, consider the following matrices :
A90 - obtained by rotating A clockwise by 90 degrees.
A180 - obtained by rotating A clockwise by 180 degrees.
A270 - obtained by rotating A clockwise by 270 degrees.

Note : Binary matrix implies that every element will be either 0 or 1.

Your task is to construct another binary matrix B of size N X N such that :
B(i,j) = 1 iff either A(i,j) = 1 OR A90(i,j) = 1 OR A180(i,j) = 1 OR A270(i,j) = 1
B(i,j) = 0 otherwise

#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,j;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==1 || a[n-j-1][i]==1 || a[n-i-1][n-j-1]==1 || a[j][n-i-1]==1)
            {
                cout<<"1"<<" ";                
            }
            else{
                cout<<"0"<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
