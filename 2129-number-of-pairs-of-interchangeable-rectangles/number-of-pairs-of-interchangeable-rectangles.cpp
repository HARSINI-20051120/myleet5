class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        long long count = 0;
        unordered_map<double,int> m;
        int n = rectangles.size();
        for(int i = 0; i < n; i++) {
            double ratio = (double) rectangles[i][0] / rectangles[i][1];
            m[ratio]++;
        }
        for(auto &p : m) {
            long long temp = p.second;
            count += temp * (temp - 1) / 2;
        }
        return count;
    }
};