A Valley array is a counter-part to the mountian array previously discussed. It is essentially an upside down mountain array.
For example, {2, 1, 3} is a valley array whereas {3,2,1} is not.
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,flag=1;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n-1;i++)
    {
        if((a[i-1]>= a[i] && a[i]<=a[i+1]))
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"no";
    }
    else
    {
        cout<<"yes";
    }
    return 0;
}
