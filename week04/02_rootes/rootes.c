/*
    The program calculates the rootes of quadratic equation.

    ax^2 + bx + c = 0

*/

#include <stdio.h>
#include <math.h>

// Function prototypes
void printPrompt(char ch);
int getCoefficient(void);
int countDiscriminant(int a, int b, int c);
void printRootes(int a, int b, int c);

int main(void) {
    // Getting inputs
    printPrompt('a');
    int a = getCoefficient();
    printPrompt('b');
    int b = getCoefficient();
    printPrompt('c');
    int c = getCoefficient();

    // Calculate rootes
    printRootes(a, b, c);

    return 0;
}

/************************************/
void printPrompt(char ch) {
    printf("Enter the coefficient %c: ", ch);
}

/************************************/
int getCoefficient(void) {
    int coef = 0;
    scanf("%d", &coef);
    return coef;
}

/************************************/
int countDiscriminant(int a, int b, int c) {
    // b^2 - 4ac
    return (b * b) - (4 * a * c);
}

/************************************/
void printRootes(int a, int b, int c) {
    int discrim = countDiscriminant(a, b, c);
    if (discrim < 0) {
        puts("No real rootes");
    }
    if (discrim == 0) {
        // -b / 2a
        double x = (-b) / (2 * a);
        printf("x = %f\n", x);
    }
    if (discrim > 0) {
        // -b +- sqrt(discrim) / (2 * a)
        double x1 = (-b + sqrt(discrim)) / (2 * a);
        double x2 = (-b - sqrt(discrim)) / (2 * a);
        printf("x1 = %f, x2 = %f\n", x1, x2);
    }
}