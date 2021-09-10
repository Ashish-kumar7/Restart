class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        
        int n=nums.size();
        
        int vis[n];
        
        for(int i=0;i<n;i++){
            vis[i]=0;
        }
        
        int count=0;
        vector<int>temp;
        
      for(int j=0;j<n;j++){
          if(vis[j]==0){
              for(int i=j;i<n;){
                    if(vis[i]==0){
                        temp.push_back(nums[i]);
                        vis[i]=1;
                        i=nums[i];
                    }else{
                        break;
                    }
                   
                }
              
              // count=max(count,temp.size());
              if(temp.size()>count){
                  count=temp.size();
              }
              temp.clear();
          }
      }  
        
        
        return count;
        
    }
};