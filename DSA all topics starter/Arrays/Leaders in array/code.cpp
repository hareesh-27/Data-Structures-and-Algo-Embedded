class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      int max=nums[nums.size()-1];
      vector<int> ans;
      ans.push_back(max);

      for(int i=nums.size()-2; i>=0 ; i--)
      {
        if(nums[i]>max)
        {
            max=nums[i];
            ans.push_back(max);
        }
      }
      reverse(ans.begin(),ans.end());
      return ans;
    }
};
