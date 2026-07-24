class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int idx=0;

        for(int i=0;i<n;i++){//calcualte count
            char ch=chars[i];
            int count=0;
            while(i<n && chars[i]==ch){
                count++;i++;
            }
            if(count == 1){//store character
                chars[idx]=ch;
                idx++;
            }else{
                chars[idx++]=ch;
                string str=to_string(count);//store character then digit
                for(char dig:str){
                    chars[idx++]=dig;
                }
            }
            i--;
            
        }
        chars.resize(idx);
        return idx;

        
    }
};