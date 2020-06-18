Initially you are given the number 0. After each day the numberdoubles itself. At any day, you can add the number 1 any number of 
times during the day.

You are given a number N and you need to tell the minimum number of times you have to add 1 to get N at any point of time.

For 8, you need to add 1 only once at the starting. It will double to 2, then to 4, then to 8.

For 5, you need to add 1 at the beginning, it will double to 2, then to 4, then you will have to add 1 again to make it 5.
So, answer is 2.

import java.util.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
        
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();

                int count = 0;
                while (n > 0) {
                    if (n % 2 != 0) {
                        n = n - 1;
                        count++;
                    } else if (n == 2) {
                        n = n - 2;
                        count++;
                    } else {
                        n = n / 2;
                    }
                }
                System.out.println(count);

        }

    }
}

while(n)
	    {
	        if(n%2==0)
	        {
	            n=n/2;
	        }
	        else
	        {
	            n-=1;
	        }
	        count++;
	    }
	    cout<<count<<"\n";
