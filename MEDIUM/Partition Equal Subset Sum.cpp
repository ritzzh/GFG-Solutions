class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        int sum = 0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        if(sum & 1) return 0;
        
        
        vector<vector<int>> dp(N, vector<int>((sum/2)+1,-1)); 
        return check (0,arr,sum/2,N,dp);
    }
    bool check(int i, int nums[], int sum, int n,vector<vector<int>>&dp)
    {     
        if(i>=n){
            return 0;
        }
        if(sum<0){
            return 0;
        }
        if(sum==0){
            return 1;
        }
        if(dp[i][sum]!=-1)
        {
            return dp[i][sum];
        }

        int take = check(i+1,nums,sum-nums[i],n,dp);
        int nottake = check(i+1,nums,sum,n,dp);

        return dp[i][sum] = take || nottake;
    }
};
