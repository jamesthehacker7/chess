#include<iostream>
#include<vector>

struct Piece {
    char type;
    int color;
};

struct Cell {
    Piece piece; // The piece in the cell
    int color; // The color of the cell, 0 for white, 1 for black
};

typedef std::pair<int, int> Pos;
typedef std::vector<Cell> VC;
typedef std::vector<VC> VVC;

class Board {

public:
    //Constructoras 
    Board();

    void init();

    //Modificadoras
    void move_piece(int i, int j);

    // Consultoras
    Piece check_cell(int i, int j) const;

    void write() const;

private:
    VVC board;
    int evaluation = 0;
    int round = 0;
    bool white_turn = true;
};