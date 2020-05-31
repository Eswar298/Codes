The prime numbers are written in a spiral form starting at (0,0) as shown in the diagram below :

                               --------------    
                                              |
                                 ------       |
                                |      |      |
                                | -----       |
                                | -----------
                           

The numbers shown on the right are column number whereas the numbers shown on the left are row numbers.

Your task is to write a program that given a prime number finds out its position in the grid.

utput
Print N lines.
On each line is the answer to a single test case.
For every testcase print the X and the Y co-ordinates of the given input prime.

Sample Input 0

4
2
3
5
7
Sample Output 0

0 0
1 0
1 1
0 1

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void change(int *x,int *y,int d){
    //cout<<*x<<*y<<d<<endl;
    if(d==1){
        *y+=1;
    }else if(d==2){
        *x-=1;
    }else if(d==3){
        *y-=1;
    }else{
        *x+=1;
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    int a[1000004]={0};
    int i=2;
    while(i<1000004){
        
        for(int j=2;i*j<1000004;j++)
            a[i*j]=1;
        i++;
        while(i<1000004 && a[i]==1)i++;
        if(i==1000004)break;
    }
    int x,y;
    while(t--){
        x=0;
        y=0;
        int n;
        cin>>n;
        if(n==2){
            cout<<"0 0\n";
            continue;
        }
        int d,ju;
        d=4;
        ju=1;
        int jm=ju;
        int to=2;
        for(int k=3;k<=n;k++){
            if(a[k]==0){
                change(&x,&y,d);
                jm--;
                if(jm==0){
                   if(d==1)d=2;
                    else if(d==2)d=3;
                    else if(d==3)d=4;
                    else d=1;
                    to--;
                    jm=ju;
                }
                if(to==0){
                    ju+=1;
                    jm=ju;
                    to=2;
                }
                //cout<<d<<" "<<jm<<" "<<to<<" "<<ju<<endl;
            }
        }
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
