class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        unordered_map<int,int>mp;
        
        
        int n=matrix.size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<matrix[i].size();j++){
                int val=i-j;
                if(mp.find(val)==mp.end()){
                    mp[val]=matrix[i][j];
                }
                else {
                    auto it=mp.find(val);
                    if(it->second!=matrix[i][j]){
                        return 0;
                    }
                }
            }
        }
        return 1;
        
        
    }
};