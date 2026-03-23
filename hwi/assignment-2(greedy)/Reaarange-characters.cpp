class Solution {
  public:
    string rearrangeString(string s) {
        int n = s.size();
        
        vector<int> freq(26, 0);
        for(char c : s) {
            freq[c - 'a']++;
        }
        
        priority_queue<pair<int, char>> pq;
        for(int i = 0; i < 26; i++) {
            if(freq[i] > 0) {
                pq.push({freq[i], char(i + 'a')});
            }
        }
        
        string result = "";
        pair<int, char> prev = {0, '#'};
        
        while(!pq.empty()) {
            auto top = pq.top();
            pq.pop();
            
            result += top.second;
            top.first--;
            
            if(prev.first > 0) {
                pq.push(prev);
            }
            
            prev = top;
        }
        
        if(result.size() != n) return "";
        
        return result;
    }
};