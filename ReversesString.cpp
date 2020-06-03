-->s.substr(1) from 1 to end of the string

#include<bits/stdc++.h>
using namespace std;
void lapindrome(string s) 
{     if(s.size()==0)
      { 
            return;
      }
      lapindrome(s.substr(1));
      cout<<s[0];
}

A dog has N coins and can call maximum of k people from 1 to k, to count coins and they divide equally among themselves
and the remaining are for dog , so the maximum ‘k’ people , it should call so that it has max no of coins 
I/P:2(tc)   
5    2    →each person takes two coins ,so it is left with 1 coin  
11    3   →each person takes three coins so it is left with 2 coins
O/P:
1
2 

-->Barking dog N-coins  k-people
max=INT_MIN;
For(i=1;i<=k;i++)
{
If(N%k>max)
Max=N%k;
}
return max;
