class Solution{
  public:
    int longestNonRepeatingSubstring(string& s){
        //your code goes here
        int maxlen=0; int n=s.size(); int l=0; int r=0;
        int hash[256]; for(int i=0;i<256;i++) hash[i]=-1;

        while(r<n)
        {
          //if present in map
          if(hash[s[r]]!=-1)
          {
            //if not a valid string
            if(hash[s[r]]>=l) l=hash[s[r]]+1; 
          }

          // if not present in map
          maxlen=max(maxlen, r-l+1);
          hash[s[r]]=r;
          r++;
        }

        return maxlen;
    }
};
