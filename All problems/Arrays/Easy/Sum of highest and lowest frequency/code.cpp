class Solution {
public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {
        unordered_map<int,int> mp; int maxfreq=INT_MIN; int minfreq=INT_MAX;
        for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        for(auto it:mp)
        {
            int ele=it.first; int freq=it.second;
            if(freq>maxfreq)
            {
                maxfreq=freq;
                
            }

            if(freq<minfreq)
            {
                minfreq=freq;
                
            }
        }

        return maxfreq+minfreq;
    }
};
