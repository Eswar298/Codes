Given a string like YY_BQBQ  then it should be written as YYBBQQ all letters should be side by side and all the blanks are to be 
filled with the letters..
I/P:BBGYY
O/p:NO because G is only once

#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    string str;
    int n,i,t;
    cin>>t;
    while(t--)
    {
        cin>>str;
        n=str.length();
        int freq[26]={0};
        bool empty=false;
        int flag=1;
        for(i=0;i<n;i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                freq[str[i]-'A']++;
            }
            else
            {
                empty=true;
            }
        }
        if(empty)
        {
            for(i=0;i<26;i++)
            {
                if(freq[i]==1)
                {
                    flag=0;
                    break;
                }
            }
        }
        else{
        for(i=0;i<n;i++)
        {
            if(!(str[i-1]==str[i] || str[i]==str[i+1]))
            {
                flag=0;
                break;
            }
        }
        
        }
        if(flag==0)
        {
            cout<<"No"<<"\n";
        }
        else
        {
            cout<<"yes"<<"\n";
        }
    }
} 

