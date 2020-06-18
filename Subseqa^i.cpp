Given a string s, the task is to count number of subsequences of the form aibjck, where i >= 1, j >=1 and k >= 1.

Note: Two subsequences are considered different if the set of array indexes picked for the 2 subsequences are different.


Examples:

Input  : abbc
Output : 3
Subsequences are abc, abc and abbc

Input  : abcabc
Output : 7
Subsequences are abc, abc, abbc, aabc
abcc, abc and abc


using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string a;
	    cin >> a;
	    int n = a.size();
	    int ac=0, bc=0, cc=0;
	    for (int i=0; i < n; i++) {
	        char ch = a[i];
	        if (ch == 'a') ac = 1 + 2*ac;
	        else if (ch == 'b') bc = ac + 2*bc;
	        else if (ch == 'c') cc = bc + 2*cc;
	    }
	    cout<<cc<<"\n";
	}
	return 0;
}
