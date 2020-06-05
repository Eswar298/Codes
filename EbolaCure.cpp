An antidote has been developed for the ebola crisis. This antidote is conjuctive, i.e. If it is given to a person, then the person
who is connected to this person will also be cured. Two people X and Y are connected if X and Y are adjacent or if there exists a
person Z such that X and Z are connected and Z and Y are connected.

So, for every connected group of people we need one antidote. This antidotes strength must be equal to the highest infected person 
in the group.

Your task is to calculate the number of antidotes of different strengths needed.

Sample Input 0

5
0 0 0 1 5
1 1 0 1 1
3 1 0 0 0
1 1 0 1 1
4 4 0 3 1
Sample Output 0

0 1 1 1 


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n;

int cureG(int a[][1005],int x,int y){
    if(x<0||y<0||x>=n||y>=n)return 0;
    if(a[x][y]==0)return 0;
    int p=a[x][y];
    a[x][y]=0;
    int val=max(max(max(max(cureG(a,x-1,y),cureG(a,x-1,y-1)),
                max(cureG(a,x-1,y+1),cureG(a,x,y-1))),
                max(max(cureG(a,x,y+1),cureG(a,x-1,y)),
                max(cureG(a,x+1,y),cureG(a,x+1,y-1)))),cureG(a,x+1,y+1));
    val=max(val,p);
    
    return val;
}
void cure(int a[][1005]){
    int c[4]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]>0){
                int co=cureG(a,i,j);
                if(co>1)
                    c[co-2]++;
            }
        }
    }
    for(int i=0;i<4;i++)
        cout<<c[i]<<" ";
}
int main() {
    cin>>n;
    int a[n][1005];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }
    cure(a);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
