#include <stdio.h>
#include<stdlib.h>
#include <math.h>

int main()
{
    int code;
    double num1,num2,result;
    char use;

do{
    system("cls");
    printf("My first semi advanced calculator!\n");
    printf("Here are the operations available for the calculator\n");
    printf("====\t\t\t=========");
    printf("\ncode\t\t\tfunctions\n");
    printf("====\t\t\t=========");
    printf("\n[1]\t\t\taddition\n");
    printf("[2]\t\t\tsubtraction\n");
    printf("[3]\t\t\tdivision\n");
    printf("[4]\t\t\tmultiplcation\n");
    printf("[5]\t\t\tsquare root\n");
    printf("[6]\t\t\tpower\n");
    printf("[7]\t\t\tlogarithms\n");
    printf("[8]\t\t\ttan theta\n");
    printf("[9]\t\t\tcosine theta\n");
    printf("[10]\t\t\tsine theta\n");

    printf("Choose the corresponding code of the operation you want to use\n");
    scanf("%d",&code);

    if(code == 1)
    {
               printf("Please input the first number\n");
               scanf("%lf",&num1);
               printf("Please input the second number\n");
               scanf("%lf",&num2);

               result = num1 + num2;

    }
    else if(code == 2)
    {
        printf("Please input the first number\n");
               scanf("%lf",&num1);
               printf("Please input the second number\n");
               scanf("%lf",&num2);

               result = num1 - num2;

    }
    else if(code == 3 && num2>0)
    {
        printf("Please input the first number\n");
               scanf("%lf",&num1);
               printf("Please input the second number\n");
               scanf("%lf",&num2);

               result = num1 / num2;

               if(code ==3 && num2 == 0)
               {
                   printf("Cant divide by zero!\n\a");
                    end();

               }
    }

    else if(code == 4)
    {
        printf("Please input the first number\n");
               scanf("%lf",&num1);
               printf("Please input the second number\n");
               scanf("%lf",&num2);

               result = num1 * num2;
    }

    else if(code == 5 && num1>=0)
    {
        printf("Please number whose square root you want to find\n");
                scanf("%lf",&num1);
                 result = sqrt(num1);

                  if(code == 5 && num1<0)
        {
        printf("You cant find the square root of a negative number!!\n\a");
        end();
        }}
    else if(code == 6)
    {
        printf("Please input the base number \n");
               scanf("%lf",&num1);
               printf("Please input the index number\n");
               scanf("%lf", &num2);

               result = pow(num1,num2);
    }

     else if(code == 7)
    {
        printf("Please number whose logarithm you want to find\n");
                scanf("%lf",&num1);
                 result = log10(num1);
    }

      else if(code == 8)
    {
        printf("Please number whose tangent you want to find \n");
                scanf("%lf",&num1);

                if(fmod(num1,90)== 0)
                    {
                        printf("The tangent is undefined at this point!\a");
                        end();
                    }
                else{
                 result = tan(num1);
                }
    }

      else if(code == 9)
        {
        printf("Please number whose cosine you want to find in radians\n");
                 scanf("%lf",&num1);
                 result = cos(num1);
        }

      else if(code == 10)
    {
        printf("Please number whose sine you want to find in radians\n");
                scanf("%lf",&num1);
                 result = sin(num1);
    }
    printf("the result is %.2f",result);

    printf("\ndo you still want to continue using the calculator?(y/n)");

    use = getche();
}
    while(use == 'y'|| use == 'Y');

    if(use == 'n' || use == 'N')
    {
        printf("\nThank you for using the calculator and promoting us!\n");
        sleep(5);
    }

    return 0;
}
