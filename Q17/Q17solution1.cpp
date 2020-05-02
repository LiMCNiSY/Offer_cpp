class Solution {
public:
    vector<int> printNumbers(int n) {
        int upper = pow(10,n) - 1;
        vector<int> res;
        for(int i=1;i<=upper;i++){
            res.push_back(i);
        }
        return res;
    }
};
