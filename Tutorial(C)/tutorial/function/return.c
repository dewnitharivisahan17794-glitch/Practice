#include <stdio.h>
#include <stdbool.h>
// return is used to , get value of a function to where it's called

// return y means, get y in to the max, and print it

int maxage(int x, int y)
{
    if(x<=y)
    {
        return y;
    }
    else
    {
        return x;
    }
}

double squre(double num)
{
    return num * num ;
}

int main()
{

   int max = maxage(3,4);
  printf("%d\n", max);

  double x = squre(6.78546);
  printf("%lf\n", x);

}

// in above case we can see put the num from the function where called, and it replace by retun as (num * num)
