class Solution{
  public:
    int totalFruit(vector<int>& fruits){
        int maxi=0; map<int,int> mp;
        int l=0; int r=0; int n=fruits.size();

        while(r<n)
        {
            mp[fruits[r]]++;

            if(mp.size()>2)
            {   
                mp[fruits[l]]--;
                if(mp[fruits[l]]==0) mp.erase(fruits[l]);
                l++;                
            }

            if(mp.size()<=2)
            {
                maxi=max(maxi,r-l+1);
            }
            r++;
        }
        return maxi;
    }
};