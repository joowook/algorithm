//#include <iostream>
//using namespace std;
//
//
//struct Tree{
//	Tree *right, *left;
//	int value;
//
//	Tree() {
//		right = left = NULL;
//		value = 0;
//	}
//};
//int main(void) {
//	int n, m;
//
//	scanf("%d %d", &n, &m);
//
//	while (n--) {
//		Tree *root = new Tree;
//		int x;
//		scanf("%d", &x);
//		
//		root->value = x;
//
//		for (int i = 1; i < m; i++) {
//			Tree *tmp = root;
//			cin >> x;
//			while (true) {
//				if (tmp->value < x) {
//					if (tmp->right == NULL) {
//						tmp->right = new Tree;
//						tmp->right->value = x;
//						break;
//					}
//					else {
//						tmp = tmp->right;
//					}
//				}
//				else if(tmp->value > x) {
//					if (tmp->left == NULL) {
//						tmp->left = new Tree;
//						tmp->left->value = x;
//						break;
//					}
//					else {
//						tmp = tmp->left;
//					}
//				}
//				else {
//					break;
//				}
//			}
//		}
//
//
//
//	}
//
//
//
//}