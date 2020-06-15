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

Lapindrome

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
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		while(n-- > 0) {
		    String s = sc.next();
		    if(s.length() % 2 == 0) {
		        int[] arr = new int[26];
		        for(int i = 0; i < s.length() / 2; i++) {
		            arr[s.charAt(i) - 'a']++;
		        }
		        for(int i = s.length() / 2; i < s.length(); i++) {
		            arr[s.charAt(i) - 'a']--;
		        }
		        boolean b = true;
		        for(int i = 0; i < arr.length; i++) {
		            if(arr[i] != 0) {b = false;break;}
		        }
		        System.out.println(((b) ? "YES": "NO"));
		    } else {
		        int[] arr = new int[26];
		        for(int i = 0; i < s.length() / 2; i++) {
		            arr[s.charAt(i) - 'a']++;
		        }
		        for(int i = s.length() / 2 + 1; i < s.length(); i++) {
		            arr[s.charAt(i) - 'a']--;
		        }
		        boolean b = true;
		        for(int i = 0; i < arr.length; i++) {
		            if(arr[i] != 0) {b = false;break;}
		        }
		        System.out.println(((b) ? "YES": "NO"));
		    }
		}
	}
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
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while (t-- != 0) {
		    int n = sc.nextInt();
		    int m = sc.nextInt();
		    int k = sc.nextInt();
		    int x = Math.abs(n - m);
		    if (k < x) {
		        System.out.println(x - k);
		    } else {
		        System.out.println("0");
		    }
		}
	}
}


 public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        String a[]=s.split(" ");
        int t=Integer.parseInt(a[0]);
        int n=Integer.parseInt(a[1]);
        System.out.println(t+" "+n);
    }


public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int k = sc.nextInt();
		sc.nextLine();
		List<String> arr = new ArrayList<String>();
		
		while(k-->0){
		    
		    String str1 = sc.nextLine();
		    
		    if(str1.equals("CLOSEALL")){
		        arr.clear();
		        System.out.println(arr.size());
		    }
		    else if(arr.contains(str1)){
		            arr.remove(str1);
		            System.out.println(arr.size());
		    }
		    else{
		        arr.add(str1);
		        System.out.println(arr.size());
		    }
		    
		}
