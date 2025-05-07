#include <stdio.h>

int main(void) {
    // Get the uppercase character
    char input;
    do {
        printf("Enter an uppercase character: ");
        scanf(" %c", &input);
    } while (input < 'A' || input > 'Z');
    
    // Get the positive integer
    int integer;
    do {
        printf("Enter a positive integer: ");
        scanf(" %d", &integer);
    } while (integer <= 0);

    // Print the scanned char the scanned integer number of times (for loop)
    // A
    // 5
    // AAAAA
    for (int i = 1; i <= integer; i++) {
        printf("%c", input);
    }

    printf("\n");

    // TODO
    // Scan a second character which should be either * or # and nothing else
    // Print the pattern
    // B 5 *
    // B*B*B*B*B*
    // Advanced pattern B**BB**BB*
    char input2 = 'A';
    do {
        printf("Enter a second character (either * or #): ");
        scanf(" %c", &input2);
    } while(input2 == '*' || input2 == '#');

    for (int c = 1; c <= integer; c++) {
        printf("%c%c", input, input2);
    }

    printf("\n");

    return 0;
}