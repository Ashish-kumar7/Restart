class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        
        for(int i=shifts.size()-2;i>=0;i--){
            shifts[i]+=shifts[i+1];
            shifts[i]=shifts[i]%26;
        }
        
        for(int i=0;i<s.length();i++){
            int x=s[i]-'a';
            x+=shifts[i];
            x=x%26;
            x+='a';
            
            s[i]=(char)x;
        }
        return s;
    }
};