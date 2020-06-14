f o r g e e k s s k e  e  g f o r
        4 5         10 11
      --low   7 8   ++high
              6 9
              5 10
              4 11
              3 12

0(n^2) TC
0(1)  Space Complexity

#include<bits/stdc++.h>
using namespace std;
void printSubStr(string str, int low, int high)
{
    for( int i = low; i <= high; ++i )
        cout << str[i];
}
int longestPalSubstr(string str)
{
    int maxLength = 1; // The result (length of LPS)

    int start = 0;
    int len = str.length();

    int low, high;

    // One by one consider every character as center point of
    // even and length palindromes
    for (int i = 1; i < len; ++i)
    {
        // Find the longest even length palindrome
        // with center points as i-1 and i.
        low = i - 1;
        high = i;
        int c=0;
        while (low >= 0 && high < len && str[low] == str[high])
        {
            if(c==0) {
                cout << "low  " << low << " high  " << high << " ";
                c++;
            }
            if (high - low + 1 > maxLength)
            {
                start = low;
                cout<<"start1 is"<<start<<" ";
                maxLength = high - low + 1;
                cout<<"maxlength1 is"<<maxLength<<" ";
            }
            --low;
            ++high;
        }

        // Find the longest odd length palindrome with center
        // point as i
        low = i - 1;
        high = i + 1;
        while (low >= 0 && high < len && str[low] == str[high])
        {

            if (high - low + 1 > maxLength)
            {
                start = low;
                cout<<"start2 is"<<start<<" ";
                maxLength = high - low + 1;
                cout<<"maxlength2 is"<<maxLength<<" ";
            }
            --low;
            ++high;
        }
    }

    cout<<"Longest palindrome substring is: ";
    printSubStr(str, start, start + maxLength - 1);

    return maxLength;
}

int main()
{
    string str = "forgeeksskeegfor";
    cout<<"\nLength is: "<<longestPalSubstr(str)<<endl;
    return 0;
}
