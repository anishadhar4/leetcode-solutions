class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxrowidx=0;
        int maxcount=-1;
        int m =mat.size();//total no of rows 
        int n=mat[0].size();//total no of columns

        for(int i=0;i<m;i++){
            int count=0;
            for(int j=0;j<n;j++){
                count+=mat[i][j];
            }
            if(count>maxcount){
                maxcount=count;
                maxrowidx=i;
            }
        }
        return {maxrowidx,maxcount};
        
    }
};