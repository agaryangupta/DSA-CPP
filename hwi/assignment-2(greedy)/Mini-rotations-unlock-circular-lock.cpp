class Solution {
  public:
    int rotationCount(long long R, long long D) {
        int cnt = 0;

        while (R > 0 || D > 0) {
            int r = R % 10;
            int d = D % 10;

            int diff = abs(r - d);
            cnt += min(diff, 10 - diff);

            R /= 10;
            D /= 10;
        }

        return cnt;
    }
};