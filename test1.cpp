#include<iostream>
#include<vector>
using namespace std;

int main() {
    cout << "Preinit" << endl;
    vector<vector<char>> tablero(8, vector<char>(8, 'R'));
    cout << "Postinit" << endl;
    bool white = true;
    for(int k = 0; k < 64; k++) {
        int i = k / 8;
        int j = k % 8;
        if(white) tablero[i][j] = 'W';
        else tablero[i][j] = 'B';
        white = !white;
    }

    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            cout << tablero[i][j];
        }
        cout << endl;
    }
}