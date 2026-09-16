#include <stdbool.h>
#include <stdio.h>

int main()
{
    /*
        && = And (both statetments must be true to be true)
        || = Or  (One statement must be true to be true)
        ! = Not  (Oppersite)
    */

    int temp = 0 ;
    bool DoorOpen = true;
    bool SeatBelt = false;
    bool senior = false;

    if(temp > 0 && temp < 30)
    {
        printf("Temperatuer is GOOD\n");
    }

    else
    {
        printf("Temperatuer is BAD\n");
    }

    if( DoorOpen || SeatBelt)
    {
        printf("Alarm on!\n");
    }

    else
    {
        printf("Alarm off!\n");
    }

    if(!senior)
    {
        printf("You are Student\n");
    }
    else
    {
        printf("You Are senior\n");
    }


}   
