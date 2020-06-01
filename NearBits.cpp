Hihi is the grandfather of all geeks in IIITA. He and his crazy ideas.....Huh..... Currently, hihi is working on
his most famous project named 21 Lane, but he is stuck at a tricky segment of his code.

Hihi wants to assign some random IP addresses to users, but he won't use rand(). He wants to change the current IP of the user's 
computer to the IP such that its hash is next hash greater than the hash of original IP and differs by only 1 bit from the hash of
original IP.

Smart Hihi already hashed the IP to some integer using his personal hash function. What he wants from you is to convert the
given hashed IP to the required IP X as mentioned above.

*The important point of this question is that the original IP should not be changed
-->If number is 9 in binary 1001 the first and last bits should not be changed.
-->So the only change that is near and can be possible is 1011 which is 11 that is near to this for even we can directly add 1

#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main() {
 
    ll t;
    cin >> t;
    while (t--) {
        ll n,i;
        ll num;
        cin>>num;
        if(num%2==0)
        {
            cout<<(num+1)<<"\n";
        }
        else
        {
           for(i=num+1;;i++)
           {
               if((i&num)==num)
               {
                   cout<<i<<"\n";
                   break;
               }
           }
        }
    }
}
