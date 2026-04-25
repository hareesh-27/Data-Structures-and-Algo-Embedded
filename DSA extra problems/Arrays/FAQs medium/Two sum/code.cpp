class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;

        for(int i=0;i<nums.size();i++)
        {   
            int more_needed=target-nums[i];

            if(mp.find(more_needed) !=mp.end())
            {
                return{i,mp[more_needed]};
            }
            else mp[nums[i]]=i;
        }
        return{-1,-1};
    }
};
