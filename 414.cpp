class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
    
        map<int,int,greater<int>>mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        if(mp.size()<3){
            return mp.begin()->first;
        }
        int count=3;
        for(auto it=mp.begin();it!=mp.end();it++){
            count--;
            if(count==0){
                return it->first;
            }
        }
        
        return 0;
    }
};