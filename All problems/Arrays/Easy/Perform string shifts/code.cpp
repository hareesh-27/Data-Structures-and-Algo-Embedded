class Solution {
private:
    void rev(int start, int end, string& s) {
        while (start < end) {
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
    }

public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int n = s.size();

        for (int i = 0; i < shift.size(); i++) {
            int direction = shift[i][0];
            int amount = shift[i][1] % n; // Keep amount within string bounds

            if (amount == 0) continue;

            if (direction == 1) {
                // Right Shift: Reverse total, then first 'amount', then rest
                rev(0, n - 1, s);
                rev(0, amount - 1, s);
                rev(amount, n - 1, s);
            } 
            else {
                // Left Shift: Reverse first 'amount', then rest, then total
                rev(0, amount - 1, s);
                rev(amount, n - 1, s);
                rev(0, n - 1, s);
            }
        }

        return s;
    }
};
