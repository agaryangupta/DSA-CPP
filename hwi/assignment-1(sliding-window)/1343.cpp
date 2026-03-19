class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int start = 0, end = 0;
        int cnt = 0;
        long sum = 0;
        while(end < k) {
            sum += arr[end];
            end++;
        }
        double avg = (double)sum / k;
        if(avg >= threshold) cnt++;
        
        while(end < arr.size()) {
           
            sum += arr[end] - arr[start];
            
            avg = (double)sum / k;
            if(avg >= threshold) cnt++;
        
            start++;
            end++;
        }
        
        return cnt;
    }
};