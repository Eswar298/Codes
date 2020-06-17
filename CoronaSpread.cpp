There are N people on a street (numbered 1 through N). For simplicity, we'll view them as points on a line.
For each valid i, the position of the i-th person is Xi.

It turns out that exactly one of these people is infected with the virus COVID-19, but we do not know which one.
The virus will spread from an infected person to a non-infected person whenever the distance between them is at most 2.
If we wait long enough, a specific set of people (depending on the person that was infected initially) will become infected;
let's call the size of this set the final number of infected people.

Your task is to find the smallest and largest value of the final number of infected people,
i.e. this number in the best and in the worst possible scenario.


Example Input
3
2
3 6
3
1 3 5
5
1 2 5 6 7
Example Output
1 1
3 3
2 3
Explanation:
Example case 1: The distance between the two people is 3, so the virus cannot spread and at the end, there will always be only one infected person.

Example case 2: The distance between each two adjacent people is 2, so all of them will eventually get infected.

Example case 3:

In one of the best possible scenarios, the person at the position 1 is infected initially and the virus will also infect
the person at the position 2.
In one of the worst possible scenarios, the person at the position 5 is infected initially and the virus will also infect the people
at the positions 6 and 7.


#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        int n,i;cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int dis[n];
        if(n>0)
        {
            dis[0]=abs(a[1]-a[0]);
        }
        for(i=1;i<n;i++)
        {
            dis[i]=abs(a[i]-a[i-1]);
        }
        int count=0,max=INT_MIN,min=INT_MAX;
         for(i=0;i<n;i++)
        {
            
           if(dis[i]<=2)
           {
               count++;
           }
           else
           {
               if(count==0)
               {
                   count=1;
               }
               if(count>max)
               {
                   max=count;
               }
               if(count<min)
               {
                   min=count;
               }
               count=1;
           }
        }
        if(count>max)
        {
            max=count;
        }
        if(count<min)
        {
            min=count;
        }
        cout<<min<<" "<<max<<endl;
    }
}
