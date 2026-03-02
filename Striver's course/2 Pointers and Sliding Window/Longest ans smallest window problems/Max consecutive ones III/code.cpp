class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        //your code goes here
        int l=0; int r=0; int maxlen=0; int zeros=0; int n=nums.size();

        while(r<n)
        {   
            if(nums[r]==0) zeros++;
            if(zeros>k)
            {
                if(nums[l]==0) zeros--;
                l++;                        //if zeros>k anyways we r gonna do l++ bit  check if nums[l]=0 we hv to do zeros--;
            }
        
            if(zeros<=k) maxlen=max(maxlen,r-l+1);
            r++;
        }

        return maxlen;
    }
};
