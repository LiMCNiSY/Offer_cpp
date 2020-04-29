class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        unsigned int flag=1;
        while(flag)
        {
            if(n&flag) count++; 
            flag=flag<<1;
        }
        return count;
    }
};
