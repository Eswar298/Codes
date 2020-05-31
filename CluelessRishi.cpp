Rishi has developed a new way of representing decimal numbers in binary notation as he was bored of the tradition binary format.

He uses the following algorithm :

Each digit is represented with number of '1's (ones) equal to the value of that digit (zero '1's for digit 0).
Digits are written one by one in the order corresponding to the number and separated by a single '0' digit.
Rishi learned how to encode the numbers, but he has no clue how to decode them.

Write a program that decodes the numbers for him.

Sample Input 1

110011101
Sample Output 1

2031

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string s;
    cin>>s;
    int i;
    string res="";
    int count=0;
    int n=s.length();
   // cout<<n<<" ";
    for(i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            count++;
        }
        else if(count!=0)
        {
            res+=to_string(count);
            //cout<<res<<" ";
            count=0;
        }
        else{
            res+=to_string(count);
        }
      //  cout<<count<<" ";
    }
    if(res.length()==0)
    {
        res+=to_string(count);
    }
    else{
        res+=to_string(count);
    }
    cout<<res;
    return 0;
}
