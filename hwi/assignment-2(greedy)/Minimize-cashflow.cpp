class Solution {
  public:
    vector<vector<int>> minCashFlow(vector<vector<int>> &transaction, int n) {
        
        vector<int> amount(n, 0);
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                amount[i] += (transaction[j][i] - transaction[i][j]);
            }
        }
        
        vector<vector<int>> result(n, vector<int>(n, 0));

        while(true) {
            
            int mxCredit = max_element(amount.begin(), amount.end()) - amount.begin();
            int mxDebit  = min_element(amount.begin(), amount.end()) - amount.begin();

            if(amount[mxCredit] == 0 && amount[mxDebit] == 0) break;
            
            int mini = min(-amount[mxDebit], amount[mxCredit]);
            
            amount[mxCredit] -= mini;
            amount[mxDebit] += mini;
            
            result[mxDebit][mxCredit] = mini;
        }
        
        return result;
    }
};