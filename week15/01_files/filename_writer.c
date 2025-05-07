#include <stdio.h> // FILE data structure
#include <string.h>

int main(int argc, char *argv[]) {
    // Create a pointer to a FILE structure
    FILE *file = NULL;

    // Open the file
    // fopen - creates the file and returns the pointer to FILE
    char file_name[30];
    strcpy(file_name, argv[1]);
    file = fopen(file_name, "w");

    // Check whether the file was successfully opened
    if (file == NULL) {
        puts("File could not be opened");
        return 1;
    }

    for (int i = 1; i < *argv[2]; i++) {
        fprintf(file, "%s ", file_name);
    }

    // Close the file
    fclose(file);

    return 0;
}