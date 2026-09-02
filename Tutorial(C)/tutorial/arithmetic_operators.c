#include <stdio.h>

int main() {
    //arithmatic operators are +, -, *, /, %, ++, --
    float x = 2;// devition answer can be float , int/int can't use in this situation so y should be a float value.
    float y = 3;
    float z = 0;
    z = x + y; //(store to, <--- side, so x + y = z is include an error.)
    printf("%.2f\n", z);
    z = x - y;
    printf("%.2f\n", z);
    z = x * y;
    printf("%.2f\n", z);
    z = x / y;
    printf("%.2f\n", z);

    //increment(x+1)
    x++;
    printf("%.2f\n", x);
    //dicrement(x-1)
    x--;
    printf("%.2f\n", x);

}