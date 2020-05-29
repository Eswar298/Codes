Marc loves cupcakes, but he also likes to stay fit. He eats n cupcakes in one sitting, and each cupcake i has a calorie count c[i] 
. After eating a cupcake with c calories, he must walk at least 2^j * c (where j is the number cupcakes he has already eaten) 
miles to maintain his weight.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    long long int count=0;
    for(int i=n-1;i>=0;i--)
    {
        double k=n-i-1;
        count+=a[i]*pow(2,k);
    }
    cout<<count;
    return 0;
}
