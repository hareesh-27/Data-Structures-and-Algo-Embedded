
class Solution {
public:
    int lengthOfLongestSubstringTwoDistinct(string s) {
        int l=0,r=0;
        int maxi=0;
        map<int,int> mp;

        while(r<s.size())
        {
            mp[s[r]]++;

            if(mp.size()>2)
            {
                mp[s[l]]--;
                if(mp[s[l]] == 0) mp.erase(s[l]);
                l=l+1;
            }

            maxi=max(maxi, r-l+1);
            r++;            
        }
        return maxi;
    }
};
