class Solution {
public:
    int maxArea(vector<int>& height) {
        int n =height.size();
        int max_w=0;
        int lp=0,rp=n-1;
        while(lp<rp){
            int w=rp-lp;
            int ht=min(height[lp],height[rp]);
            int area=w*ht;
            max_w=max(area,max_w);

            height[lp]<height[rp]?lp++:rp--;
        }
        return max_w;
        
    }
};