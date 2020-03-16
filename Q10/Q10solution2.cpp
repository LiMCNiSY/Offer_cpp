class Solution {
public:
    int fib(int n) {
        int result[2]={0,1};
        if(n<2)
        {
            return result[n];
        }
        long long a=1;
        long long b=0;
        //long long fibN=0;
        for(int i=2;i<=n;++i)
        {
            a = a + b;
			b = a - b;
			a %= 1000000007;
        }
       
        return a;
    }
};
