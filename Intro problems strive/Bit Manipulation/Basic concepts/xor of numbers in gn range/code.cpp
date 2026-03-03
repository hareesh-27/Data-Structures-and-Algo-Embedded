class Solution{	
	private:
		int xorr(int n)
		{
			if(n%4==0) return n;
			if(n%4==1) return 1;
			if(n%4==2) return n+1;
			if(n%4==3) return 0;
		}
	
	public:
		int findRangeXOR(int l,int r){
			//your code goes here
			int ans = xorr(l-1) ^ xorr(r);
			return ans;
		}
};
