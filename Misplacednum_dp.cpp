If a misplaced positive number is found in the front part of the sequence, replace it with the last misplaced negative number (the one found near the end of the input). The second misplaced positive number should be swapped with the second last misplaced negative number. Negative numbers found at the head (begining) of the sequence , should be kept in place . 
Input >> Output Examples: 
wheatFromChaff ({7, -8, 1 ,-2}) ==> return ({-2, -8, 1, 7})  
Explanation: 
Since 7 is a positive number , it should not be located at the beginnig so it needs to be swapped with the last negative number -2. 
wheatFromChaff ({-31, -5, 11 , -42, -22, -46, -4, -28 }) ==> return ({-31, -5,- 28, -42, -22, 46 , -4, 11}) 


vector <long long int> wheatFromChaff (vector <long long int> values)
{
   int indexend = values.size() - 1;
    int indexbegin = 0;

    while (indexbegin != indexend)
    {
        while (values[indexbegin] < 0 && indexbegin != indexend)
            indexbegin++;
        while (values[indexend] > 0 && indexbegin != indexend)
            indexend--;
        if (indexbegin != indexend)
        {
            swap(values[indexbegin], values[indexend]);
        }
    }
    return values;
}
