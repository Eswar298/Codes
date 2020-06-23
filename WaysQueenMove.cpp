#include <bits/stdc++.h>
using namespace std;
static int c=0;
void find(char arr[][1005],int i,int j,int n,int vis[][1005])
{
    cout<<"arr"<<i<<" "<<j<<endl;
    
    if(i-1>=0 && i<n && j<n && j>=0 && arr[i-1][j]=='E'  && vis[i-1][j]==0)
    {
        c++;
         vis[i-1][j]=1;
        find(arr,i-1,j,n,vis);
        cout<<"i-1 "<<i<<" j "<<j<<endl;
    }
    if(i+1<n && i>=0 && j<n && j>=0 && arr[i+1][j]=='E' && vis[i+1][j]==0)
    {
        c++;
         vis[i+1][j]=1;
        find(arr,i+1,j,n,vis);
        cout<<"i+1 "<<i<<" j "<<j<<endl;
    }
    if(j+1<n && i>=0 && i<n && j>=0 && arr[i][j+1]=='E' && vis[i][j+1]==0)
    {
        c++;
         vis[i][j+1]=1;
        find(arr,i,j+1,n,vis);
        cout<<"i "<<i<<" j+1 "<<j<<endl;
    }
    if(j-1<n && i>=0 && i<n && j>=0 && arr[i][j-1]=='E' &&  vis[i][j-1]==0)
    {
        c++;
         vis[i][j-1]=1;
        find(arr,i,j-1,n,vis);
        cout<<"i "<<i<<" j-1 "<<j<<endl;
    }
    if(i+1<n && i>=0 && j<n && j-1>=0 && arr[i+1][j-1]=='E' && vis[i+1][j-1]==0)
    {
        c++;
         vis[i+1][j-1]=1;
        find(arr,i+1,j-1,n,vis);
        cout<<"i+1 "<<i<<" j-1 "<<j<<endl;
    }
    if(i<n && i-1>=0 && j+1<n && j>=0 && arr[i-1][j+1]=='E' && vis[i-1][j+1]==0)
    {
        c++;
         vis[i-1][j+1]=1;
        find(arr,i-1,j+1,n,vis);
        cout<<"i-1 "<<i<<" j+1 "<<j<<endl;
    }
    if(i+1<n && i>=0 && j+1<n && j>=0 && arr[i+1][j+1]=='E' &&  vis[i+1][j+1]==0)
    {
        c++;
         vis[i+1][j+1]=1;
        find(arr,i+1,j+1,n,vis);
        cout<<"i+1 "<<i<<" j+1 "<<j<<endl;
    }
    if(i<n && i-1>=0 && j<n && j-1>=0 && arr[i-1][j-1]=='E' && vis[i-1][j-1]==0)
    {
        c++;
         vis[i-1][j-1]=1;
        find(arr,i-1,j-1,n,vis);
        cout<<"i-1 "<<i<<" j-1 "<<j<<endl;
    }
    
}
int main() {
    int n;
    cin>>n;
    char arr[n][1005];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int vis[n][1005];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            vis[i][j]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]=='Q')
            {
                find(arr,i,j,n,vis);
            }
        }
    }
    cout<<"ans is"<<c;
}
