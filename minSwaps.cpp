https://leetcode.com/problems/minimum-swaps-to-make-sequences-increasing/discuss/119879/C%2B%2BJavaPython-DP-O(N)-Solution

int minSwap(vector<int>& A, vector<int>& B) {
        int N = A.size();
        int not_swap[1000] = {0};
        int swap[1000] = {1};
        for (int i = 1; i < N; ++i) {
            not_swap[i] = swap[i] = N;
            if (A[i - 1] < A[i] && B[i - 1] < B[i]) {
                not_swap[i] = not_swap[i - 1];
                swap[i] = swap[i - 1] + 1;
            }
            if (A[i - 1] < B[i] && B[i - 1] < A[i]) {
                not_swap[i] = min(not_swap[i], swap[i - 1]);
                swap[i] = min(swap[i], not_swap[i - 1] + 1);
            }
        }
        return min(swap[N - 1], not_swap[N - 1]);
    }
Java

    public int minSwap(int[] A, int[] B) {
        int N = A.length;
        int[] swap = new int[1000];
        int[] not_swap = new int[1000];
        swap[0] = 1;
        for (int i = 1; i < N; ++i) {
            not_swap[i] = swap[i] = N;
            if (A[i - 1] < A[i] && B[i - 1] < B[i]) {
                not_swap[i] = not_swap[i - 1];
                swap[i] = swap[i - 1] + 1;
            }
            if (A[i - 1] < B[i] && B[i - 1] < A[i]) {
                not_swap[i] = Math.min(not_swap[i], swap[i - 1]);
                swap[i] = Math.min(swap[i], not_swap[i - 1] + 1);
            }
        }
        return Math.min(swap[N - 1], not_swap[N - 1]);
    }
