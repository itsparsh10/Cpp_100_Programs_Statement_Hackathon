// including required header files
#include <iostream>
using namespace std;

// Maximum maze size
const int MAX_N = 100;

int maze[MAX_N][MAX_N];
bool visited[MAX_N][MAX_N];
int dist[MAX_N][MAX_N];

// Possible moves: right, left, down, up
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

// Maze dimensions
int N, M;

// Checking weather the movement of block is valid or not
bool isValid(int x, int y) {
    return x >= 0 && x < N && y >= 0 && y < M && maze[x][y] == 1 && !visited[x][y];
}

// function to find the shortest path between start and end point
int shortestDistance(int startX, int startY, int endX, int endY) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            visited[i][j] = false;
            dist[i][j] = -1;
        }
    }

    visited[startX][startY] = true;
    dist[startX][startY] = 0;

    bool found = false;

    while (!found) {
        found = true;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (visited[i][j]) {
                    for (int k = 0; k < 4; k++) {
                        int newX = i + dx[k];
                        int newY = j + dy[k];

                        if (isValid(newX, newY) && (dist[newX][newY] == -1 || dist[newX][newY] > dist[i][j] + 1)) {
                            dist[newX][newY] = dist[i][j] + 1;
                            visited[newX][newY] = true;
                            found = false;
                        }

                        if (newX == endX && newY == endY) {
                            return dist[endX][endY];
                        }
                    }
                }
            }
        }
    }

    // No path found
    return -1;
}

// main function
int main() {
    // Input maze dimensions
    cout << "Enter the number of rows in the maze: ";
    cin >> N;
    cout << "Enter the number of columns in the maze: ";
    cin >> M;

    // Input maze
    cout << "Enter the values of the maze (1. movable blocks, 2. non movable blocks)";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << "Enter the " << i+1 << "th row " << j+1 << "the column element in maze: ";
            cin >> maze[i][j];
        }
    }

    // Input start and end points
    int startX, startY, endX, endY;
    cout << "Enter the X-coordinate of starting position: ";
    cin >> startX;
    cout << "Enter the Y-coordinate of starting position: ";
    cin >> startY;
    cout << "Enter the X-coordinate of ending position: ";
    cin >> endX;
    cout << "Enter the Y-coordinate of ending position: ";
    cin >> endY;

    int shortestDist = shortestDistance(startX, startY, endX, endY);

    // displaying result
    if (shortestDist == -1) {
        cout << "No path found!" << endl;
    } else {
        cout << "Shortest distance in the maze from (" << startX << ", " <<  startY << ") to (" << endX << ", " << endY << ") is: " << shortestDist << endl;
    }

    return 0;
}