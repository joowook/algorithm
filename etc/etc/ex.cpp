#include <iostream>
using namespace std;

int main(void) {
    char map[500];
    char input = 0;

    FILE *fp, *fp2;

    fp = fopen("test.txt", "r"); //가중치읽기
    fp2 = fopen("result.txt", "w");

    while (input != EOF) {
        input = fgetc(stdin);
        if (input == '\n') continue;
        fputc(input, fp2);
    }
   
    fclose(fp);
    fclose(fp2);
}