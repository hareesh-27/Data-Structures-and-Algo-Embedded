class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        return help(nums,k) - help(nums,k-1);
    }

private:
    int help(vector<int>& nums, int k)
    {
        if(k<0) return 0;
        
        int n=nums.size();
        int l=0,r=0; int cnt=0; int sum=0;
        while(r<n)
        {
            sum+=nums[r] % 2;
            
            while(sum>k)
            {
                sum-=nums[l] % 2;
                l++;
            }
            
            cnt+= r-l+1;           
            
            r++;
        }
        return cnt;
    }
};