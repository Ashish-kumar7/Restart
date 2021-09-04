class Solution {
public:
    bool checkRecord(string s) {
        int countlate=0;
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='A'){
                countlate++;
            }
            if(countlate>=2){
                return 0;
            }
            
            if(s[i]=='L'){
                if(i+2<=s.length()-1){
                    if(s[i+1]=='L' && s[i+2]=='L'){
                        return 0;
                    }
                }
            }
        }
        return 1;
    }
};