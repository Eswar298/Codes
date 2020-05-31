Given an array a[N], write a program that prints the maximum GCD (Greatest Common Divisor ) of any subset of atleast size 2 the array.

GCD of two or more than two numbers is the biggest number that divides all of the given numbers.

Sample Input 0

7
6
12
24
3
15
36
10
Sample Output 0

12
Explanation 0

12 is the greatest GCD possible by considering the subset {12,24,36}.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i,s,l,j,count;
    cin>>n;
    int arr[n];
    if(n==0)
    {
        cout<<-1;
        exit(0);
    }
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    s = *min_element(arr, arr + n);
    l = *max_element(arr, arr + n);
    //cout<<s<<l;
    for(i=l;i>0;i--)
    {
        count = 0;
        for(j=0;j<n;j++)
        {
            if(arr[j]%i ==0)
            {
                count++;
            }
        }
        if(count>=2)
        {
            cout<<i;
            exit(0);
        }
    }
    
    cout<<-1;
    return 0;
}
