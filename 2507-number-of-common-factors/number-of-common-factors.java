class Solution {
    public int commonFactors(int a, int b) {
        int count = 0;
        for (int n = 1; n <= Math.min(a, b); n++) {
            if (a % n == 0 && b % n == 0) {
                count++;
            }
        }
        return count;

    }
};
