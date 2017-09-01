#include <iostream>
#include <cctype>
#include <cstdio>
using namespace std;

int main() {
    char ch;
    int a=0;

    while(1){
        scanf("%c", &ch);

        if (islower(ch) != 0) {
            ch=toupper(ch);
            printf("%c", ch);
        }
        else {
            ch=tolower(ch);
            printf("%c", ch);
        }

        if (ch == '\n') break;
    }
    return 0;
}
