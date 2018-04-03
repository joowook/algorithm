#include <iostream>
using namespace std;

int N, M;

int a[51][51];
bool check[51][51];

int main(void) {
	scanf("%d %d", &N, &M);

	int r, c, d;

	scanf("%d %d %d", &r, &c, &d);
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &a[i][j]);

			if (a[i][j] == 1) {
				check[i][j] = true;
			}
		}
	}





}