#include <stdio.h> // FILE data structure

int main(int argc, char *argv[]) {
    // Create a pointer to a FILE structure
    FILE *file = NULL;

    // Open the file
    // fopen - creates the file and returns the pointer to FILE
    file = fopen("out.txt", "r");

    // Check whether the file was successfully opened
    if (file == NULL) {
        puts("File could not be opened");
        return 1;
    }

    // Write into a file
    int i = 1;
    // feof - end of file
    while (!feof(file)) {
        // fscanf - read from a file
        fscanf(file, "%d", &i);
        printf("%d\n", i);
    }

    // Close the file
    fclose(file);

    return 0;
}