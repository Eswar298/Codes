//C++ Reverse Digits in a number
while(n > 0){
            int lastDigit = n%10;
            reverse = (reverse * 10) + lastDigit;
            n= n/10;
        }
