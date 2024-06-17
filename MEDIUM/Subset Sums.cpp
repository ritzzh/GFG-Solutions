class Solution {
  public:
    int sum=0;
    vector<int> subsetSums(vector<int> arr, int n) {
        vector<int> ans;
        recur(0,arr,ans,n);
        return ans;
    }
    void recur(int index, vector<int> &arr, vector<int> &ans,int size)
    {
        ans.push_back(sum);
        for(int i=index;i<size;i++)
        {
            sum+=arr[i];
            recur(i+1,arr,ans,size);
            sum-=arr[i];
        }
        return;
    }
};
