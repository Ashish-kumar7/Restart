#include <bits/stdc++.h>

using namespace std;

vector<string>vec={".","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};

vector<string>solve(string str){

    if(str.length()<=0){
        vector<string>abc;
        abc.push_back("");
        return abc;
    }

    char x=str[0];

    string mid=str.substr(1);

    vector<string>temp=solve(mid);

     vector<string>final;

    for(int i=0;i<temp.size();i++){
        string pqr=temp[i];
        string formal=vec[x-'0'];

        for(int j=0;j<formal.length();j++){
            string new1= formal[j]+pqr;
            final.push_back(new1);
            // cout<<new1<<endl;
        }
    }

    return final;
}

int main(){
    string str;
    cin>>str;
    vector<string>ans = solve(str);
    
    sort(ans.begin(),ans.end());
    
    // cout<<ans.size()<<endl;
    
    cout<<"[";

    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
        if(i!=ans.size()-1){
            cout<<","<<" ";
        }
        
    }
    cout<<"]";
    cout<<endl;

    return 0;
}