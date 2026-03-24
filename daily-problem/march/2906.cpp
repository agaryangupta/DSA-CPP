class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int mod = 12345;

        int size = n * m;
        vector<int> arr(size);

        int k = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                arr[k++] = grid[i][j] % mod;
            }
        }

        vector<int> res(size, 1);
        
        long long prod = 1;
        for(int i = 0; i < size; i++){
            res[i] = prod;
            prod = (prod * arr[i]) % mod;
        }
        prod = 1;
        for(int i = size - 1; i >= 0; i--){
            res[i] = (res[i] * prod) % mod;
            prod = (prod * arr[i]) % mod;
        }
        vector<vector<int>> ans(n, vector<int>(m));
        k = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                ans[i][j] = res[k++];
            }
        }
        return ans;
    }
};