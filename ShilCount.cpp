Shil got an array of N integers as a present on his birthday. But he didn't liked it. Shil wants to make this array beautiful.
Shil considers an array A1,A2,A3 . . . AN beautiful if A1 > AN. Inorder to make it beautiful Shil can swap any two numbers in the array
Also Shil can perform this operation any number of times on any adjacent pairs of integers in the array A.Find the number of ways in
which Shil can make this array beautiful.Two ways are considered same if resulting array after making all the swaps have same A1 and AN.

I/P: 5
1 4 3 2 5
O/p: 10



1.	cin>>N;
2.	long long int A[N];
3.	for (long long int i=0; i<N;i++)
4.	cin>>A[i];
5.	long long int K = 0;
6.	    for(long long int i=0; i<N; i++) {
7.	        K = max(K, A[i]);
8.	    }
9.	    long long int Aux[K];
10.	    for(long long int i=0 ; i<=K; i++) {
11.	        Aux[i] = 0;
12.	    }
13.	    for(long long int i=0; i<N; i++) {
14.	        Aux[A[i]]++;
15.	    }
16.	    for(long long int i=0; i<=K; i++)
17.	    if(Aux[i]>0)
18.	      uni++;
19.	 
20.	      //uni++;
21.	 
22.	    cout<<(uni*(uni-1))/2;
23.	    return 0;
24.	}
