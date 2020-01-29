#define CUBE_SIZE   3
#define FRONT       0
#define BACK        1
#define UP          2
#define DOWN        3
#define LEFT        4
#define RIGHT       5

#define MAX_KEY 54
#define MAX_DATA 5
#define MAX_TABLE 10000000

typedef struct
{
    char key[MAX_KEY + 1];
    char data[MAX_DATA * 2 + 1];
}Hash;
Hash tb[MAX_TABLE];

extern void rotate(int face, bool clockwise);
void user_rotate(int, bool);
static int Cube[6][CUBE_SIZE][CUBE_SIZE];
static char tmp[MAX_KEY];
static int CallCnt = 0;
static bool flag = true;
static bool finish = true;

unsigned long hash(const char *str)
{
    unsigned long hash = 5381;
    int c;

    while (c = *str++)
    {
        hash = (((hash << 5) + hash) + c) % MAX_TABLE;
    }

    return hash % MAX_TABLE;
}

int strlen(char *data) {
    int cnt = 0;
    for (int i = 0; data[i] != '\0'; i++) {
        cnt++;
    }

    return cnt;
}

void strcpy(char *data, const char *data2) {
    int i;

    for (i = 0; data2[i] != '\0'; i++) {
        data[i] = data2[i];
    }

    data[i] = data2[i];
}

int strcmp(char *data, const char *data2) {
    int i;

    for (i = 0; data[i] != '\0'; i++) {
        if (data[i] != data2[i]) {
            return true;
        }
    }

    if (data2[i] != '\0') {
        return true;
    }

    return false;
}
int find(const char *key, char *data)
{
    unsigned long h = hash(key);
    int cnt = MAX_TABLE;

    while (tb[h].key[0] != 0 && cnt--)
    {
        if (strcmp(tb[h].key, key) == 0)
        {
            strcpy(data, tb[h].data);
            return 1;
        }
        h = (h + 1) % MAX_TABLE;
    }
    return 0;
}

int add(const char *key, char *data)
{
    unsigned long h = hash(key);

    while (tb[h].key[0] != 0)
    {
        if (strcmp(tb[h].key, key) == 0)
        {
            return 0;
        }

        h = (h + 1) % MAX_TABLE;
    }
    strcpy(tb[h].key, key);
    strcpy(tb[h].data, data);
    return 1;
}

void go(int cnt, char track[2 * MAX_DATA + 1]) {
    if (cnt == 5) {
        register int face, row, col;
        register int ts = 0;

        for (face = 0; face < 6; ++face)
            for (row = 0; row < CUBE_SIZE; ++row)
                for (col = 0; col < CUBE_SIZE; ++col)
                    tmp[ts++] = Cube[face][row][col] + '0';

        add(tmp, track);

    }
    else {
        for (register int i = 0; i < 6; i++) {
            for (register int j = 0; j < 2; j++) {
                bool c = j % 2 ? true : false;
                user_rotate(i, c);
                track[2 * cnt] = i + '0';
                track[2 * cnt + 1] = j + '0';
                
                if (i == 0 && j == 0) {
                    register int face, row, col;
                    register int ts = 0;

                    for (face = 0; face < 6; ++face)
                        for (row = 0; row < CUBE_SIZE; ++row)
                            for (col = 0; col < CUBE_SIZE; ++col)
                                tmp[ts++] = Cube[face][row][col] + '0';
                    track[2 * cnt + 2] = '\0';
                    add(tmp, track);
                }

                go(cnt + 1, track);
                user_rotate(i, !c);
            }
        }
    }
}

void go2(int cnt, char track[2 * MAX_DATA + 1]) {
    if (cnt == 5) {
        register int face, row, col;
        register int ts = 0;

        for (face = 0; face < 6; ++face)
            for (row = 0; row < CUBE_SIZE; ++row)
                for (col = 0; col < CUBE_SIZE; ++col)
                    tmp[ts++] = Cube[face][row][col] + '0';

        track[2 * MAX_DATA] = '\0';

        char track2[MAX_DATA * 2 + 1];
        if (find(tmp, track2)) {
            for (int i = 0; i < MAX_DATA; i++) {
                bool c = (track[2 * i + 1] - '0') % 2 ? true : false;
                rotate(track[2 * i] - '0', c);
            }

            for (int i = MAX_DATA - 1; i >= 0; i--) {
                bool c = (track2[2 * i + 1] - '0') % 2 ? false : true;
                rotate(track2[2 * i] - '0', c);

                // rotate(track2[2 * i] - '0', track2[2 * i + 1] - '0'); // 이건 안되고 위에껀 됨 왜지? 이거 때문에 오래걸림
            }

            finish = true;
        }
    }
    else {
        for (register int i = 0; i < 6; i++) {
            for (register int j = 0; j < 2; j++) {
                bool c = j % 2 ? true : false;
                user_rotate(i, c);
                track[2 * cnt] = i + '0';
                track[2 * cnt + 1] = j + '0';

                register int face, row, col;
                register int ts = 0;

                for (face = 0; face < 6; ++face)
                    for (row = 0; row < CUBE_SIZE; ++row)
                        for (col = 0; col < CUBE_SIZE; ++col)
                            tmp[ts++] = Cube[face][row][col] + '0';

                char track2[MAX_DATA * 2 + 1];

                if (find(tmp, track2)) {
                    for (int i = 0; i < cnt + 1; i++) {
                        bool c = (track[2 * i + 1] - '0') % 2 ? true : false;
                        rotate(track[2 * i] - '0', c);
                    }

                    int size = strlen(track2)/2;
                    for (int i = size - 1; i >= 0; i--) {
                        bool c = (track2[2 * i + 1] - '0') % 2 ? false : true;
                        rotate(track2[2 * i] - '0', c);

                        // rotate(track2[2 * i] - '0', track2[2 * i + 1] - '0'); // 이건 안되고 위에껀 됨 왜지? 이거 때문에 오래걸림
                    }

                    finish = true;
                }
                if (finish) return;

                go2(cnt + 1, track);
                if (finish) return;
                c = j % 2 ? false : true;
                user_rotate(i, c);
            }
        }
    }
}

void init() {
    register int face, row, col;

    for (face = 0; face < 6; ++face)
        for (row = 0; row < CUBE_SIZE; ++row)
            for (col = 0; col < CUBE_SIZE; ++col)
                Cube[face][row][col] = face;

    char track[2 * MAX_DATA + 1];
    go(0, track);
}

void user_rotate(int face, bool clockwise) {
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

void runtest(int cube[6][CUBE_SIZE][CUBE_SIZE])
{
    if (flag) {
        init();
        flag = false;
    }
    finish = false;

    register int face, row, col;

    for (face = 0; face < 6; ++face)
        for (row = 0; row < CUBE_SIZE; ++row)
            for (col = 0; col < CUBE_SIZE; ++col)
                Cube[face][row][col] = cube[face][row][col];

    char track[2 * MAX_DATA + 1];
    go2(0, track);
}