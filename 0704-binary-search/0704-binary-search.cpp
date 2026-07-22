class Solution {

private:
    int helper(vector<int>& nums,int tar,int st,int end)    {
        if(st>end)return -1;//recursion ..base case
        int mid =st+(end-st)/2;

        if(tar>nums[mid]){//SC-O(log n)
            return helper(nums,tar,mid+1,end);
        }else if(tar<nums[mid]){
            return helper(nums,tar,st,mid-1);
        }else{
            return mid;
        }

    } 
public:
    int search(vector<int>& nums, int tar) {
        int n =nums.size();
        
        return helper(nums,tar,0,n-1);
        
    }
};