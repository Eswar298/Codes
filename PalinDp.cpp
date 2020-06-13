Palindromic characteristics of string s with length |s| is a sequence of |s| integers, where k-th number is the total number of 
non-empty substrings of s which are k-palindromes.

A string is 1-palindrome if and only if it reads the same backward as forward.

A string is k-palindrome (k > 1) if and only if:

Its left half equals to its right half.
Its left and right halfs are non-empty (k - 1)-palindromes.
The left half of string t is its prefix of length ⌊|t| / 2⌋, and right half — the suffix of the same length. ⌊|t| / 2⌋ denotes the 
length of string t divided by 2, rounded down.

Note that each substring is counted as many times as it appears in the string. For example, in the string "aaa" the substring "a"
appears 3 times.

Input
abacaba

output
12 4 1 0 0 0 0 

#include<bits\stdc++.h>
 
using namespace std;
 
int dp[5010][5010];
 
string s;
int cnt[5010];
 
int main()
{
    cin>>s;
    s=" "+s;
    int i,j,l,r;
    for (i=1;i<s.size();i++){
        for (l=1;(r=l+i-1)<s.size();l++){
            if (s[l]==s[r]&&(l+1>r-1||dp[l+1][r-1])){
				dp[l][r]=dp[l][i/2+l-1]+1;
                cnt[dp[l][r]]++;
            }
        }
    }
    for (i=s.size()-1;i>=1;i--) cnt[i]+=cnt[i+1]; 
    for (i=1;i<s.size();i++) printf("%d ",cnt[i]);
}
