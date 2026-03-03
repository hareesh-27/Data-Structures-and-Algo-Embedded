class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
       int ans=0;
       for(int bit_index=0;bit_index<32;bit_index++)        //since 32 bits
       {
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if((nums[i] & (1<<bit_index)) !=0) cnt+=1;         //check ith bit is set or not
        }
        if(cnt%3 == 1) ans=ans | (1<<bit_index);             // ans is initially 0000                   
       }
       return ans;
    }
};