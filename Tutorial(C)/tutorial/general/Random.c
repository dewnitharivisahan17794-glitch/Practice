#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); //NULL = 0

    int MIN = 50;
    int MAX = 100;

    int IntRandNum = rand() % MAX + MIN; //(IntRandNum is grater than 50 but less than 100)
    printf("%d",IntRandNum);

}