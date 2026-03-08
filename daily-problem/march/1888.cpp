class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        string t = s + s;

        string alt1 = "", alt2 = "";

        for(int i = 0; i < 2*n; i++) {
            if(i % 2) {
                alt1 += '1';
                alt2 += '0';
            } else {
                alt1 += '0';
                alt2 += '1';
            }
        }

        int diff1 = 0, diff2 = 0;
        int l = 0, ans = INT_MAX;

        for(int r = 0; r < 2*n; r++) {

            if(t[r] != alt1[r]) diff1++;
            if(t[r] != alt2[r]) diff2++;

            if(r - l + 1 > n) {
                if(t[l] != alt1[l]) diff1--;
                if(t[l] != alt2[l]) diff2--;
                l++;
            }

            if(r - l + 1 == n)
                ans = min(ans, min(diff1, diff2));
        }

        return ans;
    }
};