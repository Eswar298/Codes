Due to the COVID pandemic, people have been advised to stay at least 6 feet away from any other person.
Now, people are lining up in a queue at the local shop and it is your duty to check whether they are all following this advice.

There are a total of N spots (numbered 1 through N) where people can stand in front of the local shop. The distance 
between each pair of adjacent spots is 1 foot. Each spot may be either empty or occupied; you are given a sequence A1,A2,…,AN, 
where for each valid i, Ai=0 means that the i-th spot is empty, while Ai=1 means that there is a person standing at this spot. 
It is guaranteed that the queue is not completely empty.

For example, if N=11 and the sequence A is (0,1,0,0,0,0,0,1,0,0,1), then this is a queue in which people are not following 
the advice because there are two people at a distance of just 3 feet from each other.

You need to determine whether the people outside the local shop are following the social distancing advice or not.
As long as some two people are standing at a distance smaller than 6 feet from each other, it is bad and you should report it,
since social distancing is not being followed.

Input:
3
3
1 0 1
7
1 0 0 0 0 0 1
11
0 1 0 0 0 0 0 1 0 0 1

Output:
NO
YES
NO

import java.util.*;
//import java.util.*;
import java.lang.*;
import java.io.*;

public class Main {
    public static void main(String args[]) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0)
        {
        int n=sc.nextInt();
        int[] arr=new int[n];
        int[] b=new int[n];
        int i,k=0;
        for(i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
            if(arr[i]==1)
            {
                b[k]=i;
                k++;
            }
        }
        int flag=1;
        for(i=1;i<k;i++)
        {
            if(b[i]-b[i-1]<6)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            System.out.println("YES");
        }
        else
        {
            System.out.println("NO");
        }
    }
    }
}
