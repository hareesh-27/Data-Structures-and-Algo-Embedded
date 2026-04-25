class Solution {
public:
    bool isHeap(vector<int>& nums) {
        // no need to check all node. Check for non leaf nodes only.
        //Non leaf nodes go from 0 to (n/2) - 1

        int n=nums.size();

        for(int i=(n/2)-1 ; i >= 0 ; i--)
        {
            int left_child = 2*i + 1;
            int right_child = 2*i +2;

            if(left_child < n && nums[left_child] < nums[i]) return false;

            if(right_child < n && nums[right_child] < nums[i]) return false;
        }

        return true;
    }
};
