 Chef likes to write poetry. Today, he has decided to write a X pages long poetry, but unfortunately his notebook has only Y pages
 left in it. Thus he decided to buy a new CHEFMATE notebook and went to the stationary shop. Shopkeeper showed him some N notebooks, 
 where the number of pages and price of the ith one are Pi pages and Ci rubles respectively. Chef has spent some money preparing for
 Ksen's birthday, and then he has only K rubles left for now. 
The first line of each test case contains four space-separated integers X, Y, K and N, described in the statement. The ith line of 
the next N lines contains two space-separated integers Pi and Ci, denoting the number of pages and price of the ith notebook
respectively.

#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,k,n;
	    cin>>x>>y>>k>>n;
	    int flag=0;
	    int needed=x-y;
	    while(n--)
	    {
	        int pages,price;
	        cin>>pages>>price;
	        if(pages>=needed&&price<=k)
	        flag=1;
	    }
	    if(flag==1)
	    cout<<"LuckyChef\n";
	    else
	    cout<<"UnluckyChef\n"; 
	}
	return 0;
}
