#include"Piece.hh"

Piece::Piece(PieceType tipo, int colour, Pos posicion) {
    type = tipo;
    color = colour;
    position = posicion;
}

void Piece::change_pos(Pos new_position) {
    position = new_position;
}

void Piece::crown(PieceType new_piece) {
    type = new_piece;
}

void Piece::change_value(int new_value) {
    value = new_value;
}

char Piece::rtype() const {
    return type;
}

int Piece::rcolor() const {
    return color;
}

Pos Piece::rposition() const {
    return position;
}

int Piece::rvalue() const {
    return value;
}