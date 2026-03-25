class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        long long sum=0;
        for(auto &row:grid){
            for(int val:row){
                sum+=val;
            }
        }

        if(sum%2!=0) return false;
        long long target=sum/2;

        long long cursum=0;

        for(int i=0; i<m-1; i++){
            for(int j=0; j<n; j++){
                cursum+=grid[i][j];
            }
            if(cursum==target) return true;
        }

        vector<long long> colsum(n,0);

        for(int j=0; j<n; j++){
            for(int i=0; i<m; i++){
                colsum[j]+=grid[i][j];
            }
        }

        cursum=0;
        for(int j=0; j<n-1; j++){
            cursum+=colsum[j];
            if(cursum==target) return true;
        }

        return false;
    }
};