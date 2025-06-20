class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int res = 0;
        unordered_map<int,int> m;
        for(auto i : nums){
            res += m[i]++;
        }
        return res;
    }
};