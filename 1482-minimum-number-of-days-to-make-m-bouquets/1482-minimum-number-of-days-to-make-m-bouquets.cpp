class Solution {
public:
    bool possible(vector<int>& bloomDay, int m, int k,int day){
        int count=0,no_ofb=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                count++;

            }else{
                no_ofb+=count/k;
                count=0;
            }
        }
        no_ofb+=count/k;
        return no_ofb>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val=1LL * m * k;
        int n=bloomDay.size();
        if(val>n)return -1;
        int maxi=INT_MIN,mini=INT_MAX;
        for(int i=0;i<bloomDay.size();i++){
            maxi=max(maxi,bloomDay[i]);
            mini=min(mini,bloomDay[i]);

        }
        int low=mini,high=maxi;
        int ans=-1;
        while(low<=high){
            int  mid=low+(high-low)/2;
            if(possible( bloomDay,  m,  k,mid)== true){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
        
    }
};