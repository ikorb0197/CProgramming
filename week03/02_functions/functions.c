/*
    Introduction to functions in C

    You cannot create a function inside another function

*/

#include <stdio.h>

// Function format
// <return_type> <function_name> (<arguments (parameters, inputs)> or empty)
// {
// }
// The function doesn't take any arguments and doesn't return any value
void print_course(void) {
    printf("You are in COP%d\n", 2271);
}

void draw_circle(void) {
    printf("   *\n");
    printf(" *   *\n");
    printf("  * *\n");
}

// Create draw_caret function
void draw_caret(void) {
    printf("  / \\\n");
    printf(" /   \\\n");
    printf("/     \\\n");
}

// Create draw_line function
void draw_line(void) {
    printf("-------\n");
}

void draw_triangle(void) {
    draw_caret();
    draw_line();
}

void draw_stick_figure(void) {
    draw_circle();
    draw_triangle();
    draw_caret();
}

int main() {
    // Function call
    // print_course();

    // Call draw_circle function
    // draw_circle();

    // Call draw_caret function
    // draw_caret();

    // draw_triangle();

    // draw_caret();

    draw_stick_figure();

    return 0;
}