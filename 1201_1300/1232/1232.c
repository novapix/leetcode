#include<stdio.h>
#include<stdbool.h>


bool checkStraightLine(int** coordinates, int coordinatesSize, int* coordinatesColSize) {
    if (coordinatesSize == 2) return true;

    // For Calculating initial differences
    int x0 = coordinates[0][0], y0 = coordinates[0][1];
    int xdiff = coordinates[1][0] - x0;
    int ydiff = coordinates[1][1] - y0;

    // Starting from 3rd Co check if they have same slopes (just cross multiplication to avoid division)
    for (int i = 2;i < coordinatesSize;i++) {
        int x = coordinates[i][0];
        int y = coordinates[i][1];
        if (ydiff * (x - x0) != xdiff * (y - y0))
            return false;
    }
    return true;
}