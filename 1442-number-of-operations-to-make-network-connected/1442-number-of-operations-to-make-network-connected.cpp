class DisjointSet {
    public:
    vector<int> rank, parent;
    DisjointSet(int n) {
        rank.resize(n+1, 0);
        parent.resize(n+1);
        for(int i=0; i<=n; i++) {
            parent[i] = i;
        }
    }

    int findUParent(int node) {
        if(node == parent[node]) {
            return node;
        }
        //returning ultimate parent
        return parent[node] = findUParent(parent[node]);
    }

    void unionByRank(int u, int v) {
        int ulp_u = findUParent(u);
        int ulp_v = findUParent(v);
        if(ulp_u == ulp_v) return;
        if(rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
        }
        else if(rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u;
        }
        else {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
};

class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        DisjointSet ds(n);
        int cntExtras = 0;
        for(auto it: connections) {
            int u = it[0];
            int v = it[1];
            if(ds.findUParent(u) == ds.findUParent(v)) {
                cntExtras++;
            }
            else {
                ds.unionByRank(u,v);
            }
        }

        int cntC = 0;
        for(int i=0; i<n; i++) {
            if(ds.parent[i] == i) cntC++;
        }

        int ans = cntC - 1;
        if(cntExtras >= ans) return ans;
        return -1;
    }
};