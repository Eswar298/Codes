import java.io.*;
 
public class Main {
     
    public static void main(String[] args) {
         
        InputStream is = null;
        BufferedReader br = null;
         
        try {
              char[][] l=new char[2][8];
            is = System.in;
            br = new BufferedReader(new InputStreamReader(is));
             
            String line = null;
             int k=0;
            while ((line = br.readLine()) != null) {
                if (line.equalsIgnoreCase("quit")) {
                    break;
                }
                System.out.println("Line entered : " + line);
                int n=line.length();
                String a[]=line.split(" ");
                System.out.println("len is"+a.length);
                String s="";
                for(int i=0;i<8;i++)
                {
                    s+=a[i];
                }
                System.out.println("s is"+s);
               
                char[] arr=s.toCharArray();
               
                l[k++]=arr;
            }
              for(int i=0;i<2;i++)
                {
                      for(int j=0;j<8;j++)
                {
                     System.out.print(l[i][j]+" ");
                }
                     System.out.println();
                }
             
        }
        catch (IOException ioe) {
            System.out.println("Exception while reading input " + ioe);
        }
        finally {
            // close the streams using close method
            try {
                if (br != null) {
                    br.close();
                }
            }
            catch (IOException ioe) {
                System.out.println("Error while closing stream: " + ioe);
            }
 
        }
         
    }
 
}
