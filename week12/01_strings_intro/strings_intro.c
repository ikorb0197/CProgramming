#include <stdio.h>
#include <stdbool.h>

/*
    Checks is the given character an uppercase.
*/
bool isUpper(char c);
/*
    Checks is the given character a lowercase.
*/
bool isLower(char c);
/*
    Checks is the given character a letter.
*/
bool isAlpha(char c);
/*
Checks is the given character a letter or a digit.
*/
bool isAlnum(char c);

char toLower(char c);
char toUpper(char c);

/*
hELlo => HelLO
*/
void printReversedCase(const char *str);

int main(void) {
    // Create a character
    char ch = 'B';
    
    // Create a boolean variable
    const bool isHappyAfterSecondExamInIntroClass = true; // false
    
    // Test isUpper
    printf("isUpper(%c) = %d\n", ch, isUpper(ch));
    // Test isLower
    printf("isLower(%c) = %d\n", ch, isLower(ch));
    // Test isAlpha
    printf("isAlpha(%c) = %d\n", ch, isAlpha(ch));
    // Test isAlum
    printf("isAlnum(%c) = %d\n", ch, isAlnum(ch));
    
    ////////////////////////////////////////////////////////////////////////
    // Create a string
    char str[] = "HeLl0 ThErE!";
    
    // Printing the string
    puts("Printing with printf");
    printf("%s\n\n", str);
    
    puts("Printing with a loop");
    for (int i = 0; str[i] != '\0'; i++) { // str[i] != '\0' - continue till the end of the string
        printf("%c", str[i]);
    }
    puts("\n");
    
    puts("Printing with puts");
    puts(str);
    puts("\n");
    
    puts("Print the string in lowercase");
    for (int i = 0; str[i] != '\0'; i++) {
        putchar(toLower(str[i]));
    }
    puts("");

    puts("printReversedCase function");
    printReversedCase(str);
    puts("");
    
    return 0;
}

bool isUpper(char c) {
    if (c >= 'A' && c <= 'Z') {
        return true;
    }
    else {
        return false;
    }
}

bool isLower(char c) {
    if (c >= 'a' && c <= 'z') {
        return true;
    }
    else {
        return false;
    }
}

bool isAlpha(char c) {
    if (isUpper(c) == true || isLower(c) == true) {
        return true;
    }
    else {
        return false;
    }
}

bool isAlnum(char c) {
    if (isAlpha(c) == true || (c >= '0' && c <= '9')) {
        return true;
    }
    else {
        return false;
    }
}

char toLower(char c) {
    if (isUpper(c) == true) {
        return c + 32;
    }
    else {
        return c;
    }
}

char toUpper(char c) {
    if (isLower(c) == true) {
        return c - 32;
    }
    else {
        return c;
    }
}

// TO DO
void printReversedCase(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isUpper(str[i]) == true) {
            putchar(toLower(str[i]));
        }
        if (isLower(str[i]) == true) {
            putchar(toUpper(str[i]));
        }
        if (isAlpha == false) {
            putchar(str[i]);
        }
    }
}