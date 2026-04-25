class Solution {
public:
    int kDistinctChar(string& s, int k) {
        //idea is to use map and check its size to satisfy kDistinctChar

        map<int,int> mp;

        int maxi=0; int l=0,r=0;

        while(r<s.size())
        {
            //first put the character in map
            mp[s[r]]++;

            //check size of map
            if(mp.size()>k)
            {
                mp[s[l]]--;
                if(mp[s[l]] == 0) mp.erase(s[l]);
                l=l+1;
            }

            //find max len if condition satisfies
            if(mp.size()<=k) maxi=max(maxi, r-l+1);          

            r++;              
        }
        return maxi;
    }
};
