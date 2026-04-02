class Solution {

    vector<int> leftSide(vector<int> &a) {
        int n = a.size();
        vector<int> res(n);
        
        stack<int> s;
        for (int i = 0; i < n; i++) {
            while (!s.empty() && a[s.top()] >= a[i])
                s.pop();
            
            res[i] = (s.empty() ? -1 : s.top());

            s.push(i);
        }

        return res;
    }

    vector<int> rightSide(vector<int> &a) {
        int n = a.size();
        vector<int> res(n);

        stack<int> s;
        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && a[s.top()] >= a[i])
                s.pop();
            
            res[i] = (s.empty() ? n : s.top());

            s.push(i);
        }

        return res;
    }

public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector<int> leftMin = leftSide(heights);
        vector<int> rightMin = rightSide(heights);

        int rectangle = 0;

        for (int i = 0; i < n; i++) {
            int width = rightMin[i] - leftMin[i] - 1;
            int area = heights[i] * width;

            rectangle = max(rectangle, area);
        }

        return rectangle;
    }
};