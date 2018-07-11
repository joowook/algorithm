//#include <iostream>
//#include <string>
//using namespace std;
//int index;
//
//string go(string &s) { // string s 로 하면 시간 더 오래걸림
//    if (s[index] != 'x') {
//        return string(1, s[index++]);
//        //return string()+s[index];
//    }
//    index++;
//    string s1 = go(s);
//    string s2 = go(s);
//    string s3 = go(s);
//    string s4 = go(s);
//
//    return "x" + s3 + s4 + s1 + s2;
//
//}
//
//
//int main(void) {
//    int tc;
//
//    cin >> tc;
//
//    while (tc--) {
//        string s;
//        index = 0;
//        cin >> s;
//
//        cout << go(s) << '\n';
//    }
//}
//
////#include <iostream>
////#include <string>
////using namespace std;
////
////struct Tree {
////    Tree *t[4];
////    char name;
////};
////
////int rot[4] = { 2,3,0,1 };
////
////int go(string &s, int index, Tree *tmp, int id) {
////    if (id == 4) {
////        return index;
////    }
////
////    if (index == s.size()) {
////        return index; //아무거나 상관없을듯
////    }
////
////    int cnt = 0;
////
////    if (s[index] == 'x') {
////        tmp->t[id] = new Tree;
////
////        tmp->t[id]->name = 'x';
////        cnt = go(s, index + 1, tmp->t[id], 0);
////        
////        if (id != 3) {
////            return go(s, cnt, tmp, id + 1);
////        }
////    }
////    else {
////        tmp->t[id] = new Tree;
////
////        tmp->t[id]->name = s[index];
////        return go(s, index + 1, tmp, id + 1);
////    }
////
////    return cnt;
////}
////
////void Answer(Tree *tmp) {
////    printf("%c", tmp->name);
////
////    for (int i = 0; i < 4; i++) {
////        if (tmp -> t[rot[i]]->name == 'x') {
////            Answer(tmp->t[rot[i]]);
////        }
////        else {
////            printf("%c", tmp->t[rot[i]]->name);
////        }
////    }
////}
////
////int main(void) {
////    int tc;
////
////    cin >> tc;
////
////    while (tc--) {
////        string s;
////
////        cin >> s;
////
////        int n = s.size();
////
////        if (s == "w") {
////            cout << "w\n";
////        }
////        else if (s == "b") {
////            cout << "b\n";
////        }
////        else {
////            Tree* root = new Tree;
////            root->name = 'x';
////
////            Tree * tmp = root;
////            go(s, 1, tmp, 0);
////            
////            Answer(root);
////            printf("\n");
////        } 
////    }
////
////    return 0;
////}