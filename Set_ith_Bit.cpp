To check if the ith bit is set or not (1 or not), we can use AND operator. How?

Using Left shift operator, we can write 2i as 1 << i .
-->left shift is equivalent to multiplying the bit pattern with 2^k
-->Right shift is equivalent to dividing the bit pattern with 2k



bool check (int N)
    {
        if( N & (1 << i) )
            return true;
        else
            return false;
    }

