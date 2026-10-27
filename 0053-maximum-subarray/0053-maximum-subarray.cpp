class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n= nums.size();
        int c_sum=0;
        int m_sum= INT_MIN;
        for(int i=0;i<n;i++){
            c_sum+=nums[i];
            m_sum=max(c_sum,m_sum);
            if(c_sum<0){
                c_sum=0;
            }
        }
        return m_sum;
        
    }
};