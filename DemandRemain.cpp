ou are given an array  of  elements. Now you need to choose the best index of this array . 
An index of the array is called best if the special sum of this index is maximum across the special sum of all the other indices.

To calculate the special sum for any index  , you pick the first element that is  and add it to your sum.
Now you pick next two elements i.e.  and  and add both of them to your sum. Now you will pick the next  elements and this continues till the index for which it is possible to pick the elements. For example:

If our array contains  elements and you choose index to be  then your special sum is denoted by -
 , beyond this its not possible to add further elements as the index value will cross the value .

Find the best index and in the output print its corresponding special sum. Note that there may be more than 
one best indices but you need to only print the maximum special sum.

Input       	                   Output
5                                 8
1 3 1 2 5


10                                9
2 1 3 9 2 4 -10 -9 1 3

For index 1 : (A[1]) + (A[2] + A[3]) + (A[4] + A[5] + A[6]) = 2
For index 2 : (A[2]) + (A[3] + A[4]) = 1
For index 3 : (A[3]) + (A[4] + A[5]) = 2
For index 4 : (A[4]) + (A[5] + A[6]) = 0
For index 5 : (A[5]) = 3


#include<iostream>
#include<numeric>
#include<algorithm>
using namespace std;
int main(){
 
long long int n,i,total,remain,demand,j;
 
cin>>n;
 
long long int arr[n],b[n+1],c[n];
 
b[0]=0;
 
for(i=1;i<=n;i++){
scanf("%lld",&arr[i-1]);
b[i]=0;
c[i-1]=0;
}
 
for(i=1;i<=n;i++){
b[i]=b[i-1]+arr[i-1];
}

for(i=0;i<n;i++){
 
j=i+1,demand=2;
 
remain=n-j;
 
while(demand<=remain && j<n){
demand+=1;
j=j+demand-1;
remain=n-j;
}
 
c[i]=b[j]-b[i];
}

n=sizeof(c)/sizeof(c[0]);
sort(c,c+n);
cout<<c[n-1];
return(0);
}
