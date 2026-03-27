class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
    if(mat.empty() || mat[0].empty()) return true;

    int n = mat.size();
    int m = mat[0].size();

    k = k % m;

    for(int i = 0; i < n; i++){
        vector<int> shifted(m);

        for(int j = 0; j < m; j++){
            if(i % 2 == 0){
                shifted[j] = mat[i][(j + k) % m];
            } else {
                shifted[j] = mat[i][(j - k + m) % m];
            }
        }
        
        if(shifted != mat[i]) return false;
        if(i==1) break;
    }

    return true;
}
};