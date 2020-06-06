Nobody knows, but N frogs live in Chef's garden.

Now they are siting on the X-axis and want to speak to each other. One frog can send a message to another one if the distance between 
them is less or equal to K.

Chef knows all P pairs of frogs, which want to send messages. Help him to define can they or not!

Note : More than 1 frog can be on the same point on the X-axis.

Input:
5 3 3
0 3 8 5 12
1 2
1 3
2 5

Output:
Yes
Yes
No

#include<bits/stdc++.h>
using namespace std;
int arr[111111] ;
std::map <int, int> levelOf, parentOf ;
int main(){
	// fast();
	int n, k, p ;

	std::cin >> n >> k >> p ;

	// int dist ;
	for(int i = 0 ; i < n ; i++){
		std::cin >> arr[i] ;
		levelOf[arr[i]] = i + 1 ;
	}

	std::sort(arr, arr + n) ;


	for(int i = 1 ; i < n ; i++){
		if(arr[i] - arr[i - 1] <= k){
			parentOf[levelOf[arr[i]]] = parentOf[levelOf[arr[i - 1]]] ;
		}
		else{
			parentOf[levelOf[arr[i]]] = levelOf[arr[i]] ;
		}
	}
	map<int,int>::iterator it1;
	for (auto it1 = levelOf.begin(); it1 != levelOf.end(); ++it1) {
	    std::cout << it1->first<<"  "<<it1->second << std::endl;
	}
   map<int,int>::iterator it;
   for (auto it = parentOf.begin(); it != parentOf.end(); ++it) {
       std::cout << it->first<<"  "<<it->second << std::endl;
   }
	int u, v ;
	for(int i = 0 ; i < p ; i++){
		std::cin >> u >> v ;

		if(parentOf[u] == parentOf[v]){
			std::cout << "Yes\n" ;
		}
		else{
			std::cout << "No\n" ;
		}
	}
}

from collections import defaultdict
n,k,q = map(int,input().split())
lst   = input().split()

new_lst = []

for i in range(len(lst)):
    new_lst.append((int(lst[i]),i+1))

new_lst.sort()
dct = defaultdict(int)

count = 0
dct[new_lst[0][1]] = 0


for i in range(1,len(new_lst)):
    if(abs(new_lst[i][0]-new_lst[i-1][0])>k):
        count+=1
    dct[new_lst[i][1]] = count

for i in range(q):
    u,v = map(int,input().split())
    if(dct[u]==dct[v]):
        print("Yes")
    else:
        print("No")

        


