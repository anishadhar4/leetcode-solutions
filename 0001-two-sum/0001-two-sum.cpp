class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back({nums[i],i});

        }
        
        sort(v.begin(),v.end());
        
        int st=0;
        int end=n-1;
        while(st<end){
            int sum=v[st].first + v[end].first;//store element
            if(sum>target){
                end--;
            }
            else if(sum<target){
                st++;
            }
            else{
                return{v[st].second,v[end].second};//store index
            }
        }
        return{};

        
    }
};