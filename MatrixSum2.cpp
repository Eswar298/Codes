You are given a square matrix of integers. The cost of travelling from a cell A to cell B is the sum of numbers in all the cells
which lie on the path between A and B, inclusive.

You need to travel from the top left cell to the bottom right cell, and back, minimizing the total cost of travel, 
subject to the following conditions:

1) You cannot use squares on the leading diagonal of the matrix (Apart from the top left and the bottom right cells.)

2) When travelling to the bottom right corner, you may only move rightwards or downwards. Similarly, while travelling back to the 
top left corner, you may move only leftwards or upwards.

3) Your first move while going from top left to bottom right should be rightwards. Similarly, your first move while going
from bottom right to top left should be leftwards.

Sample Input 2

3

4 10 6

1 1 5

-5 6 8

4

5 11 4 6

3 2 10 3

1 3 1 3

4 2 8 8

Sample Output

39
62

Explanation

In the first test case, there is exactly one path available. The solution is 4 + 10 + 6 + 5 + 8 + 6 -5 + 1 + 4=39.

In the second case, we get 5->11->4->6->3->3->8->8->2->3->1->3->5, leading to a total of 62.

Note that you cannot use the cells of the leading diagonal in your path, apart from the top left and the bottom right cells.


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>a[i][j];
        
        for(int i=1;i<n;i++)
            a[0][i]+=a[0][i-1];
        for(int i=n-2;i>=0;i--)
            a[n-1][i]+=a[n-1][i+1];
        for(int i=1;i<n-1;i++)
            for(int j=i+1;j<n;j++)
                if(j==i+1)
                    a[i][j]=a[i-1][j]+a[i][j];
                else
                    a[i][j]=min(a[i-1][j]+a[i][j],a[i][j-1]+a[i][j]);
        for(int i=n-2;i>0;i--)
            for(int j=i-1;j>=0;j--)
                if(j==i-1)
                    a[i][j]=a[i+1][j]+a[i][j];
                else
                    a[i][j]=min(a[i+1][j]+a[i][j],a[i][j+1]+a[i][j]);
        cout<<a[n-2][n-1]+a[1][0]+a[0][0]<<endl;
        
    }
    return 0;
}


