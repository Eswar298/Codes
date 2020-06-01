MONKS AND BOX OF COOKIES

Suzie came over to Monk's place today with a box of Monk's favorite cookies! But Monk has to play a game with her in order to win the cookies.
Suzie takes out N balls from her bag, each ball having an integer on it. All the integers are 32-bit. She places all these balls in a box
and closes it. The game starts by Monk choosing an integer from 0 to 31, representing a bit position. It is called as Monk's chosen bit.
Post this, Suzie draws 1 balls from the box randomly and notes the integers on them. The rule is simple, Monk wins if Monk's chosen bit
is set in the binary representation of the drawn ball. Help Monk choose a bit that maximizes his probability of winning the game!
If there are multiple bit positions having the same probability, choose the smallest one.

Input:
1
4
2
4
2
8

Output:
1

#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
    while (t--) {
 
        int arr[32];
        memset(arr, 0, sizeof(arr));
 
        int n;
        cin >> n;
 
        int num;
        for (int i = 0; i < n; ++i) {
            cin >> num;
 
            for (int j = 0; j < 32; ++j)
                if (num & (1 << j))
                    arr[j]++;
        }
 
        int maxCount = INT_MIN, maxIdx = 0;
        for (int i = 0; i < 32; ++i) {
            if (arr[i] > maxCount) {
                maxCount = arr[i];
                maxIdx = i;
            }
        }
 
        cout << maxIdx << '\n';
 
    }
 
    return 0;
}
