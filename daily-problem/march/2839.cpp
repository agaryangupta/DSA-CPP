class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        
        vector<int> even1={s1[0],s1[2]};
        vector<int> even2={s2[0],s2[2]};
        vector<int> odd1={s1[1],s1[3]};
        vector<int> odd2={s2[1],s2[3]};

        sort(even1.begin(),even1.end());
        sort(even2.begin(),even2.end());
        sort(odd1.begin(),odd1.end());
        sort(odd2.begin(),odd2.end());

        return even1==even2 && odd1==odd2;
    }
};