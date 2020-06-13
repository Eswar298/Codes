-->Dynamic Programming

Number of ways to reach a score
I/P:20
O/P:4
[3,3,3,3,3,5],[10,10],[5,5,5,5],[5,5,10]

3,5,10
Int count(int n)
Int table[n+1], i ;
          Memset(table,0,sizeof(table));
         Table[0]=1;
       For(i=3;i<=n;i++)
	 Table[i]+=table[i-3];
      For(i=5;<=n;i++)
	 Table[i]+=table[i-5];
     For(i=10;i<=n;i++)
	Table[i]+=table[i-10];
Return table[n];
}

