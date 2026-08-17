class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int n = nums.size();
        int i = 0,esum = 0,osum = 0;

        if(n<=1){
            return n == 1 ? nums[0] : 0;
        }
        while(i<n){
            esum = esum + nums[i];
            i = i + 2;
        }
        i = 1;
        while(i<n){
            osum = osum + nums[i];
            i = i + 2;
        }
        int output = esum - osum;
        return output;
    }
};