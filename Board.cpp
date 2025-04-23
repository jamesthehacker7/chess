#include"Board.hh"

Board::Board() {

}

void Board::init() {
    std::vector<char> v = {'R','N','B','K','Q','B','N','R'};
    std::vector<char> v2 = {'r','n','b','k','q','b','n','r'};
    Cell c;
    c.color = -1;
    c.piece.color = -1;
    c.piece.type = '.';
    VVC tablero(8, VC(8,c));
    //initialize cell colors
    bool white = true;
    for(int k = 0; k < 64; k++) {
        int i = k / 8;
        int j = k % 8;
        if(white) tablero[i][j].color = 0;
        else tablero[i][j].color = 1;
        white = !white;
    }
    //initialize white colors
    for(int k = 0; k < 16; k++) {
        int i = k / 8;
        int j = k % 8;
        tablero[i][j].piece.color = 1;
    }
    //initialize black colors
    for(int k = 48; k < 64; k++) {
        int i = k / 8;
        int j = k % 8;
        tablero[i][j].piece.color = 0;
    }
    //initialize pawns
    for(int i = 0; i < 8; i++) {
        tablero[6][i].piece.type = 'P';
        tablero[1][i].piece.type = 'p';
    }
    //initialize pieces
    for(int i = 0; i < 8; i++) {
        tablero[0][i].piece.type = v2[i];
        tablero[7][i].piece.type = v[i];
    }
    board = tablero;
    evaluation = 0;
}

void Board::move_piece(int i, int j) {
    board[i][j];
}

Piece Board::check_cell(int i, int j) const {
    return board[i][j].piece;
}

void Board::write() const {
    std::cout << std::endl << "Round: " << round << " - Evaluation: " << evaluation << std::endl << std::endl;
    for(int i = 0; i < 8; i++) {
        std::cout << 8-i << "  ";
        for(int j = 0; j < 8; j++) {
            std::cout << " " << board[i][j].piece.type << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl << "    A  B  C  D  E  F  G  H" << std::endl << std::endl;
    std::cout << std::endl;
}