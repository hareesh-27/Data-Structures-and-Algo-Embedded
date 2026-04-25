class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest=0;
        unordered_set<int> st;

        for(int i=0;i<nums.size();i++) st.insert(nums[i]);

        for(auto it: st)
        {   int cnt=1;
            if(st.find(it-1)==st.end())
            {
                
                //cnt+=1;
                int x=it;
                while(st.find(x+1)!=st.end())
                {
                    x+=1;
                    cnt+=1;
                }
            }
        longest=max(longest,cnt);
        }
        return longest;
    }
};