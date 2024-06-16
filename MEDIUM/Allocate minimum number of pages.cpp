class Solution {
  public:
    int check(int arr[],int mid,int m, int n)
    {
        int stu=1;
        int pages = 0;
        
        for(int i=0;i<n;i++){
            if((pages+arr[i])<=mid){
                pages+=arr[i];
            }
            else{
                stu++;
                pages=arr[i];
            }
        }
        return stu;
        
    }
    long long findPages(int n, int arr[], int m) {
        int l=0,h=0,mid=0;
        
        if(m>n){
            return -1;
        }   
        for(int i=0;i<n;i++){
            h+=arr[i];
            l = max(l,arr[i]);
        }
        while(l<=h){
            mid=(l+h)/2;
            
            int curr = check(arr,mid,m,n);
            if(curr<=m){
                h=mid-1;
            }
            else if(curr>m){
                l = mid+1;
            }

        }
        
    }
};
