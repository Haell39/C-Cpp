#include <stdio.h>

int main() {
    int menuOption;
    char name[20];

    printf("Welcome to our menu!\n");
    printf("1. New customer\n");
    printf("2. Existing customer\n");
    printf("3. Exit\n");
    scanf("%d", &menuOption);

    if (menuOption == 1) {
        printf("Enter your name: ");
        scanf("%s", name);
        printf("Hello %s, nice to meet you!\n", name);
    } else if (menuOption == 2) {
        printf("Enter your name: ");
        scanf("%s", name);
        printf("Welcome back %s!\n", name);
    } else if (menuOption == 3) {
        printf("Goodbye!\n");
    } else {
        printf("Invalid option!\n");
    }

    return 0;
}
