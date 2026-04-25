class Solution {
private:
    void func(int index, vector<int>& arr, vector<int>& nums, vector<vector<int>>& ans, int n)
    {
        if(index==n)
        {
            ans.push_back(arr);
            return;
        }

        //take
        arr.push_back(nums[index]);
        func(index+1, arr, nums, ans, n);

        //remove last to explore more subsets
        arr.pop_back();

        //dont take
        func(index+1, arr, nums, ans, n);
    }


public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr;
        vector<vector<int>> ans;
        int index=0;

        func(index, arr, nums, ans, n);

        return ans;
    }
};