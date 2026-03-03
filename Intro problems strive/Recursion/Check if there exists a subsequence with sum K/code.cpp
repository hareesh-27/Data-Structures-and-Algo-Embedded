class Solution{
    private:
        bool fun(int index, vector<int>& nums, int sum)
        {
            if(index==nums.size())
            {
                if(sum==0) return 1;
                return false;
            }

            bool take = fun(index+1,nums, sum-nums[index]);
            bool not_take = fun(index+1, nums, sum);

            return take || not_take;
        } 
    
    public:
    bool checkSubsequenceSum(vector<int>& nums, int k) {
         //your code goes here
        bool sol;
        int index=0;
        sol=fun(index, nums, k);
        return sol;
    }
};
