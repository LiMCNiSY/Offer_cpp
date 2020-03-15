class Solution {
public:
    int fib(int n) {
        int result[2]={0,1};
        if(n<2)
        {
            return result[n];
        }
        long long fibNMinusQne=1;
        long long fibNMinusTwo=0;
        long long fibN=0;
        for(int i=2;i<=n;++i)
        {
            fibN=fibNMinusQne+fibNMinusTwo;
            fibNMinusTwo=fibNMinusQne;
            fibNMinusQne=fibN;
        }
        fibN=fibN%1000000007;
        return fibN;
    }
};
