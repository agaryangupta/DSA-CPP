class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp1;
        multimap<int, char> mp2;
        string res = "";

        for(char ch:s){
            mp1[ch]++;
        }

        for(auto it: mp1){
            mp2.insert({it.second, it.first});
        }


        for(auto it= mp2.rbegin(); it != mp2.rend(); ++it){
            res += string(it->first, it->second) ;
        }

        return res;
    }
};