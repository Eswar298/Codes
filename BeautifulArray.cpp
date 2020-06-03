Shil got an array of N integers as a present on his birthday. But he didn't liked it. Shil wants to make this array beautiful.
Shil considers an array A1,A2,A3 . . . AN beautiful if A1 > AN. Inorder to make it beautiful Shil can swap any two numbers in the array.
Also Shil can perform this operation any number of times on any adjacent pairs of integers in the array A.Find the number of ways in
which Shil can make this array beautiful.Two ways are considered same if resulting array after making all the swaps have same A1 and AN. 
Input 
First line of input contains an integer N denoting the number of elements in an array A. Next line of input contains N space separated integers denoting A1,A2,A3 . . . AN respectively. 
Output 
Number of ways in which you can make given array beautiful. 
SAMPLE INPUT   
5
1 4 3 2 5 
 
SAMPLE OUTPUT
10 

#define fast ios::sync_with_studio(false);cin.tie(NULL)
Int main(){
      fast;long long int n;cin>>n;
       long long int a[n];
unordered_map<long long int,long long int> m;
        for(i=0;i<n;i++)
{
cin>>a[i];
m[a[i]]++;
}
Long long int x=m.size();
Cout<<x*(x-1)/2;
