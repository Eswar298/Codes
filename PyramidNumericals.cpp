If input is 2, output will be

 00006
00028 00066

If input is 3, output will be

  00006
 00028 00066
00120 00190 00276

#include<bits/stdc++.h>
using namespace std;
string compute(int n)
{
    string s="";
    int result=8*n*n-2*n;
    int res,rem,count=0,i;
    res=result;
    while(res>0)
    {
        rem=res%10;
        res=res/10;
        count++;
    }
    for(i=0;i<5-count;i++)
    {
        s+="0";
    }
    s+=to_string(result);
    return s;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k,i,j,l;
    cin>>n;
    k=1;
    for(i=1;i<=n;i++)
    {
        for(l=1;l<=n-i;l++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<compute(k)<<" ";
            k++;
        }
        cout<<"\n";
    }
    return 0;
}
