class Solution {
public:
    char checkRows(vector<vector<char>> &grid) {
        for(int i=0; i<3; i++) {
            if(grid[i][0] != ' ' && grid[i][0] == grid[i][1] && grid[i][0] == grid[i][2]) {
                return grid[i][0];//returning O or X
            }
        }
        return  ' ';//returning space if no winner is found
    }

    char checkCols(vector<vector<char>> &grid) {
        for(int j=0; j<3; j++) {
            if(grid[0][j] != ' ' && grid[0][j] == grid[1][j] && grid[0][j] == grid[2][j]) {
                return grid[0][j];
            }
        }
        return ' ';
    }

    char checkDiag(vector<vector<char>> &grid) {
        if(grid[0][0] == grid[1][1] && grid[0][0] == grid[2][2]) {
            return grid[0][0];
        }
        else if(grid[0][2] == grid[1][1] && grid[0][2] == grid[2][0]) {
            return grid[0][2];
        }
        return ' ';
    }


    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<char>> grid(3, vector<char>(3,' '));
        int n = moves.size();
        for(int i=0; i<n; i+=2) {
            grid[moves[i][0]][moves[i][1]] = 'X';
        } 
        for(int i=1; i<n; i+=2) {
            grid[moves[i][0]][moves[i][1]] = 'O';
        }

        char winner = checkRows(grid);
        if(winner == ' ') {
            winner = checkCols(grid); 
            if(winner == ' ') {
                winner = checkDiag(grid);
            }
        }
        if(winner == 'X') {
            return "A";
        }
        else if(winner == 'O') {
            return "B";
        }
        else if(n == 9) {//if all moves done and no winner till now then draw
            return "Draw";
        }
        return "Pending";
    }
};