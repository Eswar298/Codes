Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in
the original array except the one at i.

For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1],
the expected output would be [2, 3, 6].

Follow-up: what if you can't use division?
int find_lcm(int a,int b)
{
    if(a<b)
    {
        swap(a,b);
    }
    if(a%b == 0 )
    {
        return a;
    }
    else
    {
        return (a*b);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int lcm=1;
        for(i=0;i<n;i++)
        {
            lcm=find_lcm(lcm,a[i]);
        }
        cout<<"lcm is "<<lcm<<"\n";
    }
}


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int cp=1;
        vector<int> left,right,output;
        for(i=0;i<n;i++)
        {
            cp=cp*a[i];
            right.push_back(cp);
        }
        cp=1;
        for(i=n-1;i>=0;i--)
        {
            cp=cp*a[i];
            left.push_back(cp);
        }
        reverse(left.begin(),left.end());
        for(i=0;i<n;i++)
        {
            cout<<left[i]<<" "<<right[i]<<"\n";
        }
        int num;
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                num=left[i+1];
            }
            else if(i==n-1)
            {
                num=right[i-1];
            }
            else
            {
                num=right[i-1]*left[i+1];
            }
            output.push_back(num);
        }
        for(i=0;i<n;i++)
        {
            cout<<output[i]<<"\n";
        }
    }
}

left right
120   1
120   2
60    6
20    24
5     120
