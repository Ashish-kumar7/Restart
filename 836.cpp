class Solution {
public:
    bool isRectangleOverlap(vector<int>& vec1, vector<int>& vec2) {
        
        if(vec1[0]>=vec2[2] || vec1[1]>=vec2[3] || vec1[2]<=vec2[0] || vec1[3]<=vec2[1]){
             return 0;
         }
            
            return 1;
    }
};