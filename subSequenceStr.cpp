Print subsequences of a string 
Ex:abc

Subseqences are : a,b,c,ab,ac,bc,abc but in substring ac will not come.

Void print_subs(string input,string output)
{
	If(input.length() == 0)
{
	Cout<<output<<endl;
     Return; 
}
//input.substr(1) means from 1st character to end.
Print_subs(input.substr(1),output);
Print_subs(input.substr(1),output+input[0]);
}


Number of subsequences with sum zero
Given an array arr[] of N integers. The task is to count the number of sub-sequences whose sum is 0.

Input: arr[] = {-1, 2, -2, 1}
Output: 3
All possible sub-sequences are {-1, 1}, {2, -2} and {-1, 2, -2, 1}

Int countSubSeq(int I,int sum ,int count,int a[],int n);
{
     If(i==n)
{
	If(sum == 0 && count >0)
{
   Return 1;
}  
Return 0;
}
	Int ans=0;
    //do not include current element
    Ans + = countSubSeq(i+1,sum,count,a,n);
    //include current element
    Ans+ = countSubSeq(i+1,sum+a[i],count+1,a,n);
   Return ans; 
}

14.Sum of all subsequences of a number:

Input : s = "123" 
Output : 24 
Explanation : all possible sub-sequences are 
1, 2, 3, {1, 2}, {2, 3}, {1, 3}, {1, 2, 3} 
which add up to 24 

#include <bits/stdc++.h>

using namespace std;
int sum=0,res=0;
void findsum(string str)
{
    for(int i=0;i<str.length();i++)
    {
        res+=str[i]-'0';
    }
   stringstream s(str);
   int num=0;
   s>>num;
    while(num>0)
    {
        sum+=num%10;
        num=num/10;
    }
}
void findSubSeq(string inp,string op)
{
    if(inp.length()==0)
    {
        //cout<<op<<endl;
        findsum(op);
        return;
    }
    findSubSeq(inp.substr(1),op);
    findSubSeq(inp.substr(1),op+inp[0]);
}
int main()
{
    string s;
    cin>>s;
    findSubSeq(s,"");
    cout<<sum<<"\t"<<res;
    return 0;
}

#Converting vector<string> into number:

void findSubSeq(vector<string> inp)
{
	for(int i=0;i<inp.size();i++)
	{
		string s;
	     for(int j=0;j<inp[i].length();j++)
	     {
	     	if(inp[i][j]==' ')
	     	{
	     		int ele = stoi(s);
	     		cout<<"ele is"<<ele;
	     		s="";
	     	}
	     	else
	     	{
	     		s+=inp[i][j];
	     	}
	     }
	     int ele = stoi(s);
	     cout<<"ele is"<<ele;
	}
}
int main()
{
 //   string s;
    vector<string> v;
    v.push_back("2 4");
    v.push_back("3 4");
    findSubSeq(v);
   // cout<<sum;
    return 0;
}

