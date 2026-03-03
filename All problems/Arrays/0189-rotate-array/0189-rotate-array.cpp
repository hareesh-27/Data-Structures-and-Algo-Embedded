class Solution {
private:
    void rev(int start, int end, vector<int>& nums)
    {
        while(start<end)
        {
            int temp=nums[start];
            nums[start]=nums[end];
            nums[end]=temp;
            start++; end--;
        }
            
    }
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();  k = k % n;
        
        // 1 2 3 4 5 6 7
        rev(0,n-1,nums);        //7 6 5 4 3 2 1
        rev(0,k-1,nums);        //5 6 7 4 3 2 1
        rev(k,n-1,nums);          
        

    }
};