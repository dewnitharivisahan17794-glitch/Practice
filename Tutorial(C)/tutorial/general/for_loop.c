#include <stdio.h>
#include <windows.h>

int main()
{
    //in for loop we have to use(variable; condition; counter)
    for(int i=10; i>0; i--)
    {
        Sleep(1000); //sleep for 1second or 1000miliseconds
        printf("%d\n", i);

    }

    printf("HAPPY NEW YEAR!\n");

}