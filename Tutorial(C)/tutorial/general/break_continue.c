#include <stdio.h>

int main()
{
    for (int i=0; i<=10; i++)
    {
        if(i==4)
        {
            continue;//(skip the number 4)
        }

        if(i==7)
        {
            break;//(stop when i==7)
        }

        printf("%d\n", i);
    }
}