class Solution{	
	public:		
		vector<int> singleNumber(vector<int>& nums){
			//your code goes here
			int n=nums.size(); int xorr=0;
			for(int i=0;i<n;i++)
			{
				xorr^=nums[i]; 
				/*Ill get 2 unique numbers which are different in atleast 1 digits 
				4 and 14 => 0100 ans 1110. Their 1st and 3rd bits are diff*/

				// we get 2 as ans =>14^4 = 2
			}

			int right_most_set_as_1 = (xorr & (xorr-1))^xorr;  
			/* xor = 2 => 0010
			   xor-1   => 0001
			   xor&xor-1 => 0000
			   (xor & xor-1)^xor = 0010^0011 =>0010 */

			int b1=0; int b2=0;
			for(int i=0;i<n;i++)
			{
				if((nums[i] & right_most_set_as_1) !=0)
				{
					b1=b1^nums[i];
				}
				else b2=b2^nums[i];
			}

			if(b1<b2) return {b1,b2};
			return {b2,b1};
		}
};
