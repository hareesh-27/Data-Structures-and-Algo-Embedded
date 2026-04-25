class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // Your code goes here
        int l=0; int r=0; int maxi=0; int zeros=0;
        
        while(r<nums.size())
        {
            if(nums[r]==0) zeros++;

            while(zeros>1)
            {
                if(nums[l]==0) zeros--;
                l++;
            }

            maxi=max(maxi,r-l+1);
            r++;
        }
        return maxi;
    }
};
