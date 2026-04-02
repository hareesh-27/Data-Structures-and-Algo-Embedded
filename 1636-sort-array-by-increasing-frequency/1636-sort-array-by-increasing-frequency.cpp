class Solution {
private:
    static bool compare(pair<int,int> a, pair<int,int> b)
    {
        if(a.second != b.second) return a.second < b.second;
        return a.first > b.first;
    }

public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int> mp;
        for(int num:nums) mp[num]++;
        
        vector<pair<int,int>> v;
        for(auto it:mp) v.push_back(it);

        sort(v.begin(), v.end(), compare);

        vector<int> ans;
        for(int i=0;i<v.size();i++)
        {
            int val = v[i].first;
            int freq = v[i].second;

            for(int i=0;i<freq;i++) ans.push_back(val);
        }
        
        return ans;
    }   
};