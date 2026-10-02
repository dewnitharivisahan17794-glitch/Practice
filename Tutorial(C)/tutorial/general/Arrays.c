#include <stdio.h>

int main()
{
    int Numbers[] = {10, 20, 30, 40, 56};
    char Grades[] = {'A', 'B', 'C', 'D', 'F'};
    char Names[] = "Dewnitha";
    int score[5] = {0};

    printf("%d ", Numbers[0]);
    printf("%d ", Numbers[1]);
    printf("%d ", Numbers[2]);
    printf("%d ", Numbers[3]);
    printf("%d ", Numbers[4]);
    printf("\n");
    printf(" %c ", Grades[0]);
    printf(" %c ", Grades[1]);
    printf(" %c ", Grades[2]);
    printf(" %c ", Grades[3]);
    printf(" %c ", Grades[4]);
    printf(" %c ", Grades[5]);

    for(int i = 0; i < 8; i++)
    {
        printf("%c", Names[i]);
    }

    printf("\n");

    int Size = (sizeof(Names)/sizeof(Names[0])); //Get amount of characters in Names array.

    for(int i = 0; i < Size; i++)
    {
        printf("%c", Names[i]);
    }

    printf("\n");

    //Get User Input

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Score: ");
        scanf("%d", &score[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d  ", score[i]);
    }



}