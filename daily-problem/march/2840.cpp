class Solution {
public:
    bool checkStrings(string s1, string s2) {
        int n= s1.length();
        vector<int> even1;
        vector<int> even2;
        vector<int> odd1;
        vector<int> odd2;

        for(int i=0; i<n; i+=2){
            even1.push_back(s1[i]);
            even2.push_back(s2[i]);
        }
        
        for(int i=1; i<n; i+=2){
            odd1.push_back(s1[i]);
            odd2.push_back(s2[i]);
        }

        sort(even1.begin(),even1.end());
        sort(even2.begin(),even2.end());
        sort(odd1.begin(),odd1.end());
        sort(odd2.begin(),odd2.end());

        return even1==even2 && odd1==odd2;
    }
};