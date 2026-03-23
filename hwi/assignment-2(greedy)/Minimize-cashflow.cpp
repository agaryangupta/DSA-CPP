class Solution {
  public:
    int maxStop(int m, vector<vector<int>> &trains) {
        
        vector<vector<pair<int,int>>> platforms(m + 1);
        
        for(int i = 0; i < trains.size(); i++) {
            int arr = trains[i][0];
            int dep = trains[i][1];
            int plat = trains[i][2];
            
            platforms[plat].push_back({arr, dep});
        }
        
        int total = 0;
        
        for(int i = 1; i <= m; i++) {
            
            sort(platforms[i].begin(), platforms[i].end(), 
                [](pair<int,int> a, pair<int,int> b) {
                    return a.second < b.second;
                });
            
            int lastDeparture = -1;
            
            for(int j = 0; j < platforms[i].size(); j++) {
                int arr = platforms[i][j].first;
                int dep = platforms[i][j].second;
                
                if(arr >= lastDeparture) {
                    total++;
                    lastDeparture = dep;
                }
            }
        }
        
        return total;
    }
};