Alice and Bob are studying for their class test together. The topic of the test is Prime Numbers. The preparation is getting too boring 
for their liking. To make it interesting, they turn it into a game. The winner will get an ice-cream treat from the other.

The game is called Count K-Primes. A number is a k-prime if it has exactly k distinct prime factors. The game is quite simple.
Alice will give three numbers A, B & K to Bob. Bob needs to tell Alice the number of K-prime numbers between A & B (both inclusive).
If Bob gives the correct answer, he gets a point. If not, Alice gets a point. They play this game T times.

Bob hasn't prepared so well. But he really wants to win the game. He wants you to tell him the correct answer

Sieve of Eratosthenes
Given a number n, print all primes smaller than or equal to n. It is also given that n is a small number.
	
prime = [True for i in range(n+1)] 
Input
4
2 5 1
4 10 2
14 15 2
2 20 3

Output
4
2
2
0
-->If p[i]==1 then it is a prime number else it is not
-->prime[i] = some number denotes number of times it has come across

Output:
i p[i] prime[i]
2 1 1
3 1 1
4 0 1
5 1 1
6 0 2
7 1 1
8 0 1
9 0 1

#include<bits/stdc++.h>
using namespace std;
const int MAX=100001;
vector<bool> p(MAX,1);
vector<int> prime(MAX,0);
void seive()
{
	int i,j;
    for(i=2;i<MAX;i++)
    {
        
	    if(p[i])
	    {
		      prime[i]=1;
	        for(j=2*i;j<MAX;j+=i)
        	{
                  p[j]=0;
                	prime[j]++;
            
        	}
	   }
    }
    for(i=2;i<25;i++)
    {
	    cout<<i<<" "<<p[i]<<" "<<prime[i]<<"\n";
    }
}
int main()
{
    seive();
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,k,i;
        cin>>a>>b>>k;
        int ans=0;
        for(i=a;i<=b;i++)
        {
            if(prime[i]==k)
            {
                ans++;
            }
        }
        cout<<ans<<"\n";
    }
}
