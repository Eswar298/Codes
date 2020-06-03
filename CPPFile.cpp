-->vector<int> v
v.push_back(ele)
sort(v.begin(),v.end())
reverse(v.begin(),v.end())
vector<int>::iterator it;
for(it = v.begin() ; it!=v.end() ;it++)
{ 
      cout<<*it;
}
v.erase(v.begin()+1)

-->set<int> s
s.insert(x)
s.count(x)
s.erase(x)

-->map<string,int> m
m["hello"]++;
map<string,int>::iterator it;
for(it=m.begin();it!=m.end();it++)
{
    cout<<it->first<<" "<<it->second;
}


-->to convert number to string
str = to_string(num)
      
-->cout<<fixed<<setprecision(6)<<ele;
-->getline(cin,s)

-->to convert string to num
num = stoi(str)

-->sub = str.substr(0,6)
n= s.length()
size_t found = str.find('str[i]')
if(found != string::npos)
{
      cout<<"found";
}

-->max(a,b)
-->*max_element(v.begin(),v.end())
-->count(str.begin(),str.end(),'c')
-->sort(arr,arr+n)

if(str[i]==" ")
{
      int n = stoi(str);
      str=" ";
}
else
{
str+=str[i];
}

-->Boost
#include<boost/algorithm/string.hpp>
vector<string> result; 
boost::split(result, input, boost::is_any_of(" ")); 
