class Solution {
  public:
    long long solve(vector<int>& bt) {
        long long time_taken=0,wait_time=0;
        sort(bt.begin(),bt.end());
        for(int i=0;i<bt.size();i++)
        {
            wait_time = wait_time + time_taken;
            time_taken = time_taken + bt[i];
        }
        return wait_time/(bt.size());
    }
};
