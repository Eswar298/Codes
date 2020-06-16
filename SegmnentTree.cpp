Segment Tree is used in cases where there are multiple range queries on array and modifications of elements of the same array.
For example, finding the sum of all the elements in an array from indices  l to r , or finding the minimum 
(famously known as Range Minumum Query problem) of all the elements in an array from indices l to r.
These problems can be easily solved with one of the most versatile data structures, Segment Tree.

Update: To update the element of the array  and reflect the corresponding change in the Segment tree.
Query: In this operation we can query on an interval or segment and return the answer to the problem
(say minimum/maximum/summation in the particular segment).

For each type 1 query, print the minimum element in the sub-array  A[l : r]

Ip:
5 5
1 5 2 4 3
q 1 5
q 1 3
q 3 5
u 3 6
q 1 5

Op:
1
1
2
1

#include <iostream>
using namespace std;
void build(int node,int start,int end,int tree[],int a[])
{
if(start==end)
tree[node]=a[start];
else
{
int mid=(start+end)/2;
build(2*node,start,mid,tree,a); 
build(2*node+1,mid+1,end,tree,a);
if(tree[2*node]<tree[2*node+1])
tree[node]=tree[2*node];
else
tree[node]=tree[2*node+1];
}
}
void update(int node,int start,int end,int idx,int val,int tree[],int a[])
{
if(start==end)
{
a[idx]=val;
tree[node]=val;
}
else
{
int mid=(start+end)/2;
if(idx>=start&&idx<=mid)
update(2*node,start,mid,idx,val,tree,a);
else
update(2*node+1,mid+1,end,idx,val,tree,a);
if(tree[2*node]<tree[2*node+1])
tree[node]=tree[2*node];
else
tree[node]=tree[2*node+1];
}
}
int query(int node,int start,int end,int l,int r,int tree[])
{
if(l>end||start>r)
return 100005;
if(l<=start&&r>=end)
return tree[node];
int p1,p2;
int mid=(start+end)/2;
p1=query(2*node,start,mid,l,r,tree);
p2=query(2*node+1,mid+1,end,l,r,tree);
if(p1<p2)
return p1;
else
return p2;
}
int main()
{
int tree[2000005],a[100005];
int n,q;
cin>>n>>q;
for(int i=1;i<=n;i++)
cin>>a[i];
build(1,1,n,tree,a);
while(q--)
{
char b;
int x,y;
cin>>b>>x>>y;
if(b=='q')
{
int c=query(1,1,n,x,y,tree);
cout<<c<<endl;
}
else
update(1,1,n,x,y,tree,a);
}
return 0;
}
