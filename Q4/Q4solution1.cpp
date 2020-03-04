class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
    	bool a=false;
    	//if(matrix!=NULL)
    	//{
    	int row=matrix.size();
    	int b=0;
    	if(row>0)
		{
			int columns=matrix[0].size();
            int column=columns-1;
			while(b<row&&column>=0)
			{
				if(matrix[b][column]==target)
				{
					a=true;
					break;
				}
				else if(matrix[b][column]>target)
				{
					--column;
				}
				else
				{
					++b;
				}
			}
		} 
		//}
	    return a;	
    }
};
