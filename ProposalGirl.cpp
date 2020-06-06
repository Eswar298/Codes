There are N countries {1,2,3,4....N} and N-1 roads(i.e depicting a tree) 
Bishu lives in the Country 1 so this can be considered as the root of the tree. 
Now there are Q girls who lives in various countries (not equal to 1) . 
All of them want to propose Bishu.But Bishu has some condition. 
He will accept the proposal of the girl who lives at minimum distance from his country. 
Now the distance between two countries is the number of roads between them. 
If two or more girls are at the same minimum distance then he will accept the proposal of the girl who lives in a country with
minimum id. 
No two girls are at same country. 
Input: First line consists of N,i.e number of countries Next N-1 lines follow the type u v which denotes there is a road between u and
v. Next line consists of Q Next Q lines consists of x where the girls live. 
Output: Print the id of the country of the girl who will be accepted. 
Help Him!!!!! 
contraints: 2<=N<=1000 1<=u,v<=N 1<=Q<=(N-1) 
SAMPLE INPUT  
6
1 2
1 3
1 4
2 5
2 6
4 
5
6
3
4 
SAMPLE OUTPUT:
3       

1.	#include<bits/stdc++.h>
2.	using namespace std;
3.	void dfs(int s,vector<int> a[],int vis[],int dis[],int d)
4.	{
5.		vis[s]=1;
6.		dis[s]=d;
7.		for(int i=0;i<a[s].size();i++)
8.		{
9.			if(vis[a[s][i]]==0)
10.			dfs(a[s][i],a,vis,dis,d+1);}}
11.	int main()
12.	{
13.		long int n,x,y,k,min,ans;
14.		cin>>n;
15.		vector <int> a[n+1];
16.		int vis[n+1]={0},dis[n+1]={0};
17.		k=n-1;
18.		while(k--)
19.		{
20.			cin>>x>>y;
21.			a[x].push_back(y);
22.			a[y].push_back(x);
23.		}
24.		dfs(1,a,vis,dis,0);
25.		cin>>k;
26.		min=10000000;
27.		ans=10000000;
28.		while(k--)
29.		{
30.			cin>>n;
31.			if(dis[n]<min)
32.			{
33.				min=dis[n];
34.				ans=n;
35.			}
36.			if(dis[n]==min&&n<ans)
37.			ans=n;
38.		}
39.		cout<<ans;
40.	}
