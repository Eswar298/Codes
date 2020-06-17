-->Bitwise
x<<y  --> x*2^y

x>>y  --> x/2^y

1)Power of 2
  x&(x-1) == 0 power of 2
2)Number of of 1's
  n=n&(n-1)
  c++
3)To know ith bit is set or not
   ( N && 1<<i )  i.e  1*2^i  
   
4) x ^ ( x & (x-1)) : Returns the rightmost 1 in binary representation of x.
  
5)x & (-x) : Returns the rightmost 1 in binary representation of x

6)x | (1 << n) : Returns the number x with the nth bit set.

7)long largest_power(long N)
    {
        //changing all right side bits to 1.
        N = N| (N>>1);
        N = N| (N>>2);
        N = N| (N>>4);
        N = N| (N>>8);
        return (N+1)>>1;
    }
8)
 
