There are N Mice and N holes are placed in a straight line.

Each hole can accomodate only 1 mouse.

A mouse can stay at his position, move one step right from x to x + 1, or move one step left from x to x − 1.
Any of these moves consumes 1 minute.

Assign mice to holes so that the time when the last mouse gets inside a hole is minimized.

#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,max=0;
    cin>>n;
    int holes[n],position[n];
    for(i=0;i<n;i++)
    {
        cin>>position[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>holes[i];
    }
    sort(holes,holes+n);
    sort(position,position+n);
    for(i=0;i<n;i++)
    {
        int dis=abs(position[i]-holes[i]);
        if(dis>max)
        {
            max=dis;
        }
    }
    cout<<max;
    return 0;
}
