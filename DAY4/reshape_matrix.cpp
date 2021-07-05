class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int r1=mat.size();
        int c1=mat[0].size();
        if(r*c!=r1*c1)
        {
            return mat;
        }
        vector<vector<int>> v(r);
        int rows=0,column=0;
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                if(column==c)
                {
                    column=0;
                    rows++;
                }
                v[rows].push_back(mat[i][j]);
                column++;
            }
        }
        return v;
    }
};
