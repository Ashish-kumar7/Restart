class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mp;
        
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i])==mp.end()){
                mp[s[i]]=t[i];    
            }
            else{
                if(t[i]!=mp[s[i]]){
                    return 0;
                }
            }  
        }
        
        
         unordered_map<char,char>mp1;
        
        for(int i=0;i<t.length();i++){
            if(mp1.find(t[i])==mp1.end()){
                mp1[t[i]]=s[i];    
            }
            else{
                if(s[i]!=mp1[t[i]]){
                    return 0;
                }
            }  
        }
        
        return 1;
    }
};