Today is Chef's birthday. His mom has surprised him with truly fruity gifts: 2 fruit baskets. The first basket contains N apples,
and the second one contains M oranges. Chef likes apples and oranges very much but he likes them equally, and therefore, wants to have 
the minimum possible difference between the number of apples and oranges he has. To do so, he can purchase 1 apple or 1 orange by paying 
exactly 1 gold coin (that's some expensive fruit, eh?). Chef can purchase fruits at most K times
(as he has only K gold coins in his pocket) to make the difference the minimum possible

The first and only line of each test case contains 3 space separated integers — N, M and K — denoting the number of apples,
number of oranges, and number of gold coins our little Chef has.

#include<iostream>
using namespace std;
int main(){
    int m,n,k,t;
    int a,b,x;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>m>>k;
        if(k>abs(m-n)){
            x=0;
        }
        else{
            x=abs(abs(m-n)-k);
        }
        cout<<x<<endl;
    }
    return 0;
}
