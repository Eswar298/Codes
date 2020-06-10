A lot of frogs want to cross a river. A river is w units width, but frogs can only jump l units long, where l<w. Frogs can also jump on lengths shorter than l. but can't jump longer. Hopefully, there are some stones in the river to help them.

The stones are located at integer distances from the banks. There are ai stones at the distance of i units from the bank the frogs are 
currently at. Each stone can only be used once by one frog, after that it drowns in the water.

What is the maximum number of frogs that can cross the river, given that then can only jump on the stones?

Input
The first line contains two integers w and l (1≤l<w≤105) — the width of the river and the maximum length of a frog's jump.

The second line contains w−1 integers a1,a2,…,aw−1 (0≤ai≤104), where ai is the number of stones at the distance i from the bank the frogs are currently at.

Output
Print a single integer — the maximum number of frogs that can cross the river.

Examples
input
10 5
0 0 1 0 2 0 0 1 0
output
3

In the first sample two frogs can use the different stones at the distance 5, and one frog can use the stones at the distances 3 
and then 8.

In the second sample although there are two stones at the distance 5, that does not help. The three paths are: 0→3→6→9→10,
0→2→5→8→10, 0→1→4→7→10.

#include <bits/stdc++.h>
using namespace std;
int main() {
   int width,L,i;
   cin>>width>>L;
   int a[width];
   for(i=0;i<width-1;i++)
   {
       cin>>a[i];
   }
   int sum=0,minValue=INT_MAX;
   for(i=0;i<L;i++)
    {
       sum += a[i];
    }
   cout<<"sum is"<<sum<<endl;
   for(i=L;i<width-1;i++)
   {
       sum=sum-a[i-L]+a[i];
      minValue  =min(sum,minValue);
   }
   cout<<"MIn value is"<<minValue;
    return 0;
}
