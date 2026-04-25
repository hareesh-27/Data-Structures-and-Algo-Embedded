class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        int n=nums.size();
        int hasharr[n+1]={0};
        int repeat=-1;
        int miss=-1;

        for(int i=0;i<n;i++)
        {
            hasharr[nums[i]]++;
        }

        for(int i=1;i<=n;i++)
        {
            if(hasharr[i]==2) repeat=i;
            if(hasharr[i]==0) miss=i;
        }
        return {repeat,miss};
    }
};
