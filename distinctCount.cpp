Given an array A of N numbers, find the number of distinct pairs (i, j) such that j >=i and A[i] = A[j].
First line of the input contains number of test cases T. Each test case has two lines, first line is the number N, followed by a
line consisting of N integers which are the elements of array A.
For each test case print the number of distinct pairs.

I/P: 3
1 2 3 4     o/p:4
1 2 1         o/p:4
1 1 11 1    o/p:15          

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int k=0,l=INT_MAX;
        for(int i=0;i<n; i++)
           {
            	k=max(k,a[i]);
           		l=min(l,a[i]);
           }
        for(int i=0;i<n;i++)
        a[i]+=abs(l);
        k=k+abs(l); 
        int aux[k];
        for(int i=0;i<=k;i++)
        aux[i]=0;
        for(int i=0;i<n; i++)
        {
            aux[a[i]]++;
            sum+=aux[a[i]];
        }
        cout<<sum<<endl; 
        }
    }
