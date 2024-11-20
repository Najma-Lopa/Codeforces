#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate minimum moves
int minimumMoves(int x, int y) {
    int moves = 0;
    int curX = 0, curY = 0;
    int dx = 1, dy = 0; // Initial direction: moving in positive x direction

    while (true) {
        // Perform the current move
        curX += dx;
        curY += dy;
        moves++;

        // Check if the current position matches the target position
        if (curX == x && curY == y) {
            return moves;
        }

        // Update the direction
        if (moves % 4 == 0) { // Every 4 moves, reset direction
            dx = 1;
            dy = 0;
        } else if (moves % 4 == 1) {
            dx = 0;
            dy = 1;
        } else if (moves % 4 == 2) {
            dx = -1;
            dy = 0;
        } else if (moves % 4 == 3) {
            dx = 0;
            dy = -1;
        }
    }
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x, y;
        cin >> x >> y;
        cout << minimumMoves(x, y) << endl;
    }
    
    return 0;
}
