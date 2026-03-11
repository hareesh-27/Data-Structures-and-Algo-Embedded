class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0; int rsum=0; int maxsum=INT_MIN;
        
        for(int i=0;i<k;i++) lsum=lsum+cardPoints[i];

        maxsum=lsum;

        int right_index=cardPoints.size()-1;

        for(int i=k-1;i>=0;i--)             //k-1 coz of the pattern from question
        {
            rsum=rsum+cardPoints[right_index];
            lsum=lsum-cardPoints[i];

            maxsum=max(maxsum, rsum+lsum);

            right_index--;
        }
        return maxsum;
    }
};