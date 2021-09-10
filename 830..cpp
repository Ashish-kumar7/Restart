class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        
        int count =0;
        int start=0;
        int end=0;
        vector<vector<int>>ans;
        
        int i;
        for( i=0;i<s.length()-1;i++){
            
            char x=s[i];
            if(s[i+1]==x){
                count++;
            }else {
                end=i;
                if(end-start>1){
                    ans.push_back({start,end});
                }
                start=i+1;
                
            }
            
        }
        end=i;
        if(end-start>1){
                    ans.push_back({start,end});
        }
        
        
        return ans;
    }
};