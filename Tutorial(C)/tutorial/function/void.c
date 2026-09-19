#include <stdio.h>
#include <string.h>

void happybirthday(char name[],int age)
{
    printf("\nHappy Birthday to You!");
    printf("\nHappy Birthday to You!");
    printf("\nHappy Birthday Dear %s!", name);
    printf("\nHappy Birthday to You!");
    printf("\nYou are %d years old!\n", age);
}

int main()
{
    char name[50] = "";
    int age = 0;

    printf("Enter Name :");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter Age :");
    scanf("%d", &age);

    happybirthday(name, age);
}