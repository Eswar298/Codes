You are given a sequence of N integers. These integers are to be stored in a matrix with M columns. They will be stored in 
row-major order.
Your task is to print the values of all the border elements.
A border element is the last element in any row.

#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size,cols,rows,i,j;
    cin>>size>>cols;
    rows=size/cols;
    int a[rows][cols];
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            cin>>a[i][j];
        }
        cout<<a[i][j-1]<<" ";
    }
    return 0;
}
