class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>ans(nums.size(),-1);
        stack<int>s;
        int n= nums.size();
        for(int i=2*n-1;i>=0;i--){
            while(s.size()>0 && nums[s.top()]<=nums[i%n]){
                s.pop();
            }
            ans[i%n]=s.empty()?-1:nums[s.top()];
            s.push(i%n);
        }
        return ans;
        
    }
};