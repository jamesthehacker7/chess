#include<iostream>

typedef std::pair<int, int> Pos;

enum PieceType {
    PAWN,
    ROOK,
    KNIGHT,
    BISHOP,
    QUEEN,
    KING,
    EMPTY
};

class Piece {

public:
    //Constructoras 
    Piece(PieceType tipo, int color, Pos posicion);

    //Modificadoras
    void change_pos(Pos new_position);

    void crown(PieceType new_piece);

    void change_value(int new_value);
    
    // Consultoras
    char rtype() const;

    int rcolor() const;

    Pos rposition() const;

    int rvalue() const;

private:
    PieceType type;
    int color;
    Pos position;
    int value;
};