class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        vector<int> pre(n);
        pre[0]=arr[0];
        
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]^arr[i];
        }

        vector<int> ans;
        for(auto &q:queries){
            int l=q[0];
            int r=q[1];

            if(l==0) ans.push_back(pre[r]);
            else ans.push_back(pre[r]^pre[l-1]);

        }
        return ans;
    }
};