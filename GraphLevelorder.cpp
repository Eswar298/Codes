Level order traversal of a tree is obtained by doing a breadth first search on it.

You are given a tree with N nodes and N-1 edges. Each edge is bidirectional and connects two nodes.

The nodes of the tree are indexed from 1 to N and you can consider 1 to be the root of the tree.

You are given an integer d. Your task is to print the number of nodes that are present at the dth level of the tree.

It is guaranteed that atleast one node will be present at the dth level.

Sample Input 0

20
11 1
1 2
13 3
15 4
17 5
11 6
2 7
1 8
15 9
4 10
15 12
5 13
2 14
17 15
15 16
11 17
15 18
9 19
16 20
2
Sample Output 0

3


#include<bits/stdc++.h>
using namespace std;
int sol;
void BFS(int s,vector<int> adj[],int visited[],int dis[],int d,int dest,int V)
{
queue <int> q;
q.push(s);
dis[s]=d;
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
dis[adj[p][i]]=dis[p]+1;
}
//cout<<"p is"<<p<<"adj is"<<adj[p][i]<<" "<<"dis is"<<dis[adj[p][i]]<<"\n";

}

}
//sol=dis[dest];
int count = 0; 
    for (int i = 0; i < V; i++)  
    {
       // cout<<dis[i]<<" "; 
        if (dis[i] == dest) 
            count++;     
    }
    sol= count;   
}
int main()
{
    int v,e,s,d,time,i,ti;
    cin>>v;
    e=v;
    int level;
    vector<int> adj[v+1];
    int visited[v+1]={0};
    int dis[v+1]={0};
/*    for(i=0;i<v+1;i++)
    {
        dis[v+1]=0;
    }*/
    for(i=0;i<e-1;i++)
    {
        int x,y;
        cin>>x>>y;
        //cout<<x<<y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cin>>level;
    BFS(1,adj,visited,dis,0,level-1,v);
    cout<<sol;
}
