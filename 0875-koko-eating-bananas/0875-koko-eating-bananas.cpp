class Solution {
public:
    int fmax(vector<int>& piles){
        int maxi=INT_MIN;
        int n=piles.size();
        for(int i=0;i<n;i++){
            maxi=max(maxi,piles[i]);
        }
        return maxi;
    }
    long long hours(vector<int>& piles, int hourly){
        long long totalhrs=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            totalhrs+=ceil((double)piles[i]/(double)hourly);
        }
        return totalhrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=fmax(piles);
        int n =piles.size();
        while(low<=high){
            int mid=low + (high-low)/2;
            long long totalh=hours(piles,mid);
            if(totalh<=h){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;


        
    }
};