#include <stdio.h>
#include <math.h>

// adding prototypes
void plusAns(float num1, float num2);
void minusAns(float num1, float num2);
void multipleAns(float num1, float num2);
void divideAns(float num1, float num2);
void powerAns(float num1, float num2);

void main()
{
    puts("\n*-*-*-*-*-* Calculator ( simple ) *-*-*-*-*-*");

    // define variables
    float userNum1;
    float userNum2;
    char function;

    // take the numbers from user
    puts("please enter your problem \n( do not be curious and give the program hard or complicated problems! )");
    puts("like 2 + 2");
    puts("functions :");
    puts("plus -> +   minus -> -   multiple -> *");
    puts("divide -> /   power -> ^\n");
    scanf(" %f %c %f", &userNum1, &function, &userNum2);

    // process based on user preference
    switch (function)
    {
    case '+':
    {
        plusAns(userNum1, userNum2);
        break;
    }
    case '-':
    {
        minusAns(userNum1, userNum2);
        break;
    }
    case '*':
    {
        multipleAns(userNum1, userNum2);
        break;
    }
    case '/':
    {
        divideAns(userNum1, userNum2);
        break;
    }
    case '^':
    {
        powerAns(userNum1, userNum2);
        break;
    }
    default:
    {
        puts("Are you drunk ?!");
        break;
    }
    }
    puts("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
}

// calculate plus
void plusAns(float num1, float num2)
{
    float ans = num1 + num2;
    printf("%.2f", ans);
}

// calculate minus
void minusAns(float num1, float num2)
{
    float ans = num1 - num2;
    printf("%.2f", ans);
}

// calculate multiply
void multipleAns(float num1, float num2)
{
    float ans = num1 * num2;
    printf("%.2f", ans);
}

// calculate divide
void divideAns(float num1, float num2)
{
    float ans = num1 / num2;
    if (num2 == 0)
    {
        puts("nice job tesla...");
    }
    else
    {
        printf("%.2f", ans);
    }
}

// calculate power
void powerAns(float num1, float num2)
{
    float ans = pow(num1, num2);
    printf("%.2f", ans);
}
