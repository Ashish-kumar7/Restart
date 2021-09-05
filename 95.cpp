class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>ans(n);
        
        for(int i=1;i<=n;i++){
            if((i)%3==0 && (i)%5==0){
                ans[i-1]="FizzBuzz";
            }
            
            else if((i)%3==0){
                ans[(i-1)]="Fizz";
            }class Solution {
public:
    vector<TreeNode*> recurse(int l,int r){
        if(l>r)
            return {NULL};
        vector<TreeNode*> ans;
        for(int root=l;root<=r;root++){
            vector<TreeNode*> left = recurse(l,root-1);
            vector<TreeNode*> right = recurse(root+1,r);
            for(auto Node_l:left){
                for(auto Node_r:right){
                    TreeNode* node = new TreeNode(root);
                    node->left = Node_l;
                    node->right = Node_r;
                    ans.push_back(node);
                }
            }
        }
        return ans;
    }
    vector<TreeNode*> generateTrees(int n) {
        return recurse(1,n);
    }
};
            else if((i)%5==0){
                ans[(i-1)]="Buzz";
            }
            else{
                ans[(i-1)]=to_string(i);
            }
        }
        return ans;
    }
};