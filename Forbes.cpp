orbes has a list of people and their wealth.

You have been hired as an intern and as a first task you have been asked to write a program such that given a list of amount of wealth
of N people, after each element in the list print the top 3 richest people's amount of wealth.

If there are less than three people in the list currently, you can print -1.

See the sample test case for clarity.

NOTE : You are expected to use the maxHeap data structure to solve this problem


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
        if(v.size()<3)
        {
            cout<<"-1\n";
        }
        else{
            sort(v.begin(),v.end());
            int k=v.size();
            for(int j=0;j<3;j++)
            {
                cout<<v[k-j-1]<<" ";
            }
            if(k==4)
            {
                v.erase(v.begin());
            }
            cout<<"\n";
        }
    }
    return 0;
}
