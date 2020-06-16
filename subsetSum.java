//Dynamic Programming

Java Program for Subset Sum Problem | DP-25
Given a set of non-negative integers, and a value sum, determine if there is a subset of the given set with sum equal to given sum.
Example:

Input:  set[] = {3, 34, 4, 12, 5, 2}, sum = 9
Output:  True  //There is a subset (4, 5) with sum 9.


public class Code {
    static boolean isSubsetSum(int[] set,
                               int n, int sum)
    {
       boolean[][] dp =new boolean[set.length+1][sum+1];

        //if subset is empty then we cant sum upto target
        for(int i=1;i<=sum;i++)
        {
            dp[0][i]=false;
        }
        for(int i=0;i<=set.length;i++)
        {
            dp[i][0]=true;
        }
        for(int i=1;i<=set.length;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                //copy from the top
                dp[i][j]=dp[i-1][j];

                if(!dp[i][j] && j>=set[i-1])
                {
                    dp[i][j]=dp[i][j] || dp[i-1][j-set[i-1]];
                }
            }
        }
        return dp[set.length][sum];
    }
    public static void main(String[] args) {
        int[] set = { 3, 34, 4, 12, 5, 2 };
        int sum = 25;
        int n = set.length;
        if (isSubsetSum(set, n, sum))
            System.out.println("Found a subset"
                    + " with given sum");
        else
            System.out.println("No subset with"
                    + " given sum");
    }
}
