class Solution{
public:
    int subarraySum(vector<int> &nums, int k){
        map<int,int> mp;  //key:prefix_sum val: cnt
        mp[0]=1; int prefix_sum=0; int cnt=0;

        for(int i=0;i<nums.size();i++)
        {
            prefix_sum+=nums[i];
            
            int remove;
            remove=prefix_sum-k;
            
            cnt+=mp[remove];
            
            mp[prefix_sum]+=1;
        }
        return cnt;
    }
};