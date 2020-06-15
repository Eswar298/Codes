import java.util.*;
class ATM
{
public static void main(String[] args)
{
Scanner sc=new Scanner(System.in);
int w=sc.nextInt();
float b=sc.nextFloat();
if(w%5==0 && (b-w-.50)>0)
{
float s=b-w-.50f;
System.out.println(String.format("%.2f",s));
}
else
{
System.out.println(String.format("%.2f",b));
}
}
}


import java.math.BigInteger;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		try {
		    Scanner input = new Scanner(System.in);
		int t = input.nextInt();
		
		for (int counter=0; counter<t; counter++) {
			int n = input.nextInt();
			BigInteger factorial = new BigInteger("1");
			
			for (int i=n; i>0; i--) {
				factorial = factorial.multiply(BigInteger.valueOf(i));
			}
			System.out.println(factorial);
		}
		} catch(Exception e) {
		    return;
		}
	}
}



import java.util.Scanner;
import java.util.Arrays;
class Sort{
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        int n=scanner.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=scanner.nextInt();
        }
        Arrays.sort(arr);
        for(int i=0;i<n;i++) {
            System.out.println(arr[i]);
        }
    }
}

static void reverse(Integer a[]) 
    { 
        Collections.reverse(Arrays.asList(a)); 
        System.out.println(Arrays.asList(a)); 
    } 
  
    public static void main(String[] args) 
    { 
        Integer [] arr = {10, 20, 30, 40, 50}; 
        reverse(arr); 
    } 
    
    
 int m = (int) (Math.sqrt(n));

int max_a = Math.max(a,b);

CEil and Receipt

/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
			Scanner obj=new Scanner(System.in);
			int t=obj.nextInt();
			int arr[]= {2048,1024,512,256,128,64,32,16,8,4,2,1};
			while(t>0) {
	  int n=obj.nextInt() ;
	  int c=0;
      for(int i:arr) {
    	  c+=n/i;
    	  n=n%i;
    	   }
		  System.out.println(c);
			t--;}
	}
}
