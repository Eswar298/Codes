In a village,there are n farmers. Each farmer has a certain number of cows. You have to find the number of triplets of farmers such 
that the numberof cows of one farmer is the sum of thecows of other two farmers.



Output Format

Output the number of satisfying triplets.

Sample Input 0

5
1 2 3 4 5
Sample Output 0

4

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h> 
using namespace std; 
  

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int n,i,count=0,j,k;
    cin>>n;
    //cout<<n;
    long int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr + n); 
    for (i = n - 1; i >= 0; i--) { 
        j = 0; 
        k = i - 1; 
         while (j < k) { 
  
            if (arr[i] == arr[j] + arr[k]) { 
                count++;      
            } 
            if (arr[i] > arr[j] + arr[k]) 
                j += 1; 
  
            else
                k -= 1; 
        } 
        
    } 
    cout<<count;
    return 0;
}
