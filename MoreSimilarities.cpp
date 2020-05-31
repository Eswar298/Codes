You are given two sequences of integers A(1,2...N) and B(1,2...M).

A newer function F(A, B) has been devised to calculate the similarity between two integer sequences. Your task is to calculate F(A, B).

F(A, B) is the maximum possible number k such that there exists a certain set :
{a1, a2, ... ak} with a1 ≤ a2 ≤ ... ≤ ak
and another set
{b1, b2, ... bk} with b1 ≤ b2 ≤ ... ≤ bk
such that
for every i from 1 to k, we have Aai = Bbi.

Sample Input 0

6
1 2 3 4 5 6
6
2 1 4 3 6 5
Sample Output 0

3
Explanation 0

One possible set a and b with size 3 is : a = {1, 3, 5} and b = {2, 4, 6}, then , {A[a1], A[a2], A[a3]} = {B[b1], B[b2], B[b3]}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int max1(int a,int b)
{
return (a>b)?a:b;
}
int main() {
int n,m,i,j,max=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
scanf("%d",&m);
int b[m],cell[n+1][m+1];
for(i=0;i<m;i++)
scanf("%d",&b[i]);
for(i=0;i<=n;i++)
{ for(j=0;j<=m;j++)
cell[i][j]=0;
}
for(i=1;i<=n;i++)
{
for(j=1;j<=m;j++)
{
if(a[i-1]==b[j-1])
{ cell[i][j]=cell[i-1][j-1]+1;
if(max<cell[i][j])
max=cell[i][j];
}
else
cell[i][j]=max1(cell[i-1][j],cell[i][j-1]);
}
} 
printf("%d",max);
return 0;
}
