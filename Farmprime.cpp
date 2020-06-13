Farmer Feb has three fields with potatoes planted in them. He harvested x potatoes from the first field, y potatoes from the 
second field and is yet to harvest potatoes from the third field. Feb is very superstitious and believes that if the sum of potatoes 
he harvests from the three fields is a prime number (http://en.wikipedia.org/wiki/Prime_number), he'll make a huge profit. Please help
him by calculating for him the minimum number of potatoes that if harvested from the third field will make the sum of potatoes prime.
At least one potato should be harvested from the third field.

#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    int count=0,i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i == 0)
        {
            count++;
            if(count>=1)
            {
                return false;
            }
        }
    }
    return true;
}
void find_prime(int prime[])
{
    prime[0]=2;
    prime[1]=3;
    int k=2,i;
    for(i=5;i<=10005;i++)
    {
        if(isprime(i))
        {
            prime[k++]=i;
        }
    }
}
int find(int c,int a[])
{
    int i=0;
    for(i=0;i<10005;i++)
    {
        if(a[i]>c)
        {
            return a[i];
        }
    }
}
int main()
{
    int a,b;
    int t;
    cin>>t;
    int prime[10005];
    find_prime(prime);
    while(t--)
    {
        cin>>a>>b;
        int c=a+b;
        int ele=find(c,prime);
        cout<<ele-c<<endl;
    }
}
