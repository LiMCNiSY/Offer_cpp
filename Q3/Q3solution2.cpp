class Solution {
public:
	int findRepeatNumber(vector<int>& nums) {
        int length=nums.size();
		int*a = new int[length];
		for (int i=0; i<length;i++)
		{
			if (a[nums[i]]<0) 
            {
                a[nums[i]] = 0;
            }
			a[nums[i]]++;
			if (a[nums[i]] > 1) 
            {
                return nums[i];
            }
		}
		return -1;
	}
};
