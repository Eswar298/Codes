#There are n people standing in a circle waiting to be executed. The counting out begins at some point in the circle and proceeds around
the circle in a fixed direction. In each step, a certain number of people are skipped and the next person is executed. The elimination
proceeds around the circle (which is becoming smaller and smaller as the executed people are removed), until only the last person remains,
who is given freedom. Given the total number of persons n and a number k which indicates that k-1 persons are skipped and kth person is
killed in circle. The task is to choose the place in the initial circle so that you are the last one remaining and so survive.

For example, if n = 5 and k = 2, then the safe position is 3. Firstly, the person at position 2 is killed, then person at position 4 is
killed, then person at position 1 is killed. Finally, the person at position 5 is killed. So the person at position 3 survives.

int find_pos(vector<int> &v,int n,int k,int i)
{
if(v.size()==1)
return v[0];
i=(i+(k-1))%v.size();
v.erase(v.begin()+i);
return find_pos(v,n,k,i);
}
int josephus(int n, int k)
{
vector<int> v;
for(int i=0;i<n;i++)
{
 v.push_back(i+1);
}
return find_pos(v,n,k,0);
}

#Recursive
return n==1 ? 1:((k + josephus(n-1, k) - 1)%n + 1);
