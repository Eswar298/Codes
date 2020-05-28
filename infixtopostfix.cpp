#INFIX TO POSTFIX
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define MAX 500
int precedence(char c)
{
    switch(c)
    {
        case '^':return 3;
        case '*':return 2;
        case '/':return 2;
        case '+':return 1;
        case '-':return 1;
        case '(':return 0;
    }
    return -1;
}
int main()
{
    int t;
    cin>>t;
    char str[500];
    string result;
    char   stack[500];
    int top=-1,i,k=0;
    while(t--)
    {
        int i;
        cin>>str;
        //cout<<str<<endl;
        for(i=0;i<strlen(str);i++)
        {
            if(str[i]=='(')
            {
                stack[++top]=str[i];
            }
            else if(str[i]>='a' && str[i]<='z')
            {
               // result[k++]=str[i];
                //cout<<str[i]<<" ";
                result.push_back(str[i]);
            }
            else if(str[i]==')')
            {
                while(stack[top]!='(')
                {
                    //result[k++]=stack[top--];
                    result.push_back(stack[top]);
                    //cout<<stack[top]<<"h";
                    top--;
                }
                top--;
            }
            else
            {
                while(precedence(stack[top])<=precedence(str[i]) && stack[top]!='(')
                {
                    char ch=stack[top];top--;
                    cout<<ch<<" ";
                    result.push_back(ch);
                }
                stack[++top]=str[i];
            }
        }
        while(stack[top]=='(')
        {
            result.push_back(stack[top]);
        }
        cout<<result<<endl;
        result.clear();
    }
    return 0;
}
