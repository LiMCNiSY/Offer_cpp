class Solution {
public:
    int numWays(int n) {
        int result[2]={0,1};
        if(n+1<2)
        {
            return result[n+1];
        }
        long long a=1;
        long long b=0;
        //long long fibN=0;
        for(int i=2;i<=n+1;++i)
        {
            a = a + b;
			b = a - b;
			a %= 1000000007;
        }
        return a;
    }
};

//不难看出是斐波那契数列 
