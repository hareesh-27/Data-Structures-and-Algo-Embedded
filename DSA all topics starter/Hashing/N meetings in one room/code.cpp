class Solution {
public:
    // Comparator function to sort meetings based on end times
    static bool comparator(const pair<int, int>& a, const pair<int, int>& b) {
        // Sort by end time in ascending order
        return a.second < b.second;
    }

    // Function to find the maximum number of meetings that can be held
    int maxMeetings(vector<int>& start, vector<int>& end) {
        int n = start.size();
        // Vector to store meetings 
        vector<pair<int, int>> meetings;
        
        // Fill the meetings vector with start and end times
        for (int i = 0; i < n; i++) {
            meetings.push_back({start[i], end[i]});
        }

        // Sort the meetings based on the custom comparator
        sort(meetings.begin(), meetings.end(), comparator);

        // The end time of last selected meeting
        int limit = meetings[0].second;
        // Initialize count
        int count = 1; 

        /*Iterate through the meetings 
        to select the maximum number 
        of non-overlapping meetings*/
        for (int i = 1; i < n; i++) {
            /*If the current meeting starts 
            after the last selected meeting ends*/
            if (meetings[i].first > limit) {
                /*Update the limit to the end 
                time of the current meeting*/
                limit = meetings[i].second;
                // Increment count
                count++;
            }
        }

        // Return count
        return count;
    }
};
