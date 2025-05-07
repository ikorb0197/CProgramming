#include <stdio.h>
#include <string.h>

#define NAME_SIZE 30
#define STREET_SIZE 30
#define CITY_SIZE 30

typedef struct {
    char street[STREET_SIZE];
    char city[CITY_SIZE];
    int zip_code;
} Address;

// Create a new data type (Create a structure)
struct Student {
    // The members (variables) of a structure
    char first_name[NAME_SIZE];
    int age;
    Address home_address;
};

void printStudentInfo(const struct Student *st);

int main(int argc, char *argv[]) {
    // Create a variable (object) of type int and name it a
    int a;
    
    // Create a variable (object) of another type
    // Create an object of type struct Student and name it stud1
    struct Student stud1;
    
    // Initialize the members of the structure
    strcpy(stud1.first_name, "Nick");
    stud1.age = 19;
    strcpy(stud1.home_address.street, "500 Main Street");
    strcpy(stud1.home_address.city, "Metropolis City");
    stud1.home_address.zip_code = 54321;

    // Create a pointer to int
    int b;
    int *b_ptr = &b;
    *b_ptr; // access to b through b_ptr

    // Create a pointer to the struct Student
    struct Student *stud_ptr = &stud1;

    // Access the members of the structure through the pointer
    (*stud_ptr).first_name; // access with dereferencing
    stud_ptr->first_name; // access with the arrow operator

    // Access the members of the structure through the function
    printStudentInfo(&stud1);

    // Create and initialize the student object (variable)
    struct Student stud2 = { .first_name = "Jack", .age = 20, .home_address.street = "123 Fake Street", .home_address.city = "Place City", .home_address.zip_code = 12345};

    printStudentInfo(&stud2);
    
    return 0;
}

void printStudentInfo(const struct Student *st) {
    printf("First name:\t\t%s\n", st->first_name);
    printf("Age:\t\t\t%d\n", st->age);
    printf("Home Address:\t\t%s, %s, %d\n", st->home_address.street, st->home_address.city, st->home_address.zip_code);
}