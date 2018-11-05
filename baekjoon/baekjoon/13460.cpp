//#include <iostream>
//using namespace std;
//#define UP 0
//#define DOWN 1
//#define LEFT 2
//#define RIGHT 3
//#define MAX 2000000000
//char map[12][12];
//int Min = MAX;
//int min(int a, int b) { return a > b ? b : a; }
//int g;
//
//struct Point {
//    int x, y;
//
//    Point(int x2, int y2) {
//        x = x2;
//        y = y2;
//    }
//
//    Point() {
//        x = y = 0;
//    }
//};
//
//bool equal(Point nextColor[], Point color[]) {
//    if (nextColor[0].x == color[0].x && nextColor[1].x == color[1].x && nextColor[0].y == color[0].y && nextColor[1].y == color[1].y) 
//        return true;
//    else return false;
//}
//
//int N, M;
//
//void swap(Point &color, Point &nextColor) {
//    Point tmp;
//    char tmp2;
//
//    tmp.x = color.x;
//    tmp.y = color.y;
//    tmp2 = map[color.y][color.x];
//
//    map[color.y][color.x] = map[nextColor.y][nextColor.x];
//    color.x = nextColor.x;
//    color.y = nextColor.y;
//    
//    map[nextColor.y][nextColor.x] = tmp2;
//    nextColor.x = tmp.x;
//    nextColor.y = tmp.y;
//}
//
//void swap2(Point &color, int bead) {
//    
//    if (map[color.y][color.x] == '.') {
//        if (bead == 0) {
//            map[color.y][color.x] = 'R';
//        }
//        else if (bead == 1) {
//            map[color.y][color.x] = 'B';
//        }
//    }
//    else {
//        map[color.y][color.x] = '.';
//    }
//}
//
//void go(int cnt, int dir, Point color[]) {
//    char tt[12][12];
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < M; j++) {
//            tt[i][j] = map[i][j];
//        }
//    }
//
//    if (cnt == 11) {
//
//        return;
//    }
//
//    if (dir == UP || dir == DOWN) {
//        Point nextColor[2];
//        nextColor[0].y = color[0].y;
//        nextColor[1].y = color[1].y;
//        nextColor[0].x = color[0].x;
//        nextColor[1].x = color[1].x;
//
//        bool flag[2] = { false,false };
//        // LEFT
//        if (color[0].y == color[1].y && color[0].x < color[1].x) { // y값 같고 x 값만 다를 경우 중 빨강의 x값이 파랑의 x값보다 왼쪽에 있을 경우
//            for (int bead = 0; bead <= 1; bead++) {
//                for (int i = color[bead].x - 1; i >= 0; i--) {
//                    if (map[color[bead].y][i] == '.') nextColor[bead].x = i;
//                    else if (map[color[bead].y][i] == 'O') {
//                        flag[bead] = true;
//                        swap2(color[bead], bead);
//                         
//                        break;
//                    }
//                    else if (map[color[bead].y][i] == '#') {
//                        swap(color[bead], nextColor[bead]);
//                        break;
//                    }
//                }
//            }
//        }
//        else {
//            for (int bead = 1; bead >= 0; bead--) {
//                for (int i = color[bead].x - 1; i >= 0; i--) {
//                    if (map[color[bead].y][i] == '.') nextColor[bead].x = i;
//                    else if (map[color[bead].y][i] == 'O') {
//                        flag[bead] = true;
//                        swap2(color[bead], bead);
//
//                        break;
//                    }
//                    else if (map[color[bead].y][i] == '#') {
//                        swap(color[bead], nextColor[bead]);
//                        break;
//                    }
//                }
//            }
//        }
//
//        if (flag[0] == true && flag[1] == false) {
//            Min = min(Min, cnt);
//
//            for (int bead = 0; bead < 2; bead++) {
//                if (flag[bead]) {
//                    swap2(color[bead], bead);
//                }
//                else {
//                    swap(color[bead], nextColor[bead]);
//                }
//            }
//            return;
//        }
//        else{
//            if (!equal(nextColor, color) || (!flag[0] && flag[1])) {
//                if (flag[0] && flag[1]) {
//                    for (int bead = 0; bead < 2; bead++) {
//                        if (flag[bead]) {
//                            swap2(color[bead], bead);
//                        }
//                        else {
//                            swap(color[bead], nextColor[bead]);
//                        }
//                    }
//                    
//                }
//                else if (!flag[0] && flag[1]) {
//                    for (int bead = 0; bead < 2; bead++) {
//                        if (flag[bead]) {
//                            swap2(color[bead], bead);
//                        }
//                        else {
//                            swap(color[bead], nextColor[bead]);
//                        }
//                    }
//                }
//                else {
//                    go(cnt + 1, LEFT, color);
//
//                    for (int bead = 0; bead < 2; bead++) {
//                        if (flag[bead]) {
//                            swap2(color[bead], bead);
//                        }
//                        else {
//                            swap(color[bead], nextColor[bead]);
//                        }
//                    }
//
//                    for (int i = 0; i < N; i++) {
//                        for (int j = 0; j < M; j++) {
//                            if (tt[i][j] != map[i][j]) {
//                                printf("!!!!!!!!!!!11111 %d\n", cnt);
//
//                                scanf("%d", &g);
//                                exit(1);
//                            }
//                        }
//                    }
//                }
//            }
//        }
//
//        nextColor[0].y = color[0].y;
//        nextColor[1].y = color[1].y;
//        nextColor[0].x = color[0].x;
//        nextColor[1].x = color[1].x;
//
//        flag[0] = flag[1] = false;
//        
//        if (color[0].y == color[1].y && color[0].x > color[1].x) { // y값 같고 x 값만 다를 경우 중 빨강의 x값이 파랑의 x값보다 오른쪽에 있을 경우
//            for (int bead = 0; bead <= 1; bead++) {
//                for (int i = color[bead].x + 1; i < M; i++) {
//                    if (map[color[bead].y][i] == '.') nextColor[bead].x = i;
//                    else if (map[color[bead].y][i] == 'O') {
//                        flag[bead] = true;
//                        swap2(color[bead], bead);
//                        break;
//                    }
//                    else if (map[color[bead].y][i] == '#') {
//                        swap(color[bead], nextColor[bead]);
//                        break;
//                    }
//                }
//            }
//        }
//        else {
//            for (int bead = 1; bead >= 0; bead--) {
//                for (int i = color[bead].x + 1; i < M; i++) {
//                    if (map[color[bead].y][i] == '.') {
//                        char x = map[color[bead].y][i];
//                        nextColor[bead].x = i;
//                    }
//                    else if (map[color[bead].y][i] == 'O') {
//                        flag[bead] = true;
//                        swap2(color[bead], bead);
//                        break;
//                    }
//                    else if (map[color[bead].y][i] == '#') {
//                        swap(color[bead], nextColor[bead]);
//                        break;
//                    }
//                }
//            }
//        }
//
//        if (flag[0] == true && flag[1] == false) {
//            Min = min(Min, cnt);
//
//            for (int bead = 0; bead < 2; bead++) {
//                if (flag[bead]) {
//                    flag[bead] = true;
//                    swap2(color[bead], bead);
//                }
//                else {
//                    swap(color[bead], nextColor[bead]);
//                }
//            }
//            return;
//        }
//        else {
//            if (!equal(nextColor, color) || (!flag[0] && flag[1])) {
//                if (flag[0] && flag[1]) {
//                    for (int bead = 0; bead < 2; bead++) {
//                        if (flag[bead]) {
//                            swap2(color[bead], bead);
//                        }
//                        else {
//                            swap(color[bead], nextColor[bead]);
//                        }
//                    }
//                }
//                else if (!flag[0] && flag[1]) {
//                    for (int bead = 0; bead < 2; bead++) {
//                        if (flag[bead]) {
//                            swap2(color[bead], bead);
//                        }
//                        else {
//                            swap(color[bead], nextColor[bead]);
//                        }
//                    }
//                }
//                else {
//                    go(cnt + 1, RIGHT, color);
//
//                    for (int bead = 0; bead < 2; bead++) {
//                        if (flag[bead]) {
//                            swap2(color[bead], bead);
//                        }
//                        else {
//                            swap(color[bead], nextColor[bead]);
//                        }
//                    }
//                    for (int i = 0; i < N; i++) {
//                        for (int j = 0; j < M; j++) {
//                            if (tt[i][j] != map[i][j]) {
//                                printf("!!!!!!!!!!!@222222%d\n", cnt);
//                                scanf("%d", &g);
//                                exit(1);
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
//    else if (dir == LEFT || dir == RIGHT) {
//        Point nextColor[2];
//        nextColor[0].y = color[0].y;
//        nextColor[1].y = color[1].y;
//        nextColor[0].x = color[0].x;
//        nextColor[1].x = color[1].x;
//
//        bool flag[2] = { false, false };
//        // UP
//        if (color[0].x == color[1].x && color[0].y < color[1].y) {
//            for (int bead = 0; bead <= 1; bead++) {
//                for (int i = color[bead].y - 1; i >= 0; i--) {
//                    if (map[i][color[bead].x] == '.') nextColor[bead].y = i;
//                    else if (map[i][color[bead].x] == 'O') {
//                        flag[bead] = true;
//                        swap2(color[bead], bead);
//                        break;
//                    }
//                    else if (map[i][color[bead].x] == '#') {
//                        swap(color[bead], nextColor[bead]);
//                        break;
//                    }
//                }
//            }
//
//        }
//        else {
//            for (int bead = 1; bead >= 0; bead--) {
//                for (int i = color[bead].y - 1; i >= 0; i--) {
//                    if (map[i][color[bead].x] == '.') nextColor[bead].y = i;
//                    else if (map[i][color[bead].x] == 'O') {
//                        flag[bead] = true;
//                        swap2(color[bead], bead);
//                        break;
//                        }
//                    else if (map[i][color[bead].x] == '#') {
//                        swap(color[bead], nextColor[bead]);
//                        break;
//                    }
//                }
//            }
//        }
//
//        if (flag[0] == true && flag[1] == false) {
//            Min = min(Min, cnt);
//
//            for (int bead = 0; bead < 2; bead++) {
//                if (flag[bead]) {
//                    swap2(color[bead], bead);
//                }
//                else {
//                    swap(color[bead], nextColor[bead]);
//                }
//            }
//            return;
//        }
//        else {
//            if (!equal(nextColor, color) || (!flag[0] && flag[1])) {
//                if (flag[0] && flag[1]) {
//                    for (int bead = 0; bead < 2; bead++) {
//                        if (flag[bead]) {
//                            swap2(color[bead], bead);
//                        }
//                        else {
//                            swap(color[bead], nextColor[bead]);
//                        }
//                    }
//                }
//                else if (!flag[0] && flag[1]) {
//                    for (int bead = 0; bead < 2; bead++) {
//                        if (flag[bead]) {
//                            swap2(color[bead], bead);
//                        }
//                        else {
//                            swap(color[bead], nextColor[bead]);
//                        }
//                    }
//                }
//                else {
//                    go(cnt + 1, UP, color);
//
//                    for (int bead = 0; bead < 2; bead++) {
//                        if (flag[bead]) {
//                            swap2(color[bead], bead);
//                        }
//                        else {
//                            swap(color[bead], nextColor[bead]);
//                        }
//                    }
//                    for (int i = 0; i < N; i++) {
//                        for (int j = 0; j < M; j++) {
//                            if (tt[i][j] != map[i][j]) {
//                                printf("!!!!!!!!!!!!33333%d\n", cnt);
//                                scanf("%d", &g);
//                                exit(1);
//                            }
//                        }
//                    }
//                }
//            }
//        }
//
//        // DOWN
//        nextColor[0].y = color[0].y;
//        nextColor[1].y = color[1].y;
//        nextColor[0].x = color[0].x;
//        nextColor[1].x = color[1].x;
//
//        flag[0] = flag[1] = false;
//
//        if (color[0].x == color[1].x && color[0].y > color[1].y) {
//            for (int bead = 0; bead <= 1; bead++) {
//                for (int i = color[bead].y + 1; i < N; i++) {
//                    if (map[i][color[bead].x] == '.') nextColor[bead].y = i;
//                    else if (map[i][color[bead].x] == 'O') {
//                        flag[bead] = true;
//                        swap2(color[bead], bead);
//                        break;
//                    }
//                    else if (map[i][color[bead].x] == '#') {
//                        swap(color[bead], nextColor[bead]);
//                        break;
//                    }
//                }
//            }
//        }
//        else {
//            for (int bead = 1; bead >= 0; bead--) {
//                for (int i = color[bead].y + 1; i < N; i++) {
//                    if (map[i][color[bead].x] == '.') nextColor[bead].y = i;
//                    else if (map[i][color[bead].x] == 'O') {
//                        flag[bead] = true;
//                        swap2(color[bead], bead);
//                        break;
//                    }
//                    else if (map[i][color[bead].x] == '#') {
//                        swap(color[bead], nextColor[bead]);
//                        break;
//                    }
//                }
//            }
//        }
//
//        if (flag[0] == true && flag[1] == false) {
//            Min = min(Min, cnt);
//
//            for (int bead = 0; bead < 2; bead++) {
//                if (flag[bead]) {
//                    swap2(color[bead], bead);
//                }
//                else {
//                    swap(color[bead], nextColor[bead]);
//                }
//            }
//            return;
//        }
//        else {
//            if (!equal(nextColor, color) || (!flag[0] && flag[1])) {
//                if (flag[0] && flag[1]) {
//                    for (int bead = 0; bead < 2; bead++) {
//                        if (flag[bead]) {
//                            swap2(color[bead], bead);
//                        }
//                        else {
//                            swap(color[bead], nextColor[bead]);
//                        }
//                    }
//                }
//                else if (!flag[0] && flag[1]) {
//                    for (int bead = 0; bead < 2; bead++) {
//                        if (flag[bead]) {
//                            swap2(color[bead], bead);
//                        }
//                        else {
//                            swap(color[bead], nextColor[bead]);
//                        }
//                    }
//                }
//                else {
//                    go(cnt + 1, DOWN, color);
//
//                    for (int bead = 0; bead < 2; bead++) {
//                        if (flag[bead]) {
//                            swap2(color[bead], bead);
//                        }
//                        else {
//                            swap(color[bead], nextColor[bead]);
//                        }
//                    }
//                    for (int i = 0; i < N; i++) {
//                        for (int j = 0; j < M; j++) {
//                            if (tt[i][j] != map[i][j]) {
//                                printf("!!!!!!!!!44444%d\n", cnt);
//                                scanf("%d", &g);
//                                exit(1);
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
//}
//
//int main(void) {
//    scanf("%d %d", &N, &M);
//    Point color[2];
//
//    for (int i = 0; i < N; i++) {
//        scanf("%s", &map[i]);
//    }
//
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < M; j++) {
//            if (map[i][j] == 'R') {
//                color[0].y = i;
//                color[0].x = j;
//            }
//            else if (map[i][j] == 'B') {
//                color[1].y = i;
//                color[1].x = j;
//            }
//        }
//    }
//
//    go(1, LEFT, color);
//
//    go(1, UP, color);
//
//
//    printf("%d\n", Min == MAX ? -1 : Min);
//
//    return 0;
//}