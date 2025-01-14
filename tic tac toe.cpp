#include <iostream>
#include <vector>

using namespace std;

const char EMPTY = ' ';
const char PLAYER_X = 'X';
const char PLAYER_O = 'O';
const int SIZE = 3;

class TicTacToe {
private:
    vector<vector<char>> board;
    char currentPlayer;

public:
    TicTacToe() : board(SIZE, vector<char>(SIZE, EMPTY)), currentPlayer(PLAYER_X) {}

    void printBoard() {
        for (int i = 0; i < SIZE; ++i) {
            for (int j = 0; j < SIZE; ++j) {
                cout << board[i][j];
                if (j < SIZE - 1) cout << "|";
            }
            cout << endl;
            if (i < SIZE - 1) cout << "-----" << endl;
        }
    }

    bool isWin() {
        for (int i = 0; i < SIZE; ++i) {
            // Check rows and columns
            if ((board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) ||
                (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer)) {
                return true;
            }
        }
        // Check diagonals
        return (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) ||
               (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer);
    }

    bool isDraw() {
        for (const auto& row : board) {
            for (char cell : row) {
                if (cell == EMPTY) return false;
            }
        }
        return true;
    }

    void makeMove(int row, int col) {
        board[row][col] = currentPlayer;
    }

    void switchPlayer() {
        currentPlayer = (currentPlayer == PLAYER_X) ? PLAYER_O : PLAYER_X;
    }

    bool isValidMove(int row, int col) {
        return row >= 0 && row < SIZE && col >= 0 && col < SIZE && board[row][col] == EMPTY;
    }

    void play() {
        int row, col;
        while (true) {
            printBoard();
            cout << "Player " << currentPlayer << ", enter your move (row and column): ";
            cin >> row >> col;

            if (isValidMove(row, col)) {
                makeMove(row, col);
                if (isWin()) {
                    printBoard();
                    cout << "Player " << currentPlayer << " wins!" << endl;
                    break;
                }
                if (isDraw()) {
                    printBoard();
                    cout << "It's a draw!" << endl;
                    break;
                }
                switchPlayer();
            } else {
                cout << "Invalid move, try again." << endl;
            }
        }
    }
};

int main() {
    TicTacToe game;
    game.play();
    return 0;
}
