class Solution {
public:
    int cuttingRope(int n) {
        if (n<= 3) return 1 * (n- 1);
        int m = 1;
        if (n% 3 == 2) 
        {
            n-= 2;
            m *= 2;
        }
        if (n % 3 == 1) 
        {
            n-= 4;
            m*= 4;
        }
        while(n> 0) 
        {
            m*= 3;
            n-= 3;
        }
        return m;
    }
};
