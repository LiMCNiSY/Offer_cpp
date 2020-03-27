class Solution {
public:
    int movingCount(int m, int n, int k) {
        vector<vector<bool>> visit(m, vector<bool>(n, 0));
        return D(0, 0, m, n, k, visit);
    }

    int D(int i, int j, int m, int n, int k, vector<vector<bool>>& visit) {
        if (i<0||i==m||j<0||j==n||visit[i][j]||i%10+i/10+j%10+j/10>k)
            return 0;
        visit[i][j] = true;
        return D(i+1, j, m, n, k, visit) + 
               D(i-1, j, m, n, k, visit) + 
               D(i, j+1, m, n, k, visit) + 
               D(i, j-1, m, n, k, visit) + 1;
    }
};
