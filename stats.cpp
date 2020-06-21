n=5 k=1;
2 9 -10 25 1
after removing first greatest and first smallest number we get {2,9,1}
12/3=4.000000
is the answer

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    int i,j;
	    for(i=0,j=n-1;i<k,j>=n-k;i++,j--)
	    {
	        arr[i]=0;
	        arr[j]=0;
	    }
	    double sum=0;
	    double x=n-2*k;
	    for(int i=0;i<n;i++)
	    {
	        sum+=arr[i];
	    }
	    double ans=sum/x;
	    cout<<fixed<<setprecision(6)<<ans<<endl;
	}
	return 0;
}

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
		Scanner sc= new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0)
		{
		    
		   int n=sc.nextInt(),k=sc.nextInt();
		   ArrayList<Integer> li=new ArrayList<Integer>();
		   for(int i=0;i<n; i++)
		   li.add(sc.nextInt());
		   
		   Collections cal= null;
		   cal.sort(li);
		 //  System.out.println(li);
		 double sum=0;int j=0;
		 for(int i=k;i<n-k;i++)
		{ sum=sum+li.get(i);j++;}
		   
		  
		 System.out.println((double)sum/j+"00000");    
		
		  //System.out.printf("%.6f \n",(float)sum/j);
		}
		
	}
}
