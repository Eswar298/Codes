#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int s1,s2,e1,e2,n;
int len;
bool ballUtil(char mat[][1000],int x,int y,int d,int l){
    if(x==e1&&y==e2){
        len=l+1;
        return 1;
    }
    if(x<0||y<0||x>=n||y>=n)return 0;
    if(mat[x][y]=='.'){
        if(d==1)
            return ballUtil(mat,x-1,y,d,1+l);
        else if(d==2)
            return ballUtil(mat,x,y+1,d,1+l);
        else if(d==3)
            return ballUtil(mat,x+1,y,d,1+l);
        else 
            return ballUtil(mat,x,y-1,d,1+l);
    }
    else if(mat[x][y]=='\\'){
            if(d==1)
            return ballUtil(mat,x,y-1,4,1+l);
        else if(d==2)
            return ballUtil(mat,x+1,y,3,1+l);
        else if(d==3)
            return ballUtil(mat,x,y+1,2,1+l);
        else 
            return ballUtil(mat,x-1,y,1,1+l);
    }else {
        if(d==1)
            return ballUtil(mat,x,y+1,2,1+l);
        else if(d==2)
            return ballUtil(mat,x-1,y,1,1+l);
        else if(d==3)
            return ballUtil(mat,x,y-1,4,1+l);
        else 
            return ballUtil(mat,x+1,y,3,1+l);
    }
        return 0;    
}
void ball(char mat[][1000]){
    if(ballUtil(mat,s1-1,s2,1,1)||ballUtil(mat,s1,s2+1,2,1)||ballUtil(mat,s1+1,s2,3,1)||ballUtil(mat,s1,s2-1,4,1))
        cout<<len;
    else cout<<"-1";
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    cin>>n;
    cin>>s1>>s2>>e1>>e2;
    len=0;
    char mat[n][1000];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>mat[i][j];
    ball(mat);
    return 0;
}
