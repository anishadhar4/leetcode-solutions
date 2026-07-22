class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n =nums.size();
        int st =0,end=n-1;
        while(st<=end){
            int mid=st+(end-st)/2;
           
            if(n==1)return nums[0];
            if(mid==0 && nums[mid]!=nums[mid+1])return nums[mid];
            if(mid==n-1 && nums[mid]!=nums[n-2])return nums[n-1];
            if(nums[mid]!=nums[mid-1]&& nums[mid]!=nums[mid+1])return nums[mid];

            if(mid%2==0){//even no.s on either side of mid
                if(nums[mid]==nums[mid-1]){
                    end=mid-1;//search left
                }else{
                    st=mid+1;//search right
                }

            }else{
                if(nums[mid]==nums[mid-1]){
                    st=mid+1;
                }else{
                    end=mid-1;
                }
            }
        }
        return -1;
        
    }
};