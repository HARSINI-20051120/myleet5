class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
    int total = 0;
    int n = nums.size();
    
    for (int i = 0; i < n; i++) {
        bool good = true;
        if (i - k >= 0 && nums[i] <= nums[i - k]) good = false;
        if (i + k < n && nums[i] <= nums[i + k]) good = false;
        if (good) total += nums[i];
    }
    
    return total;
}
};