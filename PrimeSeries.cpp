Identify and print the following pattern generated by prime numbers for a given N.

N = 1
2

N = 2
2
3 5

N = 3
2
3 5
7 11 13

#include<bits/stdc+.h>
using namespace std;
bool isprime(int n)
{
    int c=0,i;
    for(i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
        c++;
        }
    }
    if(c>=2)
    {
        return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    a[0]=1;
    int fact=(n *(n+1))/2;
    for(i=1;i<fact;)
    {
        if(isprime(k))
        {
            a[i++]=k;
        }
        k++;
    }
    int j,m=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(m<fact)
            {
            cout<<a[m]<<" ";
            m++;
            }
        }
        cout<<"\n";
        
    }  
    return 0;
}
