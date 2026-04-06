class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> st; 
        vector<int> sarr=arr;
        sort(sarr.begin(),sarr.end());

        for(int i=0;i<sarr.size();i++) st.insert(sarr[i]);

        map<int,int> mp; //ele,rank
        int rank=1;
        for(auto it:st)
        {
            mp[it] = rank;
            rank++;
        }

        vector<int> ans;
        for(int i=0;i<arr.size();i++)
        {
            ans.push_back(mp[arr[i]]);
        }
        return ans;
    }
};