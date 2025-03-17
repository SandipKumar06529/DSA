class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int rookX = -1, rookY = -1;
        int n = 8;  // The board is always 8x8

        // Step 1: Find the Rook's position
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 'R') {
                    rookX = i;
                    rookY = j;
                    break;
                }
            }
            if (rookX != -1) break;  // Exit early once rook is found
        }

        int count = 0;

        // Step 2: Check all four directions
        
        // Move Up
        for (int i = rookX - 1; i >= 0; i--) {
            if (board[i][rookY] == 'B') break;  // Blocked by Bishop
            if (board[i][rookY] == 'p') { count++; break; }  // Pawn found
        }

        // Move Down
        for (int i = rookX + 1; i < n; i++) {
            if (board[i][rookY] == 'B') break;
            if (board[i][rookY] == 'p') { count++; break; }
        }

        // Move Left
        for (int j = rookY - 1; j >= 0; j--) {
            if (board[rookX][j] == 'B') break;
            if (board[rookX][j] == 'p') { count++; break; }
        }

        // Move Right
        for (int j = rookY + 1; j < n; j++) {
            if (board[rookX][j] == 'B') break;
            if (board[rookX][j] == 'p') { count++; break; }
        }

        return count;
        
    }
};