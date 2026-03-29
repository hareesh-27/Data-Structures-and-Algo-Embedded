class Solution {
public:
    int maxConsecutiveGoodNums(vector<int>& nums, vector<int>& goodNumbers) {
        int max_cnt=0; int cnt=0;
        unordered_map<int,int> mp;
        
        for(int i=0;i<goodNumbers.size();i++) mp[goodNumbers[i]]=i;

        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i]) != mp.end())
            {
                cnt++;
                max_cnt=max(max_cnt,cnt);
            }
            else cnt=0;
        }

        return max_cnt;
    }
};
