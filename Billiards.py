BILLIARDS is a really interesting game. It is played on a green baize with 3 balls-red, white and yellow.
Sheldon and Leonard are playing a game of billiards. Sheldon is playing the game for the first time and is not familiar with the rules.
So he asks Leonard to explain the rules to him. Leonard explains the rules to Sheldon in the following way:

“A Cannon shot gives 2 points and an In-Off Shot gives 3 points.”

Sheldon is curious, and wants to figure out that given a score X, in how many ways can he get that score by hitting a combination of 
Cannon and In-Off shots?

Leonard is baffled when he is asked this question.

Your task is to help Leonard in writing a program to compute the total number of ways one can score a total of X points by hitting any 
combination of Cannon and In-Off shots. The order in which the shots are hit have importance.

For example, 5 can be scored in two ways, by hitting an In-Off Shot followed by a Cannon shot or a Cannon Shot followed by an In-Off shot. 
A score of 7 can be achieved in three ways – Cannon,In-Off,Cannon Cannon,Cannon,In-Off and In-Off,Cannon,Cannon.

Input:
3
5
7
2


Output:
2
3
1

M =1000000009
dp=[0]*1000001
dp[2]=1
dp[3]=1
for i in range(4,1000001):
    dp[i]=(dp[i-3]+dp[i-2])%M
for i in range(int(input())):
    n=int(input())
    k=dp[n]%M
    print(k)
