#include <stdio.h>
#include <stdbool.h>

int main()
{
    // the while loop runs until false what with in ()

    // While (1=1){printf("I'M STUCK IN LOOP!");}

    int number = 0;

    while(number<=0)
    {
        printf("Enter a number grater than 0 : ");
        scanf("%d", &number);
    }

    //or(if number allrady >0 , try this)

    int level = 1;

    do //this code runs one time without consider value of level
    {
        printf("Enter a level grater than 0 : ");
        scanf("%d", &level);

    }while (level<=0);

    printf("You are in level %d", level);


   
}