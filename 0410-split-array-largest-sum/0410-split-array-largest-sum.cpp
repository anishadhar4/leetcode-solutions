class Solution {
private:
    int countsub(vector<int>& nums, int k,int maxsum){
        int count=1;
        int currentsum=0;
        for(int i=0;i<nums.size();i++){
            if(currentsum+nums[i]<=maxsum){
                currentsum+=nums[i];
            }else{
                count++;
                currentsum=nums[i];
            }
        }
        return count;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid=low+(high-low)/2;
            if(countsub(nums,k,mid)<=k){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;

        
    }
};