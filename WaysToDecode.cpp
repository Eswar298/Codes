#Dynamic Programming:
A numeric string can be converted to an alphabetic string in the following manner :

replace '0' by 'A', '1' by 'B' ... '25' by 'Z'.

Unfortunately, this method of encoding and decoding is not very robust as some strings can result in multiple outputs
and hence cause ambiguity, for example, the string "1101" can be read as "LB", "BBAB", "BKB", "LAB" etc etc.

Your task is, given a numeric string, give the number of distinct alphabetic strings that it can be decoded to.

Since this number can be very large, output it modulo 1e9 + 7

Note that you can only consider either 1 or 2 contiguous characters and convert them to alphabets while decoding if possible

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long translate(string s)
{
    const unsigned int M = 1000000007;
    long long int n=s.length(),i;
    long long int count[n+1]={0};
    count[0]=count[1]=1;
    for(i=2;i<=n;i++)
    {
        count[i]=1;
        
        if(s[i-1] >= '0')
        {
            count[i]=count[i-1];
        }

        if(s[i-2]=='0' || s[i-2]=='1'  || s[i-2]=='2' && s[i-1]<='5')
        {
            count[i]+=count[i-2];
        }
        count[i]=count[i]%M;
    }
    return count[n]%M;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string s;
    cin>>s;
    cout<<translate(s);
    return 0;
}
