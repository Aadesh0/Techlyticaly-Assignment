#include <iostream>
using namespace std;

int maximizeMoney(int N, int K) {
    int dp1 = 0, dp2 = K; // initialize the first two DP states
    for (int i = 2; i <= N; i++) {
        int dp = max(dp1 + K, dp2); // calculate the current DP state
        dp1 = dp2; // update the previous DP states
        dp2 = dp;
    }
    return dp2; // return the maximum amount the robber can steal
}

int main() {
    int N, K;
    cout << "Enter the number of houses: ";
    cin >> N;
    cout << "Enter the amount of money in each house: ";
    cin >> K;
    int ans = maximizeMoney(N, K);
    cout << "The maximum amount the robber can steal is: " << ans << endl;
    return 0;
}


/* 
DP[0] = 0 (base case)
DP[1] = K = 10 (base case)
DP[2] = max(DP[1], DP[0] + K) = max(10, 0 + 10) = 10
DP[3] = max(DP[2], DP[1] + K) = max(10, 10 + 10) = 20
DP[4] = max(DP[3], DP[2] + K) = max(20, 10 + 10) = 20
DP[5] = max(DP[4], DP[3] + K) = max(20, 20 + 10) = 30 (final answer)
*/
