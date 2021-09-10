class Solution {
public:
    vector<unordered_set<int>> tree;
    vector<int> v, count;
    
    void func1(int root, int x) {
        for(auto i: tree[root]) {
            if(i == x) continue;
            func1(i, root);
            count[root] += count[i];
            v[root] += v[i] + count[i];
        }
    }
    
    void func2(int root, int x) {
        for(auto i: tree[root]) {
            if(i == x) continue;
            count[root] += count[i];
            v[i] = v[root] - count[i] + count.size() - count[i];
            func2(i, root);
        }
    }
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& a) {
        tree.resize(n);
        v.assign(n,0);
        count.assign(n,1);
        for(auto i: a) {
            tree[i[0]].insert(i[1]);
            tree[i[1]].insert(i[0]);
        }
        func1(0, -1);
        func2(0, -1);
        return v;
    }
};