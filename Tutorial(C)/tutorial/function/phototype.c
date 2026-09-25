#include <stdio.h>
#include <stdbool.h>

void func1(int age, char name[])
{
    printf("My name is %s\n", name);
    printf("I am %d\n", age);
}
bool func2(int age); //phototype of a function.

int main()
{
    func1(25, "Dewnitha");
    if(func2)
    {
        printf("You can work at here\n");
    }
    else
    {
        printf("You can't work at here\n");
    }
}

bool func2(int age)
{
   return age >=16; 
}