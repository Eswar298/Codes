For a given non-negative integer N, find the next smallest Happy Number.
A number is called happy if it leads to 1 after a sequence of steps where
in each step number is replaced by sum of squares of its digit that is 
if we start with Happy Number and keep replacing it with digits square
sum, we reach 1.

Input:

4
8
3
0
10

Output:

10
7
1
13


Explanation:

The next smallest happy numbers for the numbers 8,3 and 0 are 10,7 and 1 respectively.
For 10 which is a happy number itself, therefore it's next smallest happy number is 13.
using namespace std;
int squarenum(int n)
{
    int sum=0;
     while(n>0)
        {
	    int di=n%10;
            sum+=di*di;
            n=n/10;
        }
        return sum;
}
bool ishappy(int n)
{
    set<int> s;
    s.insert(n);
    if(n==1)
    {
        return true;
    }
    while(1)
    {

        int sum=squarenum(n);
        if(s.find(sum)!=s.end())
        {
            return false;
        }
	if(sum==1)
	{
		return true;
	}
        s.insert(sum);
        n=sum;
    }
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    n++;
	    while(1)
	    {
	        if(ishappy(n))
	        {
	            cout<<n<<"\n";
	            break;
	        }
	        n++;
	    }
	}
	return 0;
}

static  int squares(int n)
    {
        int sum=0;
        double k=2;
        while(n>0)
        {
            double r=n%10;
            sum= (int) (sum+Math.pow(r,k));
             n=n/10;

        }
        return sum;
    }
    static  int sum_square(HashSet<Integer> s,int n,int num)
    {
        int k=squares(n);
        if(k==1)
        {
            return num;
        }
        if(s.contains(k) )
        {
            num++;
            n=num;
        }
        else
        {
            n = k;
            s.add(n);
        }
       
        return (sum_square(s,n,num));
    }
    public static void main(String[] args) {
        int t,i,n;
        Scanner sc=new Scanner(System.in);
        t=sc.nextInt();
         while (t>0) {
            n = sc.nextInt();n++;
            HashSet<Integer> s = new HashSet<Integer>();
            System.out.println(sum_square(s,n,n));
            t--;
        }
    }
