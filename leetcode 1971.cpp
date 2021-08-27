class Solution {
public:
    
    bool solve(vector<int>adj[],int start,int end,int n,int m){
        queue<int>Q;
        
        Q.push(start);
        int vis[m];
        for(int i=0;i<m;i++){
            vis[i]=0;
        }
        vis[start]=1;
        
        while(!Q.empty()){
            
            int a=Q.front();
            Q.pop();
            if(a==end){
                return 1;
            }
            for(auto x : adj[a]){
                if(vis[x]==0){
                    Q.push(x);
                    vis[x]=1;
                }
                
            }
            
        }
        
        return 0;
        
        
    }
    
    
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        
        // int n=edges.size();
        
        vector<int>adj[n];
        
        
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        
        return solve(adj,start,end,edges.size(),n);
    }
};