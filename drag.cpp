Kirito is stuck on a level of the MMORPG he is playing now. To move on in the game, he's got to defeat all n dragons that live on this
level. Kirito and the dragons have strength, which is represented by an integer. In the duel between two opponents the duel's outcome
is determined by their strength. Initially, Kirito's strength equals s.

If Kirito starts duelling with the i-th (1 ≤ i ≤ n) dragon and Kirito's strength is not greater than the dragon's strength xi, 
then Kirito loses the duel and dies. But if Kirito's strength is greater than the dragon's strength, then he defeats the dragon 
and gets a bonus strength increase by yi.

Kirito can fight the dragons in any order. Determine whether he can move on to the next level of the game, that is, defeat all dragons 
without a single loss.

inputCopy
2 2
1 99
100 0
outputCopy
YES

In the first sample Kirito's strength initially equals 2. As the first dragon's strength is less than 2, Kirito can fight it and defeat it. After that he gets the bonus and his strength increases to 2 + 99 = 101. Now he can defeat the second dragon and move on to the next level.

In the second sample Kirito's strength is too small to defeat the only dragon and win.



#include<bits/stdc++.h>
using namespace std;
pair<int,int> a[1005];
int main()
{
    int s,n,i;
    cin>>s>>n;
    for(i=0;i<n;i++)cin>>a[i].first>>a[i].second;
    sort(a,a+n);
    for(i=0;i<n;i++){
        if(s>a[i].first) {
            s += a[i].second;
        }else
            {
            cout<<"NO";
            return 0;
            }
        }
    cout<<"YES";
}
