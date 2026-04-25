class Solution {
public:
    double myPow(double x, int n) {
        //your code goes here
        double ans=1; 
        if(n==0) return 1;
        if(n<0) { x=1/x; n=-1*n;}


        while(n>0)
        {
            if(n%2==1)
            {
                ans=ans*x;
                n=n-1;
            }

            else
            {
                x=x*x;
                n=n/2;
            }
        }
        return ans;
    }
};
