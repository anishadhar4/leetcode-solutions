class Solution {
public:
    int lowerbound(vector<int>& nums, int target){
        int ans=nums.size();
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>=target){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
    int upperbound(vector<int>& nums, int target){
        int ans=nums.size();
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>target){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;

    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb = lowerbound(nums,target);
        int n =nums.size();
        if(lb==n || nums[lb]!=target)return {-1,-1};
        int ub = upperbound(nums,target);
        return{lb,ub-1};

        
    }
};