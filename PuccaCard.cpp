Pucca and Garu are playing a card game that is explained as follows :
1. N number of cards are placed in a straight line.
2. Cards are numbered 1 to N from left to right and the ith card has a number Ai written on it.
3. Pucca plays first, then Garu, then Pucca and so on.
4. In each turn a player can choose one card, either the rightmost card or the leftmost card.
5. Whatever card a player chooses, the number on that card is added to the players score and the card is removed from the game.
6. The game ends when there are no other cards to pick.
7. At the end of the game, the player with the maxmimum score wins.
8. If both players have equal scores, then Pucca wins
#Same as GreedyRayanshi

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
    if(friend1>=friend2)
    {
        cout<<"Pucca";
    }
    else{
        cout<<"Garu";
    }
    return 0;
}
