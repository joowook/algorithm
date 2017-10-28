//#include <iostream>
//using namespace std;
//int a[30][2];
//
//void preorder(char n) {
//        printf("%c", n + 'A');
//        
//        if (a[n][0] != -1) {
//            preorder(a[n][0]);
//        }
//        if (a[n][1] != -1) {
//            preorder(a[n][1]);
//        }
//}
//
//void inorder(char n) {
//    if (a[n][0] != -1) {
//        inorder(a[n][0]);
//    }
//
//    printf("%c", n + 'A');
//
//    if (a[n][1] != -1) {
//        inorder(a[n][1]);
//    }
//}
//
//void postorder(int n) {
//    if (a[n][0] != -1) {
//        postorder(a[n][0]);
//    }
//    if (a[n][1] != -1) {
//        postorder(a[n][1]);
//    }
//
//    printf("%c", n + 'A');
//}
//int main(void) {
//    int n;
//    cin >> n;
//
//    while (n--) {
//        char l, r, v;
//        cin >> v >> l >> r;
//        v = v - 'A';
//
//        if (l == '.') {
//            a[v][0] = -1;
//        }
//        else {
//            a[v][0] = l - 'A';
//        }
//        if (r == '.') {
//            a[v][1] = -1;
//        }
//        else {
//            a[v][1] = r - 'A';
//        }
//    }
//
//    preorder(0);
//    printf("\n");
//    inorder(0);
//    printf("\n");
//    postorder(0);
//
//    return 0;
//}