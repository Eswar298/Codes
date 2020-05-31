A tree is defined as a group of nodes such that for every pair of nodes in the tree it is possible to reach from one node to another.
Note that this definition is applicable when the edges are bidirectional.

Size of a tree is defined as the number of nodes in a tree.

You are given a forest. A forest is a collection of multiple trees. Your task is to gather information about this forest.

Formally, you are supposed to find out three characteristics :
* Size of the biggest tree in the forest * Size of the smallest tree in the forest * Number of trees in the forest

Sample Input 0

5 3
1 2
2 3
4 5
Sample Output 0

3 2 2


#include<bits/stdc++.h>
using namespace std;

int BFS(int s,vector<int> adj[],int visited[])
{
queue <int> q;
q.push(s);
int sol=0;
visited[s]=true;
while(!q.empty())
{
int p=q.front();
q.pop();

for(int i=0;i<adj[p].size();i++)
{
        
if(visited[adj[p][i]]==false)
{
q.push(adj[p][i]);
visited [adj[p][i]]=true;
sol++;
}

}

}
return sol+1;
}
int main()
{
    int v,e,s,d,time,i;
    cin>>v>>e;
    vector<int> adj[v+1];
    int visited[v+1]={0};
    for(i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int ma=INT_MIN;
    int mi=INT_MAX;
    int count=0;
    for(i=1;i<=v;i++)
    {
        if(!visited[i])
        {
            //cout<<i<<"i";
            count++;
            int x=BFS(i,adj,visited);
            ma=max(x,ma);
            mi=min(x,mi);
           
        }
    }
         cout<<ma<<" "<<mi<<" "<<count;
    
}
