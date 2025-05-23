class Solution {
public:
    static bool cmp(vector<int>&x , vector<int>&y){
            return x[1] > y[1];
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        int n=boxTypes.size();
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        int ans = 0;
        for(int i=0;(i<n) && truckSize ;i++){
            if( boxTypes[i][0] <= truckSize ){
                ans = ans + boxTypes[i][0] * boxTypes[i][1];
                truckSize = truckSize - boxTypes[i][0];
            }
            else{
                ans = ans+ boxTypes[i][1] * truckSize ;
                break;
            }
        }
        return ans;


    }
};