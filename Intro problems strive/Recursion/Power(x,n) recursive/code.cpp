class Solution {
public:
    double myPow(double x,  n) {
        
        long long N=n;//your code goes here
        if(N==0) return 1; if(N==1) return x; 

        if(N<0)
        {
            return myPow(1/x, -N);
        }

        if(N%2==1)
        {
            return x*myPow(x,N-1);
        }

        else return myPow(x*x,N/2);     

    }
};
