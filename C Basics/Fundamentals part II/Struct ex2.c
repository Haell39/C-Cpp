#include <stdio.h>
#include <string.h>

// Define a struct called Person to represent a person
struct Person
{
    char name[50];
    int age;
    float height;
};

int main()
{
    // Declare variables of type Person
    struct Person person1, person2;

    // Initialize the values for person1
    strcpy(person1.name, "John");
    person1.age = 25;
    person1.height = 6.0;

    // Input values for person2
    printf("Enter name for person2: ");
    scanf("%s", person2.name);
    printf("Enter age for person2: ");
    scanf("%d", &person2.age);
    printf("Enter height for person2: ");
    scanf("%f", &person2.height);

    // Print out the details of person1
    printf("Details of person1:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);

    // Print out the details of person2
    printf("\nDetails of person2:\n");
    printf("Name: %s\n", person2.name);
    printf("Age: %d\n", person2.age);
    printf("Height: %.2f\n", person2.height);

    return 0;
}
