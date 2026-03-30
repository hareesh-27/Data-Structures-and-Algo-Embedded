class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int lsum=0,totsum=0;
        for(int i=0;i<nums.size();i++) totsum+=nums[i];
        for(int i=0;i<nums.size();i++)
        {
            int rsum = totsum - lsum - nums[i];
            if(lsum == rsum) return i;
            lsum+=nums[i];
        }
        return -1;
    }
};