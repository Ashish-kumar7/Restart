#include<bits/stdc++.h>
using namespace std;

int main(){
     long long int t;
     cin>>t;
     while(t--){
    int n;
    cin>>n;
    vector<int>A(n,0);

    priority_queue<pair<int,pair<int,int>>> pq;

    pq.push( {n, {0,(n-1) } } );
    int count=0;


    while(!pq.empty()){

        int l=-1 * pq.top().second.first ;
        int r=pq.top() .second.second ;

        int len=pq.top().first;

        pq.pop();

        if(l>r){
            continue;
        }
        count++;

        int mid=(l+r)/2;

        A[mid]=count;

        pq.push( { mid-l+1 , {(-1 *l ) , mid -1 } } );
        pq.push( { r-mid+1 , {(-1 *(mid + 1) ) , r } } );

    }

     for(auto it : A){
        cout<<it<<" ";
     }
     cout<<endl;
     }

     return 0;
}
