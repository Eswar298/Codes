You are given a matrix A of size NxN. Every cell has a value A[i][j] associated with it. Johny is standing currently
at position (1,1) and he intends to get to cell (N,N).

The cost of going from cell (i,j) to cell(x,y) is A[i][j] * A[x][y].

Johny can either decided to travel in a row-major order or in a column-major order.

Your task is to find out which method will cost him less. Print "row-major" or "column-major" accordingly.

#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,j,sum1=0,sum2=0;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    i=0;
    for(j=0;j<n && i<n;)
    {
        if(j<n)
        {
            if(j+1<n)
            {
             sum1+=a[i][j]*a[i][j+1];
              
            }
            else
            {
                if(i+1<n){
                sum1+=a[i][j]*a[i+1][0];
             
                }
            }
        }
        j++;
        if(j==n)
        {
            i++;
            j=0;
        }
    }
    i=0;
    for(j=0;j<n && i<n;)
    {
        if(j<n)
        {
            if(j+1<n)
            {
             sum2+=a[j][i]*a[j+1][i];
              
            }
            else
            {
                if(i+1<n){
                sum2+=a[j][i]*a[0][i+1];
                }
            }
        }
        j++;
        if(j==n)
        {
            i++;
            j=0;
        }
    }
    if(sum1<=sum2)
    {
        cout<<"row-major";
    }
    else
    {
        cout<<"column-major";
    }
    return 0;
}
