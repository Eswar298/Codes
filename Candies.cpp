There are N children standing in a line. Each child is assigned a rating value.

You are giving candies to these children subjected to the following requirements:
- Each child must have at least one candy.
- Children with a higher rating get more candies than their neighbors.

What is the minimum candies you must give?

Sample Input 0

2
1 2
Sample Output 0

3
Explanation 0

The candidate with 1 rating gets 1 candy and candidate with rating cannot get 1 candy as 1 is its neighbor. 
So rating 2 candidate gets 2 candies. In total, 2+1 = 3 candies need to be given out.

#include<bits/stdc++.h>
using namespace std;
int candy(int ratings[],int n) {
    if (n == 0) {
        return 0;
    }
 
    int candies[n];
    int candies1[n];
    for (int i = 0; i < n; ++i)
    {
        candies1[i]=1;
    }
    candies[0] = 1;
 
    //from let to right
    for (int i = 1; i < n; i++) {
        if (ratings[i] > ratings[i - 1]) {
            candies[i] = candies[i - 1] + 1;
        } else { 
            candies[i] = 1;
        }
    }
 
    int result=0;
 
    //from right to left
    for (int i = n- 2; i >= 0; i--) {
        if (ratings[i] > ratings[i + 1]) {
            candies1[i] = candies1[i + 1] + 1;
        }
    }
     for(int i=0;i<n;i++)
    {
 result += max(candies1[i], candies[i]);
}
    return result;
}
int main()
{
    int n;
    cin>>n;
    int ratings[n];
    for(int i=0;i<n;i++)
    {
        cin>>ratings[i];
    }
    cout<<candy(ratings,n);
}
