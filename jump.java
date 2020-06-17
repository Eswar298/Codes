Dr Felix Kline, the Math teacher at Gauss School introduced the following game to teach his students problem solving. He places a 
series of “hopping stones” (pieces of paper) in a line with points (a positive number) marked on each of the stones.

Students start from one end and hop to the other end. One can step on a stone and add the number on the stone to their cumulative
score or jump over a stone and land on the next stone. In this case, they get twice the points marked on the stone they land but do
not get the points marked on the stone they jumped over.

At most once in the journey, the student is allowed (if they choose) to do a “double jump”– that is, they jump over two consecutive
stones – where they would get three times the points of the stone they land on, but not the points of the stone they jump over.

The teacher expected his students to do some thinking and come up with a plan to get the maximum score possible. Given the numbers 
on the sequence of stones, write a program to determine the maximum score possible.

Constraints

The number of stones in the sequence< 30

Input Format

The first line contains N, the number of integers (this is a positive integer)

The next line contains the N points (each a positive integer) separated by commas. These are the points on the stones in the order the stones are placed.

Output

One integer representing the maximum score

Test Case

Explanation

Example 1

Input

3

4,2,3

Output

10

Explanation

There are 3 stones (N=3), and the points (in the order laid out) are 4,2 and 3 respectively.

If we step on the first stone and skip the second to get 4 + 2 x 3 = 10. A double jump to the third stone will get only 9.
Hence the result is 10, and the double jump is not used

Example 2

Input

6

4,5,6,7,4,5

Output

35

Explanation

N=6, and the sequence of points is given.One way of getting 35 is to start with a double jump to stone 3 (3 x 6=18), go to
stone 4 (7) and jump to stone 6 (10 points) for a total of 35. The double jump was used only once, and the result is 35.

import java.util.*;
//import java.util.*;
import java.lang.*;
import java.io.*;

public class Main {
    public static void main(String args[]) throws Exception{
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
       // int i;
        String[] s=sc.next().split(",");
        int[] a=new int[n+4];
        int[][] dp=new int[n+4][2];
        for(int i=0;i<s.length;i++)
        {
            a[i+1]=Integer.parseInt(s[i]);
        }  
         for (int i = n; i >= 0; --i) {
            int x = Math.max((a[i+1] + dp[i+1][0]), (2*a[i+2] + dp[i+2][0]));
            x = Math.max(x, 3*a[i+3] + dp[i+3][1]);
            dp[i][0] = Math.max(dp[i][0], x);
 
            int y = Math.max(a[i+1] + dp[i+1][1], 2*a[i+2] + dp[i+2][1]);
            dp[i][1] = Math.max(dp[i][1], y);
        }
        System.out.println(Math.max(dp[0][0], dp[0][1]));
    }
}

