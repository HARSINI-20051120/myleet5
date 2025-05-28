class Solution {
public:
    int alternateDigitSum(int n) {
        int x =0;
        int y = 0;
        int sum = 0;
        string s = to_string(n);
        for(int i = 0;i<s.length();i++){
            int u = s[i]-'0';
            if(i%2==0){
                sum+=u;
            }
            else{
                sum-=u;
            }
        }
        return sum;
    }
};