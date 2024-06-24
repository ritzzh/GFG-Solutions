class Solution{   
public:
    long long subarraySum(long long a[], long long n)
    {
        long long sum=0,mod = 1e9+7;
        for(long i=0;i<n;i++)
        {
            sum+= (a[i]*(i+1)*(n-i))%mod;
        }
        return sum%mod;
    }
};
