class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n!=0)
        {
            if(n % 2 == 1) count++;//也可以用与运算即if(n&1) 
            n=n>>1;
        }
        return count;
    }
};
