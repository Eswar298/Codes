You are stuck in a 2D maze. The maze is represented by a 2D array of integer a[n][m] where n is the number of rows and m is the
number of columns and a[i][j] denotes the depth of the cell at the intersection of ith row and jth column. You can only slide down,
i.e. you can only go from a cell to an adjacent cell with depth less than or equal to the current cell. Also you can only travel to 
cells that share a side with the current cell you are standing on.

You are given the co-ordinates of the cell that you start on (Xs, Ys) and the co-ordinates of the cell you are supposed to end on 
(Xe, Ye) (These are the co-ordinates that Barua stands on).

Barua is waiting for you on the cell with the end co-ordinates. Do you think you have a chance to meet him?

Sample Input 0

2 2
1 1 2 2
5 4
7 1
Sample Output 0

Hie Barua

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n,m,s1,s2,e1,e2;
bool meetUtil(int a[][1005],int x,int y,int d,int v[][1005]){
    if(x<0||y<0||x>=n||y>=m)return 0;
    if(v[x][y]==1)return 0;
    //cout<<x<<y<<a[x][y]<<d<<endl;
    if(x==e1 && y==e2 && a[x][y]<=d){
        return 1;
    }
    v[x][y]=1;
    if(a[x][y]>d){
        v[x][y]=0;
        return 0;
    }
    bool t1=meetUtil(a,x-1,y,a[x][y],v);
    bool t2=meetUtil(a,x,y+1,a[x][y],v);
    bool t3=meetUtil(a,x+1,y,a[x][y],v);
    bool t4=meetUtil(a,x,y-1,a[x][y],v);
    //v[x][y]=0;
    if(t1||t2||t3||t4)return 1;
    return 0;
}
void meet(int a[][1005]){
    int v[n][1005]={0};
    v[s1][s2]=1;
   
    bool t1=meetUtil(a,s1-1,s2,a[s1][s2],v);
    bool t2=meetUtil(a,s1,s2+1,a[s1][s2],v);
    bool t3=meetUtil(a,s1+1,s2,a[s1][s2],v);
    bool t4=meetUtil(a,s1,s2-1,a[s1][s2],v);
    if(t1||t2||t3||t4||(s1==e1&&s2==e2))
        cout<<"Hie Barua";
    else cout<<"No Chance";
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin>>n>>m;
    int a[n][1005];
    cin>>s1>>s2>>e1>>e2;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    s1--;
    s2--;
    e1--;
    e2--;
    meet(a);
    return 0;
}

