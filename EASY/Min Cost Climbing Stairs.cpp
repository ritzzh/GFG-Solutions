class Solution {
  public:
    int minCostClimbingStairs(vector<int>&cost ,int N) {
        int n = cost.size();
        if(n==0){
            return 0;
        }
        if(n==1){
            return cost[0];
        }
        vector<int> dp(N);
        dp[0] = cost[0];
        dp[1] = cost[1];
        
        int i=2;
        for(i=2;i<n;i++){
            dp[i] += cost[i] + min(dp[i-1],dp[i-2]);
        }
        return min(dp[i-1],dp[i-2]);
    }
};
