Rahul and Rashi are off to the wedding of a close relative. This time they have to travel without their guardians. Rahul got very interested in the arrangement of seats inside the train coach.

The entire coach could be viewed as an arrangement of consecutive blocks of size 8.


Berth Number   	Compartment

 1 -  8               1  
 9 - 16               2  
17 - 24               3  
... and so on
Each of these size-8 blocks are further arranged as:


 1LB,  2MB,  3UB,  4LB,  5MB,  6UB,  7SL,  8SU  
 9LB, 10MB, ...
 ...   
 ...
Here LB denotes lower berth, MB middle berth and UB upper berth.
The following berths are called Train-Partners:




#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%8 ==0)
        {
            cout<<n-1<<"SL\n";
        }
        else if(n%8 ==7)
        {
            cout<<n+1<<"SU\n";
        }
        else if(n%8==1 || n%8==4)
        {
            if(n%8 ==4)
            {
                cout<<n-3<<"LB\n";
            }
            if(n%8 ==1)
            {
                cout<<n+3<<"LB\n";
            }
        }
        else if(n%8==2 || n%8==5)
        {
            if(n%8 ==5)
            {
                cout<<n-3<<"MB\n";
            }
            if(n%8 ==2)
            {
                cout<<n+3<<"MB\n";
            }
        }
        else
        {
            if(n%8 ==6)
            {
                cout<<n-3<<"UB\n";
            }
            if(n%8 ==3)
            {
                cout<<n+3<<"UB\n";
            }
        }
    }
    return 0;
}
