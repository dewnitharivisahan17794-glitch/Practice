# include <stdio.h>
# include <stdbool.h>

int main(){

    //variables

    /*
    int = %d(decimal)
    float = %f(only 6 decimal degits)
    double = %lf(more than 6 decimal degits)
    characters(char) = %c(need to be enter in '')
    string (char NAME[]) = %s(NAME = name of the variable),(nee to be enter in "")
    boolen(bool) = %d(display as a true=1 and false=0),(need to be include <stdbool.h>) 
    */
   int age = 20;
   float GPA = 2.345;
   double pi = 2.3145675422356;
   char Grade = 'A';
   char name[]="Dewnitha Rivisahan";
   bool IsOnline = true;
   bool IsStudent = 0;

   printf("I am %s.\n",name);
   printf("I am %d years old.\n",age);
   printf("My GPA is %f.\n",GPA);
   printf("I have %c for Science.\n",Grade);

   if(IsStudent){
    printf("You are student.\n");
   }
   else{
    printf("You aren't stdent.\n");
   }

   if(IsOnline){
    printf("You are ONLINE.\n");
   }
   else{
    printf("You are OFFLINE.\n");
   }

   printf("Pi = %lf\n",pi);

   return 0;

}