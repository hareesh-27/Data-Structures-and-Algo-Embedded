class Solution {
public:
    int MaximumNonOverlappingIntervals(vector<vector<int>>& Intervals) {
        int cnt=1;
        int n=Intervals.size();

        sort(Intervals.begin(),Intervals.end(),comparator);

        int last_end_time = Intervals[0][1];

        for(int i=1;i<n;i++)
        {
            if(Intervals[i][0] >= last_end_time)
            {
                last_end_time = Intervals[i][1];
                cnt++;
            }
        }
        return n - cnt;
    }


private:
    bool static comparator(vector<int>& val1, vector<int>& val2) 
    {
        return val1[1] < val2[1];
    }
};
