//#include <iostream>
//#include <string>
//using namespace std;
//
//
//int main(void) { //�� �� ���� -��ȣ�� ������ �������� ��� ���ڸ� ����ȴ�.
//    string s;
//    string temp;
//    int count = 0;
//
//    cin >> s;
//
//
//    for (int i = 0; i < s.size(); i++) {
//        if (s[i] == '+') {
//            if (temp[0] == '-') {
//                count += stoi(temp);
//                temp = "";
//                temp += '-';
//           }
//            else {
//                count += stoi(temp);
//                temp = "";
//            }
//        }
//        else if (s[i] == '-') {
//            count += stoi(temp);
//            temp = "";
//            temp += s[i];
//        }
//        else {
//            temp += s[i];
//        }
//    }
//    count += stoi(temp);
//
//    cout << count << '\n';
//    
//    return 0;
//}