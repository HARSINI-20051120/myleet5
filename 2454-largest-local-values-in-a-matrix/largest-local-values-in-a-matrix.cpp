class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> res(n - 2 , vector<int>(n - 2));
        for(int i = 2; i < n; ++i){
            for(int j = 2; j < n; ++j){
                int maxi = 0;
                for(int x = i - 2; x <= i; ++x){
                    for(int y = j - 2; y <= j; ++y) maxi = max(maxi , grid[x][y]);
                }
                res[i - 2][j - 2] = maxi;
            }
        }
        return res;
    }
};