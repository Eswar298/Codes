Chef likes playing with strings. The most interesting game are named "CHEF in string". The move of the game consists of the following:
Chef takes a subsequence of string's letters that form the word "CHEF" and then he removes that symbols. The goal of the game is to
make the maximal number of moves. Please, help Chef and tell him the maximal possible number of moves that he is able to make for the 
given string S.


Example
Input:
CHEFCHEFFFF

Output:
2

Input:
CHHHEEEFFCC

Output:
1


class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
        String s=sc.nextLine();
        int c = 0, h = 0, e = 0, f = 0;
        for (int i = 0; i < s.length(); i++){
            char ch = s.charAt(i);
            if (ch == 'C')
                c++;
            else if (ch == 'H' && h < c)
                h++;
            else if (ch == 'E' && e < h)
                e++;
            else if (ch == 'F' && f < e)
                f++;
        }
        System.out.println(f);
    }
}
