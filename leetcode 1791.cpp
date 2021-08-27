class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size();
        int A[1000000];
        
        for(int i=0;i<=100000;i++){
            A[i]=0;
        }
        
        for(int i=0;i<n;i++){
            A[edges[i][0]]++;
            A[edges[i][1]]++;
        }
        
        for(int i=0;i<=100000;i++){
            if(A[i]==n){
                return i;
            }
        }
        return -1;
    }
};