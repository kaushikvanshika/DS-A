class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int r,c, i, j, res = 0;
        for(i = 0; i < 8; i ++){
            for(j = 0; j < 8; j ++){
                if(board[i][j] == 'R'){
                    r = i;
                    c = j;
                    break;
                }
            }
        }
        for(j = c; j < 8; j ++){
            if(board[r][j] == 'p'){
                res++;
                break;
            }
            else if(board[r][j] == 'B')
                break;
        }
        for(j = c; j >= 0; j --){
            if(board[r][j] == 'p'){
                res++;
                break;
            }
            else if(board[r][j] == 'B')
                break;
        }
        for(i = r; i >=0; i --){
            if(board[i][c] == 'p'){
                res++;
                break;
            }
            else if(board[i][c] == 'B')
                break;
        }
        for(i = r; i < 8; i ++){
            if(board[i][c] == 'p'){
                res++;
                break;
            }
            else if(board[i][c] == 'B')
                break;
        }

        return res;
    }
};
