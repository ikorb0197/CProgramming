// Include
#include <stdio.h>

// Function prototypes
void two(void);
void one_three(void);

// Main
int main() {
    printf("starting now:\n");
    one_three();
    printf("done!\n");

    return 0;
}

// Function definitions
void two(void) {
    printf("two\n");
}

void one_three(void) {
    printf("one\n");
    two();
    printf("three\n");
}