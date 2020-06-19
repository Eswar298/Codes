Chef has N vases in a row (numbered 1 through N, initially from left to right). He wants to sort them in a particular order which he finds the most beautiful. You are given a permutation p1,p2,…,pN of the integers 1 through N; for each valid i, Chef wants the i-th vase to end up as the pi-th vase from the left.

In order to achieve this, Chef can swap vases. Any two vases can be swapped in 1 minute. Chef also has a very efficient, but limited, robot at his disposal. You are given M pairs (X1,Y1),(X2,Y2),…,(XM,YM). For each valid i, the robot can instantly swap two vases whenever one of them is at the position Xi and the other at the position Yi. Note that the initial positions of the vases are irrelevant to the robot.

Formally, Chef, at any moment, may choose to perform one of the following actions, until the vases are sorted in the desired order:

Choose two indices i and j (1≤i,j≤N) and swap the vases that are currently at the positions i and j. It takes 1 minute to perform this action.
Choose an integer k (1≤k≤M) and order the robot to swap the vases that are currently at the positions Xk and Yk. It takes 0 minutes to perform this action.
Chef cannot perform multiple operations at the same time ― if he chooses to perform some operation of the first type, he has to wait for 1 minute before performing any further operations.

What is the minimum number of minutes that Chef needs to sort the vases?

Example Input
3
3 1
2 3 1
2 3
5 10
2 4 5 1 3
1 2
1 3
1 4
1 5
2 3
2 4
2 5
3 4
3 5
4 5
4 1
3 1 4 2
1 2
Example Output
1
0
2

Explanation
Example case 1: Chef can ask the robot to swap the vases at the positions 2 and 3, and then he can swap the vases at the positions 1 and 2.

Example case 2: The robot can swap each pair of vases, so the answer is 0.

Example case 3: Chef can swap the vases at the positions 1 and 4, then ask the robot to swap the vases at the positions 1 and 2, 
and then swap the vases at the positions 3 and 4, taking a total of two minutes.

#include <iostream>
#include <string>
#include <cassert>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
 
int n, m, k;
int p[20];
int dsu[20];
vector<pair<int, int> > e;
int dp[(1 << 18) + 5];
int nxt[20];
int cnt[20];
bool used[20];
 
int get_anc(int x) {
    if (x == dsu[x]) return x;
    return dsu[x] = get_anc(dsu[x]);
}
 
void dfs(int x) {
    if (used[x]) return;
    used[x] = true;
    if (nxt[x])
        dfs(nxt[x]);
}
 
bool is_simple_cycle(int mask) {
    for (int i = 0; i < n; ++i) {
        cnt[i] = 0;
        used[i] = false;
        nxt[i] = 0;
    }
    for (int i = 0; i < k; ++i)
        if (mask & (1 << i)) {
            int x = e[i].first;
            int y = e[i].second;
            ++cnt[x];
            ++cnt[y];
            nxt[x] = y;
        }
    for (int i = 0; i < n; ++i)
        if (cnt[i] != 0 && cnt[i] != 2) return false;
    for (int i = 0; i < n; ++i) if (cnt[i]) {
        dfs(i);
        break;
    }
    for (int i = 0; i < n; ++i)
        if (cnt[i] && !used[i]) return false;
    return true;
}
 
void solve(int test_id) {
    scanf("%d %d\n", &n, &m);
    for (int i = 0; i < n; ++i) {
        if (i) scanf(" ");
        scanf("%d", &p[i]);
        --p[i];
    }
    for (int i = 0; i < n; ++i) {
        dsu[i] = i;
    }
    for (int i = 0; i < m; ++i) {
        int x, y;
        scanf("%d %d\n", &x, &y);
        --x; --y;
        x = get_anc(x);
        y = get_anc(y);
        if (x != y) dsu[x] = y;
    }
    e.clear();
    for (int i = 0; i < n; ++i) {
        int x = i;
        int y = p[i];
        x = get_anc(x);
        y = get_anc(y);
        if (x != y) e.push_back({x, y});
    }
    k = (int)e.size();
    for (int i = 1; i < (1 << k); ++i) {
        if (is_simple_cycle(i)) {
            dp[i] = 1;
        } else dp[i] = 0;
    }
    for (int i = 1; i < (1 << k); ++i) {
        for (int j = i; j > 0; j = (j - 1) & i) {
            if (dp[j] && dp[i ^ j])
                dp[i] = max(dp[i], dp[j] + dp[i ^ j]);
        }
    }
    int result = (int)e.size() - dp[(1 << k) - 1];
    printf("%d\n", result);
}
 
int main(int argc, const char * argv[]) {
    #ifdef __APPLE__
        freopen("/Users/danya.smelskiy/Documents/Danya/Resources/input.txt","r",stdin);
    #endif
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int tests;
    scanf("%d\n", &tests);
    for (int i = 0; i < tests; ++i) {
        solve(i);
    }
    return 0;
}
