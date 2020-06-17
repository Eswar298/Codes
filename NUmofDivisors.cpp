int number;    
    while(cin >> number)
    {
    int number_of_divisors = 0;
    
    for(int divisor = 1; divisor*divisor <= number; divisor++)
    {
        if(number%divisor == 0)
        {
            number_of_divisors += (divisor*divisor == number ? 1 : 2);
        }
    }
    cout << number_of_divisors << "\n";
    }
