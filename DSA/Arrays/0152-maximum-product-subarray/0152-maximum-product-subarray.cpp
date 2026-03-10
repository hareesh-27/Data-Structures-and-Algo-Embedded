class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long prefix,suffix=1;
        int n=nums.size();
        long maxi=LONG_MIN;

        for(int i=0;i<n;i++)
        {
            if(prefix==0) prefix=1;
            if(suffix==0) suffix=1;

            prefix=prefix*nums[i];
            suffix=suffix*nums[n-i-1];

            maxi=max(maxi,max(prefix,suffix));
        }
        return maxi;
    }
};