Rayinshi and Neechea play a game. The rules of the game are very simple. The players have n cards in a row. 
Each card contains a number, all numbers on the cards are distinct. The players take turns, Rayinshi moves first.
During his turn a player can take one card: either the leftmost card in a row, or the rightmost one.
The game ends when there is no more cards. The player who has the maximum sum of numbers on his cards by the end of the game, wins.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,friend1=0,friend2=0,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    i=0;j=n-1;
    bool flag=true;
    while(i!=j)
    {
        if(flag)
        {
            
            if(a[i]<a[j])
            {
                friend1+=a[j];j--;
            }
            else{
                friend1+=a[i];i++;
            }
        }
        else
        {
            
            if(a[i]<a[j])
            {
                friend2+=a[j];j--;
            }
            else{
                friend2+=a[i];i++;
            }
        }
        flag=!flag;
    }
    if(flag)
    {
        friend1+=a[i];
    }
    else{
        friend2+=a[i];
    }
    cout<<friend1<<" "<<friend2;
    return 0;
}
