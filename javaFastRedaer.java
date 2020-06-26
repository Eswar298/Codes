/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		FastReader scan=new FastReader();
		int t=Integer.parseInt(scan.nextLine());
		for(int i=1;i<=t;i++){
		    String s1=scan.nextLine();
		    String s2="";
		    for(int j=0;j<s1.length();j++){
		        char c=s1.charAt(j);
		        s2=c+s2;
		        
		    }
		    int j;
		    for(j=0;j<s1.length();j++){
		        if(s1.charAt(j)==s2.charAt(j)){
		            continue;
		        }
		        else{
		            break;
		        }
		        
		    }
		    if(j==s1.length()){
		        System.out.println("wins");
		    }
		    else{
		        System.out.println("loses");
		    }
		    
		    
		    
		    
		}
		
	}
	 static class FastReader 
    { 
        BufferedReader br; 
        StringTokenizer st; 
  
        public FastReader() 
        { 
            br = new BufferedReader(new
                     InputStreamReader(System.in)); 
        } 
  
        String next() 
        { 
            while (st == null || !st.hasMoreElements()) 
            { 
                try
                { 
                    st = new StringTokenizer(br.readLine()); 
                } 
                catch (IOException  e) 
                { 
                    e.printStackTrace(); 
                } 
            } 
            return st.nextToken(); 
        } 
  
        int nextInt() 
        { 
            return Integer.parseInt(next()); 
        } 
  
        long nextLong() 
        { 
            return Long.parseLong(next()); 
        } 
  
        double nextDouble() 
        { 
            return Double.parseDouble(next()); 
        } 
  
        String nextLine() 
        { 
            String str = ""; 
            try
            { 
                str = br.readLine(); 
            } 
            catch (IOException e) 
            { 
                e.printStackTrace(); 
            } 
            return str; 
        } 
    } 
}
