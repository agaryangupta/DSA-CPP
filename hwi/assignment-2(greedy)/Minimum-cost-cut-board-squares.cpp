class Solution {
  public:
    int minCost(int n, int m, vector<int>& x, vector<int>& y) {
        
        sort(x.rbegin(), x.rend());
        sort(y.rbegin(), y.rend());
        
        int i = 0, j = 0;
        
        int horizontalPieces = 1;
        int verticalPieces = 1;
        
        int cost = 0;
        
        while (i < x.size() && j < y.size()) {
            
            if (x[i] > y[j]) {
                cost += x[i] * horizontalPieces;
                verticalPieces++;
                i++;
            } else {
                cost += y[j] * verticalPieces;
                horizontalPieces++;
                j++;
            }
        }
        while (i < x.size()) {
            cost += x[i] * horizontalPieces;
            i++;
        }
        
        while (j < y.size()) {
            cost += y[j] * verticalPieces;
            j++;
        }
        
        return cost;
    }
};