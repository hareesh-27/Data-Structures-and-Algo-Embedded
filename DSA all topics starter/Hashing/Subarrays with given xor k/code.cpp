class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        map<int,int> mp;
        int xr=0;
        int count=0;
        mp[0]=1; //mp[xr]++ both same. We use xr since xr is the presum analogy

        for(int i=0;i<nums.size();i++)
        {
            xr=xr^nums[i];
            int x=xr^k;
            count=count+mp[x]; //if x is not there mp[x] will return 0
            mp[xr]++;
        }
        return count;
    }
};
