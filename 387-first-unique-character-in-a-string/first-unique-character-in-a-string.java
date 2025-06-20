class Solution {
    public int firstUniqChar(String s) {
        int n = s.length();
        int[] count = new int[26]; 
        for (int i = 0; i < n; i++) { 
            int index = s.charAt(i) - 'a';
            count[index]++; 
        }
        for (int i = 0; i < n; i++) { 
            int index = s.charAt(i) - 'a'; 
            if (count[index] == 1) { 
                return i; 
            }
        }
        return -1; 
    }
}