class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int low=0,high=n-1;
        while(low<=high){
            int mid=low +(high-low)/2;
            int missing=arr[mid]-(mid+1);//expected value is i+1
            if(missing>=k){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low+k;//low contains count of array elemnts before target that y plusk
        
    }
};