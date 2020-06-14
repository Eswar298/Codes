-->Depth is number of times you can successfully 
-->key = depth + last string
-->last string is the smallest possible string formed by dividing the string s repeatedly until length of string s equals to its 1st half
s=abba ==>after dividing ab

4  - ip length        2-depth
aaaa                  aa

s="aaaa"
depth1 = aa
depth2 = a

pair<int,string> solve(string &s)
{
  int depth=0;
  while(!s.empty())
  {
      if(isPalindrome(s))
      {
            if(s.length() & 1)
            {
               break;
            }
            ++depth;
            s=s.substr(0,s.length()/2);
      }
  }
  return {depth,s};
}
bool isPalindrome(string s)
{
    int n=s.length();
    int j=n-1;
    for(i=0;i<j;i++,j--)
    {
        if(s[i]!=s[j])
        {
            return false;
        }
    }
    return true;
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
    string res="";
     for( int i = start; i <= start+maxLength-1; ++i )
        res+=str[i];

   return res;
}
int main()
{
      int n;
      cin>>n;
      string s;
      cin>>s;
      auto res = solve(s);
      cout<<res.first<<"\n"<<res.second<<"\n";
      return 0;
}
