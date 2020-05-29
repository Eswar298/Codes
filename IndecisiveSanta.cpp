On a field represented as a matrix of N rows and M columns there is a santa and two presents.

Santa has one child pending to give a gift to and wants to get to a gift as fast as possible. 
He can walk in four directions: up, down, left or right. The indecisiveness of the Santa is that if the two gifts are equally close 
to him he won't be able to decide which one to choose and he will end up not gifting the child at all.

You are given the cells of the gifts, but you don't know where Santa is. Compute the number of cells where Santa will become indecisive 
if he's there.

Sample Input 0

5 5
2 4
5 3
Sample Output 0

5
Explanation 0

Santa becomes indecisive if he is one of these cells:

(3,1)
(3,2)
(3,3)
(4,4)
(4,5)

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  int i,j,k,a,b,c=0,l;
  cin>>i>>j;
  cin>>k>>l;
  for(a=1;a<=n;a++)
  {
      for(b=1;b<=m;b++)
      {
          if(abs(a-i)+abs(b-j)==abs(a-k)+abs(b-l))
          {
              c++;
          }
      }
  }
  cout<<c;
}
