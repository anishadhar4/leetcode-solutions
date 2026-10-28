class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxw=0;
        int lp=0,rp=n-1;
        while(lp<rp){
            int w=rp-lp;
            int ht=min(height[lp],height[rp]);
            int currwater=w*ht;
            maxw=max(maxw,currwater);

            height[lp]<height[rp]?lp++:rp--;
        }
        return maxw;//2 pointer approach, smaller pointer is controlling pointer.
        
    }

};