class Solution {
public:
    int numberOfSubstrings(string s) {
        int ans=0, i=0; 
        unordered_map<char, int> mp; 
        for(int j=0; j<s.size(); j++){
             mp[s[j]]++; 
             while(mp['a']>0 && mp['b']>0 && mp['c']>0){ 
                ans+=s.size()-j; mp[s[i]]--; i++; 
                } 
            } 
        return ans;
    }
};