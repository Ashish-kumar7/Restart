class Solution {
public:
    char slowestKey(vector<int>& A, string keysPressed) {
        char ans1;
        
        int dur=0;
        int ans=0;
        
        for(int i=0;i<keysPressed.length();i++){
            dur=A[i]-dur;
            if(ans<=dur){
                if(ans==dur){
                    ans1=max(keysPressed[i],ans1);
                }else{
                    ans1=keysPressed[i];
                }
                ans=dur;
            }
            dur=A[i];
        }
        
        return ans1;
        
    }
};