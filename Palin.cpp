We define the Palindromic Distance of a String as the minimum number of characters that need to be modified in order to turn the String into a palindrome.

For example :

"cook" -> "cooc" (Palindrome),
Hence Distance("cook") = 1.

"fluffy" -> "flufff" -> "ffufff" -> "ffffff" (Palindrome),
Hence Distance("fluffy") = 3.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int find(string s)
{
    int l=s.length();
    int i,j=l-1;
    int count=0;
    for(i=0;i<=j;i++,j--)
    {
        if(s[i]!=s[j])
        {
            count++;
        }
    }
    return count;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    int max=0;
    string s,res;
    while(n--)
    {
        
        cin>>s;
        int k=find(s);
        //cout<<k<<"  ";
        if(k>max)
        {
            max=k;
            res=s;
        }
    }
    cout<<res;
    return 0;
}
