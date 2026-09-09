#include <stdio.h>
#include <stdbool.h>

int main(){
    bool Isstudent = true;
    int age = 0;

    if(Isstudent == true)
    {
        printf("You are a student!\n ");
    }
   else
   {
        printf("You are NOT student!\n");
   }

   printf("Enter your age: ");
   scanf("%d", &age);

   if(age > 18)
   {
    printf("You are an Adult\n");
   }
   else if(age < 0)
   {
    printf("You aren't born yet\n");
   }
   else if(age == 0)
   {
    printf("You are a newborn\n");
   }
   else if(age <= 12)
   {
    printf("You are a Children\n");
   }
   else if ( age <= 18)
   {
    printf("You are a teenager\n");
   }
}
