class Solution {
public:
    bool checkOnesSegment(string s) {
        int l=s.length();
        for(int i=0; i<l-1; i++){
            if(s[i]=='0' && s[i+1]=='1')
                return false;
        }
        return true;
    }
};