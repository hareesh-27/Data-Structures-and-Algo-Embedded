class Solution{
  public:
    int maxScore(vector<int>& cardScore , int k){
        //your code goes here
        int lsum=0; int rsum=0; int maxsum; int  n=cardScore.size();

        for(int i=0;i<k;i++) lsum+=cardScore[i];
        maxsum=lsum;        // for first step

        int right_index=n-1;
        for(int i=k-1;i>=0;i--)
        {
          rsum=rsum+cardScore[right_index];
          lsum=lsum-cardScore[i];
          maxsum=max(maxsum, rsum+lsum);
          right_index--;
        }
        return maxsum;
        
    }
};
