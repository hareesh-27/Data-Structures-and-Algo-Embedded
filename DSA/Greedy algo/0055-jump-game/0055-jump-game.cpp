class Solution {
public:
    bool canJump(vector<int>& nums) {
       int max_index=0;
       for(int i=0;i<nums.size();i++)
       {
            if(i>max_index) return 0;

            max_index=max(max_index ,i+nums[i]);
       }
       return 1;
    }
};