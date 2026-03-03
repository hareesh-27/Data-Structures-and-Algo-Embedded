class Solution{
    private:
        int fun(int index, vector<int>& nums, int sum)
        {
                if(sum==0) return 1;
                if(index==nums.size() || sum<0) return 0;
                   

            int take = fun(index+1,nums, sum-nums[index]);
            int not_take = fun(index+1, nums, sum);

            return take + not_take;
        }
    
    
    public:    	
    int countSubsequenceWithTargetSum(vector<int>& nums, int k){
    	//your code goes here
        int index=0; int count =fun(index, nums, k);
        return count;
    }
};
