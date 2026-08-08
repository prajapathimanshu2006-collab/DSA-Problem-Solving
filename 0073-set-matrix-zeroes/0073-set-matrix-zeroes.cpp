class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> f;
        vector<int> s;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    f.push_back(i);
                    s.push_back(j);
                }
            }
        }
        for(int j=0;j<f.size();j++)
        {
            for(int i=0;i<matrix[0].size();i++)
            {
                matrix[f[j]][i] = 0; 
            }
            for(int i=0;i<matrix.size();i++)
            {
                matrix[i][s[j]] = 0;
            }
        }
        return;
    }
};