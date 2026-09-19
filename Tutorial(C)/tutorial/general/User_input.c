#include <stdio.h>

#include <string.h>  //*

int main(){

    int age = 0;
    float GPA = 0.0f; //(f means float, double doesnt need f)
    char Grade = '\0';
    char Name[30] = "";

    // get input from user

    printf("Enter Your age: ");
    scanf("%d", &age); //(address to age)

    printf("Enter Your GPA: ");
    scanf("%f", &GPA);

    printf("Enter Your Grade: ");
    scanf(" %c", &Grade); //(add space beside of '%' means remove \n charactor.)

   /* printf("Enter Your First Name:");
    scanf("%s",Name);
    
    By useing this type we can't add full name with space
    
    */
   getchar(); // for remove \n charactor
   printf("Enter your Full Name: ");
   fgets(Name,sizeof(Name),stdin);

   Name[strlen(Name)-1] = '\0';     //*

   // remove \n beneth the Name , we have to do few more steps they mark as (//*)

    printf("%d\n",age);
    printf("%f\n",GPA);
    printf("%c\n",Grade);
    printf("%s\n",Name);
    

}