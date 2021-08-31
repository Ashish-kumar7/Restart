class Solution {
public:   
    int findMin(vector<int>& nums) {
        
        if( nums.size()==1 ){
            return nums[0];
        }
        
        int end = nums.size()-1;
        int start =0;
        
        if(nums[0]<nums[end]){
            return nums[0];
        }
    
        
        while(start<=end){
            
            int mid = (start+end)/2;
            
            if(nums[mid]>nums[mid+1]){
                return  nums[mid+1];
            }
            if(nums[mid-1]>nums[mid]){
                return nums[mid];
            }
            if(nums[mid]>nums[start]){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        
        
        return -1;
        
    }
};