class Solution {
public:
    
    bool check(string A, int s, int e) {
        while(s <= e){
            if(A[s] != A[e])
                return false;
            
            s++;
            e--;
        }
        return true;
    }
    
    
    bool validPalindrome(string A) {
        int s = 0;
        int e = A.size() - 1;
        while(s <= e) {
            if(A[s] != A[e]) {
                if(check(A, s+1, e) || check(A, s, e-1))
                    return true;
                else
                    return false;
            }
            s++; 
            e--;
        }
        return true;
    }
};