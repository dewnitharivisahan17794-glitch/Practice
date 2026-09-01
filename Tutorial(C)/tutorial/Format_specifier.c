# include <stdio.h>

int main(){
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;
    int num4 = -1000;

    //WIDTH
    //add characters before real value
    printf("%4d\n",num1);
    printf("%4d\n",num2);
    printf("%4d\n",num3);
    printf("%4d\n",num4);

    //add characters after real value
    printf("%-4d\n",num1);
    printf("%-4d\n",num2);
    printf("%-4d\n",num3);
    printf("%-4d\n",num4);
    
    //add flags before real value
    printf("%+d\n",num1);
    printf("%+d\n",num2);
    printf("%+d\n",num3);
    printf("%+d\n",num4);
    
    //PRECISION

    float n1 = 10.9945;
    float n2 = 112.99000;
    float n3 = 120.43665;
    float n4 = -11.44564;

    printf("%+.4f\n",n1);
    printf("%+.1f\n",n2); //(112.99 ~ 113)
    printf("%+4.4f\n",n3);
    printf("%+4.4f\n",n4);

}

