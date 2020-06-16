Given an array consisting of N integers, you have to do the following operation K times.

Find out the sum of all the elements in the array. Denote it by S. Insert an integer in the array strictly greater than S.
Hence, size of the array will increase by one.
Thus, at the end of the K operations, the array will have N + K elements. Find out the smallest possible value of the last number 
inserted in the array. Since this number can be very large, you just have to tell whether it will be odd or even

public static void main(String[] args)
    {
      Scanner sc = new Scanner(System.in);
        int t;
        t=sc.nextInt();
        while(t-->0) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            int sum=0;
            ArrayList<Integer> arr = new ArrayList<Integer>();
            for (int i = 0; i < n; i++) {
                arr.add(sc.nextInt());
                sum+=arr.get(i);
            }
            int num=sum+1;
            int last = 0;
            for (int i = 1; i < k; i++) {
                 sum+=num;
                num=sum+1;

            }
            if ((num) % 2 == 0) {
                System.out.println("even");
            } else {
                System.out.println("odd");
            }
        }
    }
