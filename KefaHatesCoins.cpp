Kefa hates coins and thinks that coins are a currency of the poor.

She has N coins with her, ith of them having the value Ai.
She goes to a shop to buy M gifts, with the price of ith gift being Pi.

She wants to get rid of as many coins as she can and she buys the gift one by one from the 1st one to the Mth one. 
She adopts the following strategy while buying any particular gift i : 
She wants to give the shopkeeper a total of X coins whose value sum up to K such that -

K ≥ Pi
X is maximized
K - Pi is minimized
She does not consider other gifts while buying a particular gift i.e. while buying every gift she tries her best to satisfy
the above conditions for that gift.

Your task is, given the array A and the array P, for every gift, find and print the values of X and K, 
or print -1 -1 if she will not be able to buy the gift at all.

#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i,k,sum,c=0,j,m;
    cin>>n>>m;
    int a[n],max=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
     static int l=0;
    for(i=0;i<m;i++)
    {
        cin>>k;
        sum=0;c=0;
        for(j=l;j<n;j++)
        {
            sum+=a[j];
            c++;
            if(sum>=k)
            {
                l=j+1;
                break;
            }
        }
        if(sum<k)
        {
            cout<<"-1"<<" "<<"-1"<<"\n";
        }
        else{
        cout<<c<<" "<<sum<<"\n";
        }
    }
    return 0;
}
