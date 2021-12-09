#include <cstdio>
#include <iostream>
#include <vector>

#define Node 5
#define Edge 9

using namespace std;

// Determine whether the edge is visited
bool isVisited[Node][Node] = { false };

// Build the map of house drawing
vector<int> edge[Node] = { { 1, 2, 4 }, { 0, 2, 4 }, { 0, 1, 3, 4 }, { 2, 4 }, { 0, 1, 2, 3 } };

// Store the current Edgeution
vector<int> solution;

// Backtracking Method 
void backtracking(int x) {
    // Bound
    if (solution.size() == Edge) {
        // Print the current solution without last one
        for (int i = 0; i < Edge; ++i)
            printf("%d", solution[i] + 1);
        printf("\n");
    }

    // Backtracking
    for (int i = 0; i < edge[x].size(); ++i) {
        int y = edge[x][i];
        if (!isVisited[x][y] && !isVisited[y][x]) {
            // Mark as visited and push into solution
            isVisited[x][y] = isVisited[y][x] = true;
            solution.push_back(y);

            backtracking(y);

            // Return to current status (pop out the current solution)
            isVisited[x][y] = isVisited[y][x] = false;
            solution.pop_back();
        }
    }
}

int main(void) {
    // Initial from point 1
    solution.push_back(0);

    // Use backtracking to find out all possible solitions
    backtracking(0);

    return 0;
}
