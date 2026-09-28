#include <stdio.h>

int main()
{
    /*
    for (int i=1; i<=10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    for (int i=1; i<=10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    for (int i=1; i<=10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

            OR
    */
    
    for(int j=0; j<3; j++ )
    {
        for (int i=1; i<=10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    }

    // this method can run inner loop three times.

}