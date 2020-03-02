class Solution {
public:
	int findRepeatNumber(vector<int>& nums) {
	    int b;
        if(nums.size()<=0||nums.empty())
	    {
		return 0;
	    }
	    for(int i=0;i<nums.size();i++)
	    {
		if(nums[i]<0||nums[i]>nums.size()-1)
		  return false;
	    }
	    for(int i=0;i<nums.size();i++)
	    {
		while(nums[i]!=i)
		  {
			if(nums[i]==nums[nums[i]])
			{
				b=nums[i];
				return b;
			}
			int c=nums[i];
			nums[i]=nums[c];
			nums[c]=c;
		  }
        }
        return 0;
	}
};
