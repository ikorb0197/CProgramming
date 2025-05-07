#include <stdio.h>
#include <unistd.h>

void printTriangleTopLeftStars(int size);
void printTriangleBottomLeftStars(int size);
void printTriangleBottomLeftNumbers(int size);
void printTriangleTopLeftNumbers(int size);

// TODO
/*
void printTriangleTopRightStars(int size);
void printTriangleBottomRightStars(int size);
void printTriangleBottomRightNumbers(int size);
void printTriangleTopRightNumbers(int size);
*/

int main(void) {
    int n = 0;
    
    // Scan a positive integer
    do {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    } while (n <= 0);
    
    int i = 1;
    // while (i < 100) {
        // printTriangleTopLeftStars(n);
        // printTriangleBottomLeftStars(n);
        // i++;
    // }

    printTriangleBottomLeftNumbers(n);
    
    return 0;
}

/*
5
*****
****
***
**
*

*/

void printTriangleTopLeftStars(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i; j++) {
            printf("%c", '*');
            usleep(3000);
        }
        puts(""); // new line after we done printing a line of *
    }
}

/*
    5
    *
    **
    ***
    ****
    *****

*/

void printTriangleBottomLeftStars(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j <= i ; j++) {
            printf("%c", '*');
            usleep(3000);
        }
        puts("");
    }
}

/*
    5
5
54
543
5432
54321

*/

void printTriangleBottomLeftNumbers(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = size; j >= size - i ; j--) {
            printf("%d", j);
            usleep(3000);
        }
        puts("");
    }
}

// Finish printTriangleTopLeftNumbers

void printTriangleTopLeftNumbers(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = size; j <= size - i ; j++) {
            printf("%d", j);
            usleep(3000);
        }
        puts("");
    }
}