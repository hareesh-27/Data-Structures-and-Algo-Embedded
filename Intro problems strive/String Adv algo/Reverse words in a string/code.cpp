class Solution {
private:
    void freverse(int start, int end, string &s)
    {
        while(start < end)
        {
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
    }

public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());

        int start = 0;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ' ')
            {
                freverse(start, i - 1, s);
                start = i + 1;
            }
            else if(i == s.size() - 1)   // handle last word
            {
                freverse(start, i, s);
            }
        }
        return s;
    }
};
