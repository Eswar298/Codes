You are given an empty bag that is supposed to be filled with gold, and it can carry at max W kgs of gold in it.

You are given N samples of gold, with the ith of them weighing Wi and having value Vi.

Your task is to fill the bag with atmost W kgs of gold such that the total value of the gold inside the bag is maximum.

Unlike last time, this time whenever you choose to pick a sample of gold, you have to take it completely,

i.e. you cannot break down samples. You either pick the entire sample of gold, or you dont pick the sample at all.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max(int a, int b) { return (a > b)? a : b; } 

// Returns the maximum value that can be put in a knapsack of capacity W 
int knapSack(int W, int wt[], int val[], int n) 
{ 
int i, w; 
int K[n+1][W+1]; 

// Build table K[][] in bottom up manner 
for (i = 0; i <= n; i++) 
{ 
    for (w = 0; w <= W; w++) 
    { 
        if (i==0 || w==0) 
            K[i][w] = 0; 
        else if (wt[i-1] <= w)
        {
                 
                K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]], K[i-1][w]);
        }
        else
                K[i][w] = K[i-1][w]; 
    } 
} 

return K[n][W]; 
} 

int main() 
{ 
    int t;scanf("%d",&t);
    while(t--)
    {
        int n,W,i;
       scanf("%d%d",&n,&W);
        int wt[n],val[n];
        for(i=0;i<n;i++)
        {
            scanf("%d%d",&wt[i],&val[i]);
        }
    printf("%d\n", knapSack(W, wt, val, n)); 
    }
    return 0; 
} 
