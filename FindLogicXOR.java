out.println((n & -n));

Input:
0
1
5
12
22
1424
Output:
0
1
1
4
2
16

The religious act which Barney and his friends hold most sacred, XORING the natural numbers in the given range.
This time Barney is a bit busy with picking up some girls, so he asked you to help him. He gave you two numbers L and R,
you have to find if XOR of all the numbers in range L to R (L,R both inclusive) is odd or even.
Sample Input:
    4 
    1 4
    2 6
    3 3
    2 3
Sample Output:
    Even
    Even
    Odd
    Odd
EXPLANATION:
Test case -1 -> XOR (1,2,3,4) =4

Test case -2 -> XOR (2,3,4,5,6) =6

Test case -3 -> XOR (3) =3

Test case -4 -> XOR (2,3) =1

 Since xor of odd 1’s is 1 and xor of even
1’s is 0.
/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		StringBuilder str=new StringBuilder();
		for(int i=1;i<=t;i++)
		{
		    long L=sc.nextLong();
		    long R=sc.nextLong();
		    if((R-L+1)%2==0)
		    {
		        if((R-L+1)%4==0)
		        str.append("Even").append("\n");
		        else
		        {
		            str.append("Odd").append("\n");
		        }
		    }
		    else
		    {
		        if(L%2==0)
		        {
		            if((R-L)%4!=0)
		            {
		                str.append("Odd").append("\n");
		            }
		            else
		            str.append("Even").append("\n");
		        }
		        else
		        {
		            if(((R-L)%4)==0)
		            {
		                str.append("Odd").append("\n");
		            }
		            else
		            str.append("Even").append("\n");
		        }
		    }
		}
		System.out.println(str);
	}
	
}


#include<iostream>
#include<cstring>
using namespace std;

long long int find_xor(long long int n)
{
    long long res[] = {n,1,n+1,0};
    return res[n%4];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        long long  int a,b,x;
        cin >> a >> b;
        if(a<=b)
        {
            x=find_xor(a-1)^find_xor(b);
        }
        else
        {
            x=find_xor(b-1)^find_xor(a);
        }
        if(x%2==0)
            cout << "Even" << endl;
        else
            cout << "Odd"  << endl;
    }
    return 0;
}
