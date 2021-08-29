class Solution {
public:
    
    
    string kthLargestNumber(vector<string>& nums, int k) {
        
        vector<pair<int,string>>v;
        
        
        for(int i=0;i<nums.size();i++){
            v.push_back({nums[i].size(),nums[i]});
        }
        
        sort(v.begin(),v.end());
        
        return v[nums.size()-k].second;
    }
};