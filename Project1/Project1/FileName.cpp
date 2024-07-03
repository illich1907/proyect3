#include <iostream>
void banana(char* str, const char* charsToRemove) {
    int a = 0;

    int b = 0;
    while (str[b] != '\0') {
        b++;
    }

    int c = 0;
    while (charsToRemove[c] != '\0') {
        c++;
    }

    for (int i = 0; i < b; ++i) {
        bool d = false;
        for (int j = 0; j < c; ++j) {
            if (str[i] == charsToRemove[j]) {
                d = true;
                break;
            }
        }
        if (!d) {
            str[a++] = str[i];
        }
    }
    str[a] = '\0';
}
int main() {

}