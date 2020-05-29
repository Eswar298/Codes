Given a string, find the smallest string that can generate the original string by concatenation. See example case for clarity.
Sample Input 0
abababab

Sample Output 0
ab

str1 = input()
n = len(str1)
str2 = ""
i = 1
while(i<=n):
    str2 = str2 + str1[:i]
    temp = ""
    m = len(str2)
    
    while(m != n):
        if(n%i != 0):
            break
        
        temp = temp + str2
        m = len(temp)
    if(temp == str1):
        print(str2)
        break
    elif(len(str2)==n):
        print(str2)
        break
    i+=1
    str2 = ""
    
 
bool checkstring(string s,string str)
{
    int len=str.length();
     string temp=s;
    while(temp!=str)
    {
        temp+=s;
        if(temp.length() >=len)
        {
            break;
        }
    }
    if(temp!=str)
    {
        return false;
    }
    return true;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string str;
    cin>>str;
    string s="";
    int n=str.length();
    int i,j;
       i=0;
        for(j=i+1;j<=n;j++)
        {
            s=str.substr(0,j);
            if(checkstring(s,str))
            {
                cout<<s;
                break;
            }
        }
    return 0;
}
