#include <stdio.h>
int main()
{
    float a, b, c;
    char p, m, ch='r';


    while(ch != 'q' ) {

    printf("Enter number: ");
    scanf(" %f %c %f %c %f", &a, &p, &b, &m, &c);


    // addition
    if (p == '+')
    {
        if (m == '+')
        {
            printf("%.2f + %.2f + %.2f = %.2f\n", a, b, c, a + b + c);
        }
        if (m == '-')
        {
            printf("%.2f + %.2f - %.2f = %.2f\n", a, b, c, a + b - c);
        }
        if (m == '*')
        {
            printf("%.2f + %.2f * %.2f = %.2f\n", a, b, c, a + (b * c));
        }
        if (m == '/')
        {
            printf("%.2f + %.2f / %.2f = %.2f\n", a, b, c, a + (b / c));
        }
    }

    // subtrack
    if (p == '-')
    {
        if (m == '+')
        {
            printf("%.2f - %.2f + %.2f = %.2f\n", a, b, c, a - b + c);
        }
        if (m == '-')
        {
            printf("%.2f - %.2f - %.2f = %.2f\n", a, b, c, a - b - c);
        }
        if (m == '*')
        {
            printf("%.2f - %.2f * %.2f = %.2f\n", a, b, c, a - (b * c));
        }
        if (m == '/')
        {
            printf("%.2f - %.2f / %.2f = %.2f\n", a, b, c, a - (b / c));
        }
    }

    // multiple
    if (p == '*')
    {
        if (m == '+')
        {
            printf("%.2f * %.2f + %.2f = %.2f\n", a, b, c, (a * b) + c);
        }
        if (m == '-')
        {
            printf("%.2f * %.2f - %.2f = %.2f\n", a, b, c, (a * b) - c);
        }
        if (m == '*')
        {
            printf("%.2f * %.2f * %.2f = %.2f\n", a, b, c, a * (b * c));
        }
        if (m == '/')
        {
            printf("%.2f * %.2f / %.2f = %.2f\n", a, b, c, a * b / c);
        }
    }

    // division
    if (p == '/')
    {
        if (m == '+')
        {
            printf("%.2f / %.2f + %.2f = %.2f\n", a, b, c, a / b + c);
        }
        if (m == '-')
        {
            printf("%.2f / %.2f - %.2f = %.2f\n", a, b, c, a / b - c);
        }
        if (m == '*')
        {
            printf("%.2f / %.2f * %.2f = %.2f\n", a, b, c, a / b * c);
        }
        if (m == '/')
        {
            printf("%.2f / %.2f / %.2f = %.2f\n", a, b, c, a / b / c);
        }
    }
    printf("to continue press  r  to exit press  q \n");
    scanf("   %c", &ch);
    }

    return 0;
}