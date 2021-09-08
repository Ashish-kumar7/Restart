class Solution {
public:
    
    static bool comp(vector<int>&A,vector<int>&B){
        if(A[0]==B[0]){
            return A[1]>B[1];
        }
        return A[0]<B[0];
    }
    
    int numberOfWeakCharacters(vector<vector<int>>& A) {
        
        sort(A.begin(),A.end(),comp);
        
        int ans=0;
        int maxi=INT_MIN;
        
        
        for(int i=A.size()-1;i>=0;i--){
            if(A[i][1]<maxi){
                ans++;
            }
            maxi=max(maxi,A[i][1]);
        }
        
        return ans;
        
    }
};