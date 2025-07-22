class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int row = board.size();
        int col = board[0].size();

        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                if(board[i][j] == word[0]) {
                    if(backtracking(j, i, board, word, 0, row, col)) {
                        return true;
                    }
                }
            }
        }
        return false;
    }

    bool backtracking(int col, int row, vector<vector<char>>& board, string &word, int index, int maxRow, int maxCol) {
        if(index == word.length()) return true;

        if(row < 0 || row >= maxRow || col < 0 || col >= maxCol || board[row][col] != word[index]) {
            return false;
        }

        char temp = board[row][col];
        board[row][col] = '#';

        bool found = backtracking(col + 1, row, board, word, index + 1, maxRow, maxCol) ||
                     backtracking(col - 1, row, board, word, index + 1, maxRow, maxCol) ||
                     backtracking(col, row + 1, board, word, index + 1, maxRow, maxCol) ||
                     backtracking(col, row - 1, board, word, index + 1, maxRow, maxCol);

        board[row][col] = temp;
        return found;
    }
};
