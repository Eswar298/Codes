Find whether the string 2 is in string 1  
I/P:abc                            0/p:  3 
     abcdef  
    aA 
      abAZ                            O/p:2 
aaa                                O/p: 1 
a          
what                                O/p: 0 
none            

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int count=0,i,arr[26]={0},a[26]={0};
        for(i=0;i<s1.length();i++)
        {
            if(isupper(s1[i]))
            {
                a[s1[i]-'A']++;
            }
            else
            {
                arr[s1[i]-'a']++;
            }
        }
        for(i=0;i<s2.length();i++)
        {
            if(isupper(s2[i]))
            {
                if(a[s2[i]-'A'])
                {
              
                count++;
                }
            }
            else{
            if(arr[s2[i]-'a'])
            {
    
                count++;
            }
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
