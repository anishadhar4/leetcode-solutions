class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();

        int lowrow=0,highrow=m-1;
        int targetrow=-1;
        while(lowrow<=highrow){
            int midrow = lowrow+(highrow - lowrow)/2;
            if(matrix[midrow][0]<=target && target<=matrix[midrow][n-1]){
                targetrow=midrow;
                break;

            }else if(matrix[midrow][0]>target){
                highrow=midrow-1;
            }else{
                lowrow=midrow + 1;
            }
        }
        if(targetrow == -1)return false;

        int low=0,high=n-1;
        while(low<=high){
            int mid =low+(high - low)/2;
            if(matrix[targetrow][mid]==target)return true;
            else if(matrix[targetrow][mid]>target)high=mid-1;
            else low=mid+1;
        }
        return false;

        
    }
};