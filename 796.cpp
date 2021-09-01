class Solution {
public:
    bool rotateString(string s, string goal) {
        string temp=goal;
        goal=goal+temp;
        
        for(int i=0;i<goal.length()-s.length();i++){
            if(goal.substr(i,s.length())==s){
                return 1;
            }
        }
        return 0;
        
    }
};