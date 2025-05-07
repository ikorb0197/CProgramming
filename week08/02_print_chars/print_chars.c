#include <stdio.h>

void printChars(void);

// TODO
// consider AB and BA to be the same, do not print the latter, no duplicates

int main(void) {
    printChars();
    return 0;
}

void printChars(void) {
    char outer = 'A';
    while (outer <= 'Z') {
        char inner = 'A';
        while (inner <= 'Z') {
            if (outer != inner) {
                printf("%c%c\n", outer, inner);
            }
            inner++;
        }
        outer++;
    }
}