class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int miss=0;
        for(int i=1;i<=nums.size();i++)
        {
            miss=miss^i;
            miss=miss^nums[i-1];
        }
        return miss;
    }
};