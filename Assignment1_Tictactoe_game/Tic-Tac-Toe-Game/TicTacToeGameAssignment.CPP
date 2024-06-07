#include <iostream>
#include <array>

// Initialize the game board
std::array<std::array<char, 3>, 3> board = { { { '1', '2', '3' }, { '4', '5', '6' }, { '7', '8', '9' } } };

// Function to print the game board
void printBoard() {
    for (const auto &row : board) {
        for (const auto &cell : row) {
            std::cout << cell << ' ';
        }
        std::cout << '\n';
    }
}

// Function to update the game board
void updateBoard(int move, char player) {
    int row = (move - 1) / 3;
    int col = (move - 1) % 3;
    board[row][col] = player;
}

// Function to check if the game board is complete
bool check_board_complete() {
    for (const auto &row : board) {
        for (const auto &cell : row) {
            if (cell != 'X' && cell != 'O') {
                return false;
            }
        }
    }
    return true;
}

// Function to check if a player has won
bool check_win() {
    // Check rows and columns for a win
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return true;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return true;
    }

    // Check diagonals for a win
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return true;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return true;

    return false;
}

// Function to get the next player's turn
char next_turn(char current_player) {
    return (current_player == 'X') ? 'O' : 'X';
}

int main() {
    char player_x = 'X';
    char player_y = 'O';
    char turn = player_x;
    int move;
    bool hasWinner = false;
    bool is_game_over = false;

    do {
        printBoard();
        std::cout << "Player " << turn << ", enter your move: ";
        std::cin >> move;
        updateBoard(move, turn);
        printBoard();
        hasWinner = check_win();
        if (!hasWinner) {
            is_game_over = check_board_complete();
        }
        turn = next_turn(turn);
    } while (!hasWinner && !is_game_over);

    if (hasWinner) {
        std::cout << "Player " << next_turn(turn) << " wins!\n";
    } else {
        std::cout << "It's a draw.\n";
    }

    return 0;
}
