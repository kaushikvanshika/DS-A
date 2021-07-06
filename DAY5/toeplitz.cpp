class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int flag=0;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(i>0 && j>0)
                {
                  if(matrix[i][j]!=matrix[i-1][j-1])
                   {
                      flag=1;
                      break;
                    }
                }
            }
        }
         if(flag==1)
            return false;
        else
           return true;
    }
};
