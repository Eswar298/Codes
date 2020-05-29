Longest Common Prefix of two strings is the longest possible string that is a prefix of both the strings.
Your task is to write a program that takes as input an array of strings and returns the longest common prefix for all the strings
i.e. the longest string that is a prefix of every string in the array.

Sample Input 0

3
abcdefgh
aefghijk
abcefgh
Sample Output 0

a

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i,en;
    cin>>n;
    string ar[n];
    if(n==0)
    {
        cout<<" ";
        return 0;
    }
    
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    if(n==1)
    {
        cout<<ar[0];
        return 0;
    }
    sort(ar,ar+n);
    en = min(ar[0].size(), ar[n - 1].size());
    i = 0;
    string first,last;
    first = ar[0];
    last = ar[n-1];
    while((i<en)&&(first[i]==last[i])){
        i++;
    }
    cout<<first.substr(0, i);
    
    return 0;
}
