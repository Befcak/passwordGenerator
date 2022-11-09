#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "passCheck.h"
#include "passGen.h"

void printMenu()
{
    //system("clear");
    printf("--Password Generator and Checker--\n");
    printf("1) Generate Password\n");
    printf("2) Check Password\n");
    printf("3) Exit\n");
}

int main()
{
    int choice = 0;
    while(choice != 3)
    {
        printMenu();
        scanf("%d", &choice);
        if(choice == 1)
        {
            genPassword();
        }
        if(choice == 2)
        {
            char *pass = (char*) malloc(sizeof(char)*50), ch;
            printf("\nEnter Password:");
            scanf("%s", pass);
            checkPassword(pass);
            scanf("Press enter to continue..%c", &ch);
        }
        printf("\n");
    }

    return 0;
}