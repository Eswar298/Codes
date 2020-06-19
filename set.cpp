#include <bits/stdc++.h>
using namespace std;
void display(const set<pair<int,int> >& s) 
{ 
    // range-based for loop 
    for (auto const &x : s) { 
        cout << "(" << x.first << ", "
             << x.second << ")"
             << " "; 
    }   
} 
int main() {
    int n,m;
    cin>>n>>m;
    set<pair<int,int> > s;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        pair<int,int> mk=make_pair(x,y);
        s.insert(mk);
    }
    int b[n];
    for(i=0;i<n;i++)
    {
        b[i]=i+1;
    }
    display(s);
}


if (x != y) e.push_back({x, y});
    }
    vector<pair<int, int> >::const_iterator it;
    for(it=e.begin();it!=e.end();it++)
    {
        cout<<"\n"<<it->first<<"\t"<<it->second;
    }
