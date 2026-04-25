class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        long long n=nums.size();
        long long Sn;
        long long S2n;
        long long S=0;
        long long S2=0;

        Sn=n*(n+1)/2;
        S2n=n*(n+1)*(2*n+1)/6;

        for(int i=0;i<n;i++)
        {
            S=S+nums[i];
            S2 += (long long)nums[i] * (long long)nums[i];
        }

        long long val1;
        long long val2;

        val1=S-Sn; val2=S2-S2n; val2=val2/val1;

        long long repeat=(val1+val2)/2;
        long long miss = repeat-val1;

        return {(int)repeat, (int)miss};
    }
};
