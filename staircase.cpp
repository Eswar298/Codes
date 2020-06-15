. There's a staircase with N steps, and you can climb 1 or 2 steps at a time. Given N, write a function that returns the number
of unique ways you can climb the staircase. The order of the steps matters.
For example, if N is 4, then there are 5 unique ways:
•	1, 1, 1, 1
•	2, 1, 1
•	1, 2, 1
•	1, 1, 2
•	2, 2

 -->This is similar to Fibonacci series

#Recursion

Num_ways(n) = num_ways(n-1) + num_ways(n-2);

#Dynamic Programming

Res[0]=1;res[1]=1;
For(i=2;i<=n;i++)
{
   Res[i]=res[i-2]+res[i-1];
}
Return res[n];

If num of steps are changes as {1,3,5} steps

Num_ways(n) = num_ways(n-1) + num_ways(n-3) +num_ways(n-5)

 res[0]=1;res[1]=1;
for(i=2;i<=n;i++)
{
  for(j=1;j<=5;j+=2)
  {
	res[i]+=res[i-j];
  }

}
return res[n]; 
