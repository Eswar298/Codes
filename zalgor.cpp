#Z Algorithm
string = ababaa
pat = aba

Time complexity = 0(string.length() + pat.length())

step 1 :
string tot = pat + "$" + string 

step 2: 
   tot = a b a $ a b a b a a
         0 1 2 3 4 5 6 7 8 9

 Z[] = 0 0 1 0 3 0 3 0 1 1

pat.length() = 3
 3 at index 4 and 6

 4-3-1
 6-3-1
 
#include<bits/stdc++.h>
using namespace std;
void getZarr(string tot,int z[])
{
    int n=tot.length();
    int l,r,k;
    l=r=0;
    for(int i=1;i<n;i++)
    {
        if(i>r)
        {
            l=r=i;
            while(r<n && tot[r]==tot[r-l])
            {
                r++;
            }
            z[i]=r-l;
            r--;
        }
        else
        {
            k=i-1;
           
            if(z[k]<r-i-1)
            {
               
                z[i]=z[k];
            }
            else
            {
                l=i;
                while(r<n && tot[r]==tot[r-l])
                {
                    r++;
                }
                z[i]=r-l;
                r--;
            }
        }
    }
}
void search(string text,string pattern)
{
    string tot=pattern+"$"+text;
    int len=tot.length();
    int z[len];
    getZarr(tot,z);
    for(int i=0;i<len;i++)
    {
        if(z[i]==pattern.length())
        {
            cout<<"found at "<<i-pattern.length()-1<<"\n";
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--) {
        string text, pattern;
        cin >> text >> pattern;
        search(text, pattern);
    }
}
