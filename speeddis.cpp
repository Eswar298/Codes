You are given a graph with N nodes and M edges. There may be multiple edges between the same pair of nodes and there may be self loops. Nodes are indexed from 1 to N. Mario resides in node indexed P while Luigi lives in the node with index Q. It takes T amount of time to go from one node to an adjacent node. Your task is to calculate the minimum time that it will take for Mario to go visit Luigi.
Input
First line contains 5 integers : N, M, P, Q, T.
Next M lines each contain two integers U and V denoting an edge between the vertex with index U and the vertex with index V.
Output
Print the minimum time it takes for mario to go meet luigi
If it is not possible for mario to go visit luigi, print -1.
Notes
All input values are less than or equal to 1000

Sample Input 0
5 6 1 5 2
1 2
1 3
1 4
2 4
3 4
4 5
Sample Output 0
4



#include<bits/stdc++.h>
using namespace std;
int sol;
void BFS(int s,vector<int> adj[],int visited[],int dis[],int d,int dest)
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
cout<<"p is"<<p<<"adj is"<<adj[p][i]<<" "<<"dis is"<<dis[adj[p][i]]<<"\n";
}

}
sol=dis[dest];
}
int main()
{
	int v,e,s,d,time,i,ti;
	cin>>v>>e>>s>>d>>time;
	vector<int> adj[v+1];
	int visited[v+1]={0};
	int dis[v+1]={0};
/*	for(i=0;i<v+1;i++)
	{
		dis[v+1]=0;
	}*/
	for(i=0;i<e;i++)
	{
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	BFS(s,adj,visited,dis,0,d);
	ti = sol*time;
	if(ti==0)
	{
	    cout<<"-1";return 0;
	}
	cout<<ti;
}
