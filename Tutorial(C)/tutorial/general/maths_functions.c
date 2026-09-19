#include <stdio.h>
#include <math.h>
int main(){
    float x = 10;
     x=sqrt(x);//squre of x
     printf("%f\n",x);

     x=pow(2,3);//3 power of 2
     printf("%f\n",x);

     x=round(x);//x round to near integer
     printf("%f\n",x);

     x=ceil(x);// x round to near max integer
     printf("%f\n",x);

     x=floor(x);// x round to near min intiger
     printf("%f\n",x);

     x=sin(x);// sin value of x radians
     printf("%f\n",x);

     x=cos(x);// cos value of x radians
     printf("%f\n",x);

     x=tan(x);// tan value of x radians
     printf("%f\n",x);
     
     int z= -3;
     z=abs(z);// absolute distance from the 0
     printf("%d\n",z);
     
     float y = 3;
     y=log(y);// logrithem value of x
     printf("%f\n",y);

}