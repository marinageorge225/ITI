#include <iostream>
using namespace std;

const int SIZE = 50;

int main() {
    int floor[SIZE][SIZE] = {0}; 

    int x = 0, y = 0; 
    int dir = 0;          
    bool penDown = false;
    int command = 0;
    while (true) {
        cout << "Enter command (1=pen up, 2=pen down, 3=right, 4=left, 5=move, 6=print, 9=end): ";
        cin >> command;
        if (command == 1) {
            penDown = false;
        } 
        else if (command == 2) {
            penDown = true;
        } 
        else if (command == 3) {
            dir = (dir + 1) % 4; 
        } 
        else if (command == 4) {
            dir = (dir + 3) % 4; 
        } 
        else if (command == 5) {
            int steps;
            cin >> steps;
            for (int i = 0; i < steps; i++) {
                if (penDown)
                    floor[x][y] = 1;

             
                if (dir == 0 && y + 1 < SIZE) y++;        // right
                else if (dir == 1 && x + 1 < SIZE) x++;   // down
                else if (dir == 2 && y - 1 >= 0) y--;     // left
                else if (dir == 3 && x - 1 >= 0) x--;     // up
            }
            if (penDown)
                floor[x][y] = 1; 
        } 
        else if (command == 6) {
            for (int i = 0; i < SIZE; i++) {
                for (int j = 0; j < SIZE; j++) {
                    cout << (floor[i][j] ? '*' : ' ');
                }
                cout << endl;
            }
        } 
        else if (command == 9) {
            cout << "End of data.\n";
            break;
        } 
        else {
            cout << "Invalid command.\n";
        }
    }

    return 0;
}
