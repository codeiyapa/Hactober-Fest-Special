class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mth = nums[0];
        int msf = nums[0];
        for(int i = 1 ; i < nums.size() ; i ++){
            mth+=nums[i];
            mth = max(mth,nums[i]);
            msf = max(msf,mth);
        }
        return msf;
        
    }
};