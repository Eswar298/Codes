How many ways are there to place a black and a white knight on an N * M chessboard such that they do not attack each other? The knights have to be placed on different squares. A knight can move two squares horizontally and one square vertically (L shaped), or two squares vertically and one square horizontally (L shaped). The knights attack each other if one can reach the other in one move.

Input:
3
2 2
2 3
4 5
Output:
12
26
312

Sol:
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int ans=(n*m-1)*n*m;
        if(n>=1&&m>=2){
            ans-=(4*(n-1)*(m-2));
        }
        if(n>=2&&m>=1){
            ans-=(4*(n-2)*(m-1));
        }
        cout<<ans<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define endll "\n"
#define pp pair<int,int>
#define fi first
#define se second
vector<pp> v={{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{-1,2},{1,-2},{-1,-2}};
int issafe(int i,int j,int n,int m){
    if(i>=0&&j>=0&&i<n&&j<m){
        return 1;
    }
    return 0;
}
int f(int i,int j,int n,int m){
    int ans=0;
    for(int k=0;k<8;k++){
        int a=v[k].fi;
        int b=v[k].se;
        if(issafe(i+a,j+b,n,m)){
            ans++;
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int ans=(n*m-1)*n *m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans-=f(i,j,n,m);
            }
        }
        cout<<ans<<endll;
    }
    return 0;
}
