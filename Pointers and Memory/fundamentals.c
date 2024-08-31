#include <stdio.h>
#include <stdlib.h> // For malloc and free functions

int main() {
    // Basic pointer declaration and initialization
    int a = 10;          // Declare an integer variable
    int *p = &a;         // Declare a pointer to an integer and initialize it with the address of 'a'

    // Printing the value of 'a' using the pointer
    printf("Value of a: %d\n", a);
    printf("Value of a using pointer p: %d\n", *p); // Dereferencing the pointer to get the value of 'a'

    // Printing the address
    printf("Address of a: %p\n", (void *)&a);
    printf("Address stored in pointer p: %p\n", (void *)p);

    // Pointer to pointer
    int **pp = &p;       // Pointer to pointer, storing the address of pointer 'p'
    printf("Value of a using pointer to pointer pp: %d\n", **pp); // Double dereference

    // Dynamic memory allocation
    int *dynamicArray = (int *)malloc(5 * sizeof(int)); // Allocating memory for an array of 5 integers

    if (dynamicArray == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit if memory allocation fails
    }

    // Initializing and accessing dynamically allocated memory
    for (int i = 0; i < 5; i++) {
        dynamicArray[i] = i * 2; // Assign values to the array
    }

    // Printing dynamically allocated array values
    printf("Dynamically allocated array values:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", dynamicArray[i]);
    }
    printf("\n");

    // Reallocating memory to expand the array
    dynamicArray = (int *)realloc(dynamicArray, 10 * sizeof(int)); // Expanding array to hold 10 integers

    if (dynamicArray == NULL) {
        printf("Memory reallocation failed!\n");
        return 1; // Exit if memory reallocation fails
    }

    // Initializing new elements of the reallocated array
    for (int i = 5; i < 10; i++) {
        dynamicArray[i] = i * 2; // Assign values to the new elements
    }

    // Printing reallocated array values
    printf("Reallocated array values:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", dynamicArray[i]);
    }
    printf("\n");

    // Freeing dynamically allocated memory
    free(dynamicArray); // Always free memory to avoid memory leaks

    // NULL pointer
    int *nullPtr = NULL; // Pointer that does not point to any memory address
    if (nullPtr == NULL) {
        printf("nullPtr is NULL and safe to use.\n");
    }

    // Pointer arithmetic
    int arr[] = {10, 20, 30, 40, 50};
    int *arrPtr = arr; // Pointer to the first element of the array

    printf("Pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("Value at arrPtr + %d: %d\n", i, *(arrPtr + i)); // Accessing array elements using pointer arithmetic
    }

    return 0;
}
