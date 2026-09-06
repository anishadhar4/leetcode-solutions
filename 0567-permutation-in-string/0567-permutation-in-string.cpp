class Solution {
public:
    bool isfreqsame(int freq1[], int freq2[]){
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};//integer array
        for(int i=0;i<s1.length();i++){
            freq[s1[i]-'a']++;//stores index of characters in s1
        }
        int windsize=s1.length();
        
        for(int i=0;i<s2.length();i++){
            int windidx=0,idx=i;
            int windfreq[26]={0};

            while(windidx<s1.length() && idx<s2.length()){//window concept
                windfreq[s2[idx]-'a']++;
                windidx++;idx++;

            }
            if (isfreqsame(freq,windfreq)){
                return true;
            }
            
        }
        return false;
        


        
        
    }
};