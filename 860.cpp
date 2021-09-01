class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if(bills[0]>5){
            return 0;
        }
        int change=5;
        
        int count5=1;
        int count10=0;
        int count20=0;
        for(int i=1;i<bills.size();i++){
            
            if(bills[i]-5>change){
                return 0;
            }
            
            if(bills[i]==5){
                count5++;
            }
            else if(bills[i]==10){
                count10++;
                if(count5<=0){
                    return 0;
                }
                count5--;
            }
            else  if(bills[i]==20){
                count20++;
                if(count5<=0 || (count10<=0 && count5<3)){
                    return 0;
                }
                if(count5>0 && count10>0){
                    count10--;
                    count5--; 
                }
                else{
                    count5=count5-3;
                }
            }
            change+=5;
        }
        return 1;
    }
};