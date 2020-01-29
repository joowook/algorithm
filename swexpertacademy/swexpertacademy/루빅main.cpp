#define _CRT_SECURE_NO_WARNINGS	// Ignore build errors when using unsafe functions in Visual Studio.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CUBE_SIZE   3
#define FRONT       0
#define BACK        1
#define UP          2
#define DOWN        3
#define LEFT        4
#define RIGHT       5

extern void runtest(int cube[6][CUBE_SIZE][CUBE_SIZE]);

static int Cube[6][CUBE_SIZE][CUBE_SIZE];
static int CallCnt = 0;

void rotate(int face, bool clockwise) {
    int preCube[6][CUBE_SIZE][CUBE_SIZE];
    ++CallCnt;

    register int s, i, j;
    for (s = 0; s < 6; ++s)
        for (i = 0; i < CUBE_SIZE; ++i)
            for (j = 0; j < CUBE_SIZE; ++j)
                preCube[s][i][j] = Cube[s][i][j];

    if (clockwise) {
        for (i = 0; i < CUBE_SIZE; ++i)
            for (j = 0; j < CUBE_SIZE; ++j)
                Cube[face][j][CUBE_SIZE - 1 - i] = preCube[face][i][j];
    }
    else {
        for (i = 0; i < CUBE_SIZE; ++i)
            for (j = 0; j < CUBE_SIZE; ++j)
                Cube[face][CUBE_SIZE - 1 - j][i] = preCube[face][i][j];
    }

    switch (face)
    {
    case FRONT:
        if (clockwise) {
            Cube[UP][2][0] = preCube[LEFT][2][2];
            Cube[UP][2][1] = preCube[LEFT][1][2];
            Cube[UP][2][2] = preCube[LEFT][0][2];

            Cube[RIGHT][0][0] = preCube[UP][2][0];
            Cube[RIGHT][1][0] = preCube[UP][2][1];
            Cube[RIGHT][2][0] = preCube[UP][2][2];

            Cube[DOWN][0][0] = preCube[RIGHT][2][0];
            Cube[DOWN][0][1] = preCube[RIGHT][1][0];
            Cube[DOWN][0][2] = preCube[RIGHT][0][0];

            Cube[LEFT][0][2] = preCube[DOWN][0][0];
            Cube[LEFT][1][2] = preCube[DOWN][0][1];
            Cube[LEFT][2][2] = preCube[DOWN][0][2];
        }
        else {
            Cube[UP][2][0] = preCube[RIGHT][0][0];
            Cube[UP][2][1] = preCube[RIGHT][1][0];
            Cube[UP][2][2] = preCube[RIGHT][2][0];

            Cube[RIGHT][0][0] = preCube[DOWN][0][2];
            Cube[RIGHT][1][0] = preCube[DOWN][0][1];
            Cube[RIGHT][2][0] = preCube[DOWN][0][0];

            Cube[DOWN][0][0] = preCube[LEFT][0][2];
            Cube[DOWN][0][1] = preCube[LEFT][1][2];
            Cube[DOWN][0][2] = preCube[LEFT][2][2];

            Cube[LEFT][0][2] = preCube[UP][2][2];
            Cube[LEFT][1][2] = preCube[UP][2][1];
            Cube[LEFT][2][2] = preCube[UP][2][0];
        }
        break;
    case BACK:
        if (clockwise) {
            Cube[UP][0][2] = preCube[RIGHT][2][2];
            Cube[UP][0][1] = preCube[RIGHT][1][2];
            Cube[UP][0][0] = preCube[RIGHT][0][2];

            Cube[LEFT][0][0] = preCube[UP][0][2];
            Cube[LEFT][1][0] = preCube[UP][0][1];
            Cube[LEFT][2][0] = preCube[UP][0][0];

            Cube[DOWN][2][2] = preCube[LEFT][2][0];
            Cube[DOWN][2][1] = preCube[LEFT][1][0];
            Cube[DOWN][2][0] = preCube[LEFT][0][0];

            Cube[RIGHT][0][2] = preCube[DOWN][2][2];
            Cube[RIGHT][1][2] = preCube[DOWN][2][1];
            Cube[RIGHT][2][2] = preCube[DOWN][2][0];
        }
        else {
            Cube[UP][0][2] = preCube[LEFT][0][0];
            Cube[UP][0][1] = preCube[LEFT][1][0];
            Cube[UP][0][0] = preCube[LEFT][2][0];

            Cube[LEFT][0][0] = preCube[DOWN][2][0];
            Cube[LEFT][1][0] = preCube[DOWN][2][1];
            Cube[LEFT][2][0] = preCube[DOWN][2][2];

            Cube[DOWN][2][2] = preCube[RIGHT][0][2];
            Cube[DOWN][2][1] = preCube[RIGHT][1][2];
            Cube[DOWN][2][0] = preCube[RIGHT][2][2];

            Cube[RIGHT][0][2] = preCube[UP][0][0];
            Cube[RIGHT][1][2] = preCube[UP][0][1];
            Cube[RIGHT][2][2] = preCube[UP][0][2];
        }
        break;
    case UP:
        if (clockwise) {
            Cube[BACK][0][2] = preCube[LEFT][0][2];
            Cube[BACK][0][1] = preCube[LEFT][0][1];
            Cube[BACK][0][0] = preCube[LEFT][0][0];

            Cube[RIGHT][0][2] = preCube[BACK][0][2];
            Cube[RIGHT][0][1] = preCube[BACK][0][1];
            Cube[RIGHT][0][0] = preCube[BACK][0][0];

            Cube[FRONT][0][0] = preCube[RIGHT][0][0];
            Cube[FRONT][0][1] = preCube[RIGHT][0][1];
            Cube[FRONT][0][2] = preCube[RIGHT][0][2];

            Cube[LEFT][0][0] = preCube[FRONT][0][0];
            Cube[LEFT][0][1] = preCube[FRONT][0][1];
            Cube[LEFT][0][2] = preCube[FRONT][0][2];
        }
        else {
            Cube[BACK][0][2] = preCube[RIGHT][0][2];
            Cube[BACK][0][1] = preCube[RIGHT][0][1];
            Cube[BACK][0][0] = preCube[RIGHT][0][0];

            Cube[RIGHT][0][2] = preCube[FRONT][0][2];
            Cube[RIGHT][0][1] = preCube[FRONT][0][1];
            Cube[RIGHT][0][0] = preCube[FRONT][0][0];

            Cube[FRONT][0][0] = preCube[LEFT][0][0];
            Cube[FRONT][0][1] = preCube[LEFT][0][1];
            Cube[FRONT][0][2] = preCube[LEFT][0][2];

            Cube[LEFT][0][0] = preCube[BACK][0][0];
            Cube[LEFT][0][1] = preCube[BACK][0][1];
            Cube[LEFT][0][2] = preCube[BACK][0][2];
        }
        break;
    case DOWN:
        if (clockwise) {
            Cube[FRONT][2][0] = preCube[LEFT][2][0];
            Cube[FRONT][2][1] = preCube[LEFT][2][1];
            Cube[FRONT][2][2] = preCube[LEFT][2][2];

            Cube[RIGHT][2][0] = preCube[FRONT][2][0];
            Cube[RIGHT][2][1] = preCube[FRONT][2][1];
            Cube[RIGHT][2][2] = preCube[FRONT][2][2];

            Cube[BACK][2][2] = preCube[RIGHT][2][2];
            Cube[BACK][2][1] = preCube[RIGHT][2][1];
            Cube[BACK][2][0] = preCube[RIGHT][2][0];

            Cube[LEFT][2][2] = preCube[BACK][2][2];
            Cube[LEFT][2][1] = preCube[BACK][2][1];
            Cube[LEFT][2][0] = preCube[BACK][2][0];
        }
        else {
            Cube[FRONT][2][0] = preCube[RIGHT][2][0];
            Cube[FRONT][2][1] = preCube[RIGHT][2][1];
            Cube[FRONT][2][2] = preCube[RIGHT][2][2];

            Cube[RIGHT][2][0] = preCube[BACK][2][0];
            Cube[RIGHT][2][1] = preCube[BACK][2][1];
            Cube[RIGHT][2][2] = preCube[BACK][2][2];

            Cube[BACK][2][2] = preCube[LEFT][2][2];
            Cube[BACK][2][1] = preCube[LEFT][2][1];
            Cube[BACK][2][0] = preCube[LEFT][2][0];

            Cube[LEFT][2][2] = preCube[FRONT][2][2];
            Cube[LEFT][2][1] = preCube[FRONT][2][1];
            Cube[LEFT][2][0] = preCube[FRONT][2][0];
        }
        break;
    case LEFT:
        if (clockwise) {
            Cube[UP][0][0] = preCube[BACK][2][2];
            Cube[UP][1][0] = preCube[BACK][1][2];
            Cube[UP][2][0] = preCube[BACK][0][2];

            Cube[FRONT][0][0] = preCube[UP][0][0];
            Cube[FRONT][1][0] = preCube[UP][1][0];
            Cube[FRONT][2][0] = preCube[UP][2][0];

            Cube[DOWN][2][0] = preCube[FRONT][2][0];
            Cube[DOWN][1][0] = preCube[FRONT][1][0];
            Cube[DOWN][0][0] = preCube[FRONT][0][0];

            Cube[BACK][0][2] = preCube[DOWN][2][0];
            Cube[BACK][1][2] = preCube[DOWN][1][0];
            Cube[BACK][2][2] = preCube[DOWN][0][0];
        }
        else {
            Cube[UP][0][0] = preCube[FRONT][0][0];
            Cube[UP][1][0] = preCube[FRONT][1][0];
            Cube[UP][2][0] = preCube[FRONT][2][0];

            Cube[FRONT][0][0] = preCube[DOWN][0][0];
            Cube[FRONT][1][0] = preCube[DOWN][1][0];
            Cube[FRONT][2][0] = preCube[DOWN][2][0];

            Cube[DOWN][2][0] = preCube[BACK][0][2];
            Cube[DOWN][1][0] = preCube[BACK][1][2];
            Cube[DOWN][0][0] = preCube[BACK][2][2];

            Cube[BACK][0][2] = preCube[UP][2][0];
            Cube[BACK][1][2] = preCube[UP][1][0];
            Cube[BACK][2][2] = preCube[UP][0][0];
        }
        break;
    case RIGHT:
        if (clockwise) {
            Cube[UP][2][2] = preCube[FRONT][2][2];
            Cube[UP][1][2] = preCube[FRONT][1][2];
            Cube[UP][0][2] = preCube[FRONT][0][2];

            Cube[BACK][0][0] = preCube[UP][2][2];
            Cube[BACK][1][0] = preCube[UP][1][2];
            Cube[BACK][2][0] = preCube[UP][0][2];

            Cube[DOWN][0][2] = preCube[BACK][2][0];
            Cube[DOWN][1][2] = preCube[BACK][1][0];
            Cube[DOWN][2][2] = preCube[BACK][0][0];

            Cube[FRONT][0][2] = preCube[DOWN][0][2];
            Cube[FRONT][1][2] = preCube[DOWN][1][2];
            Cube[FRONT][2][2] = preCube[DOWN][2][2];
        }
        else {
            Cube[UP][2][2] = preCube[BACK][0][0];
            Cube[UP][1][2] = preCube[BACK][1][0];
            Cube[UP][0][2] = preCube[BACK][2][0];

            Cube[BACK][0][0] = preCube[DOWN][2][2];
            Cube[BACK][1][0] = preCube[DOWN][1][2];
            Cube[BACK][2][0] = preCube[DOWN][0][2];

            Cube[DOWN][0][2] = preCube[FRONT][0][2];
            Cube[DOWN][1][2] = preCube[FRONT][1][2];
            Cube[DOWN][2][2] = preCube[FRONT][2][2];

            Cube[FRONT][0][2] = preCube[UP][0][2];
            Cube[FRONT][1][2] = preCube[UP][1][2];
            Cube[FRONT][2][2] = preCube[UP][2][2];
        }
        break;
    }
}

int main(void)
{
    setbuf(stdout, NULL);
    srand(3); // The seed will be changed.

    int testCnt = 20;
    double totalCallCnt = 0.0;
    double totalRunTime = 0.0;

    for (int tc = 1; tc <= testCnt; ++tc)
    {
        int arr[6][CUBE_SIZE][CUBE_SIZE];
        register int face, row, col;

        for (face = 0; face < 6; ++face)
            for (row = 0; row < CUBE_SIZE; ++row)
                for (col = 0; col < CUBE_SIZE; ++col)
                    Cube[face][row][col] = face;

        for (register int cnt = 0; cnt < 10; ++cnt) {
            int s = rand() % 6;
            bool c = rand() % 2 ? true : false;
            rotate(s, c);
        }

        for (face = 0; face < 6; ++face)
            for (row = 0; row < CUBE_SIZE; ++row)
                for (col = 0; col < CUBE_SIZE; ++col)
                    arr[face][row][col] = Cube[face][row][col];

        CallCnt = 0;
        time_t start = clock();
        runtest(arr);
        totalRunTime += (clock() - start) / (CLOCKS_PER_SEC / 1000);

        for (face = 0; face < 6; ++face)
            for (row = 0; row < CUBE_SIZE; ++row)
                for (col = 0; col < CUBE_SIZE; ++col)
                    if (Cube[face][row][col] != face) CallCnt += 1000;

        printf("#%d %d\n", tc, CallCnt);
        totalCallCnt += CallCnt;
    }

    printf("SCORE: %.4lf\n", totalCallCnt + totalRunTime / 10000);
    printf("%lf\n", totalRunTime);
    return 0;
}