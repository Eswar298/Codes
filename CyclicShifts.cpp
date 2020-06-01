You are given a number  represented as a binary representation of  bits. You are also given a number  and a character .

Determine a number  that is generated after cyclically shifting the binary representation of  by  positions either left if 
or right is .

Explanation
For first case :  N in binary is 0001 1110 1100 1001 and shifting it left by 5 position, it becomes 1101 1001 0010 0011 
which in decimal system is 55587

For second case : N in binary is 0001 1110 1100 1001 and shifted 3 position to right it becomes 0010 0011 1101 1001 which
in decimal system is 9177

if(d=='L'){
        while(k--){
           n*=2;
           if(n>65535){
               n-=65535;
           } 
        }
        }
        else{
            while(k--){
                if(n%2==1){
                    n=(n+65535)/2;
                }
                else
                n/=2;
            }
        }
        cout<<n<<endl;
        
        string s = bitset<16>(n).to_string();
        m %= s.size();
        if(d == 'L')
            s = s.substr(m) + s.substr(0, m);
        else
            s = s.substr(s.size() - m) + s.substr(0, s.size() - m);
        // cerr << s << '\n';
        cout << bitset<16> (s).to_ulong() << '\n';
        
(c=='L') ? n = (n << m) | (n >> (16 - m)) : n = (n >> m) | (n << (16 - m));
