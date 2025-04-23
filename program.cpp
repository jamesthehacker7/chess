#include"Board.hh"
#include<iostream>
#include <string>

using namespace std;

int main() {
    string comando;
    Board tablero;
    tablero.init();
    tablero.write();    
    cin >> comando;
    while (comando != "fin") {
        if(comando == "move" or comando == "m") {
            //resgister the move
            string s;
            cin >> s;
            int n = s.size();
            
            //move pawn
            if(n == 2) {
                char r = s[0];
                int row, col = s[1];
                row = r - '0' - 49;
            }
            //move piece
            else if(n == 3) {

            }
            //move piece if there multiple of them
            else if(n == 4) {

            }
            else cout << "Too many arguments" << endl;
        } 
        else {
            cout << "Comanda erronea" << endl;
        }
        cin >> comando;
    }
}