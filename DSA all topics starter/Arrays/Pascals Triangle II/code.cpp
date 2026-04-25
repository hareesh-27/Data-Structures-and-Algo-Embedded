class Solution {
public:
    vector<int> pascalTriangleII(int r) {
        vector<int> ans;
        int n=r-1;
        for(int i=0;i<r;i++){
            ans.push_back(nCr(n,i));
        }
        return ans;
    }


    long long nCr(int n, int r)
    {
        long long res = 1;

        for(int i = 0; i < r; i++)
        {
            res = res * (n - i);
            res = res / (i + 1);
        }

        return res;
    }
};
