//#include <iostream>
//using namespace std;
//
//int main(void) {
//    int full, start, target, up, down;
//    bool check = true;
//    cin >> full >> start >> target >> up >> down;
//
//    int count = 0;
//    while (start != target) {
//        if (start < target) {
//            start += up;
//        }
//        else {
//            start -= down;
//        }
//        count++;
//        if (count == 1000000) {
//            cout << "use the stairs";
//            check = false;
//            break;
//        }
//    }
//
//    if(check)
//        cout << count;
//
//    return 0;
//}