class Solution {
public:
    string reverseVowels(string s) {
        vector<char>vec;
        
        for(int i=0;i<s.length();i++){
            if(s[i] =='a' || s[i] =='e' || s[i]=='i' || s[i] =='o' || s[i]=='u' || s[i] =='A' || s[i] =='E' || s[i]=='I' || s[i] =='O' || s[i]=='U'){
                vec.push_back(s[i]);
            }
        }
        
        // cout<<vec.size()<<endl;
        int n=vec.size();
        
        int j=0;
        for(int i=0;i<s.length();i++){
            if(s[i] =='a' || s[i] =='e' || s[i]=='i' || s[i] =='o' || s[i]=='u' || s[i] =='A' || s[i] =='E' || s[i]=='I' || s[i] =='O' || s[i]=='U'){
                // cout<<vec[vec.size()-i-1]<<endl;
                s[i]=vec[n-j-1];
                j++;
            }
        }
        
        
        return s;
        
    }
        
};