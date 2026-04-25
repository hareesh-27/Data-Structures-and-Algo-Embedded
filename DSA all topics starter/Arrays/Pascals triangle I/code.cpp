class Solution {
private:
    int ncr(int n, int r)
    {
        int ans=1;
        for(int i=0;i<r;i++)
        {
            ans=ans*(n-i);
            ans=ans/(i+1);
        }
        return ans;
    }


public:
    int pascalTriangleI(int r, int c) {
        int ans=ncr(r-1,c-1);
        return ans;
    }
};
