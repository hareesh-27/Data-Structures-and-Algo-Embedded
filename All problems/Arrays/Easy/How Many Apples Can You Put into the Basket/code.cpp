class Solution {
public:
    int maxNumberOfApples(vector<int>& arr) {
        int current_weight=0;
        int cnt=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            current_weight+=arr[i];
            if(current_weight <= 5000) cnt++;
        }
        return cnt;
    }
};
