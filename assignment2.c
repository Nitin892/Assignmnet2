// 1. Write a program to print unit digit of a given number

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0)
    {
        int result;
        result = num % 10;
        printf("Unit Digit %d\n", result);
        num /= 10;
    }
    return 0;
}

// 2. Write a program to print a given number without its last digit

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    num = num / 10;
    printf("%d", num);
    return 0;
}

// 3. Write a program to swap values of two int variables
#include <stdio.h>
int main()
{
    int a, b, t;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("before swapping a is %d and b is %d: \n", a, b);
    t = a;
    a = b;
    b = t;
    printf("After swapping a is %d and b is %d: ", a, b);
    return 0;
}

// 4. Write a program to swap values of two int variables without using a third variable.

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("before swapping a is %d and b is %d: \n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping a is %d and b is %d: ", a, b);
    return 0;
}
// 5. Write a program to input a three-digit number and display the sum of the digits

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int sum = 0;
    while (num > 0)
    {
        int result;
        result = num % 10;
        sum += result;
        num /= 10;
    }

    printf("Sum of three digits is %d", sum);
    return 0;
}

// 6. Write a program which takes a character as an input and displays its ASCII code

#include <stdio.h>
int main()
{
    char mychar;
    printf("Enter character to get ASCII no. : ");
    scanf("%c", &mychar);
    printf("%d", mychar);
    return 0;
}

// 7. Write a program to find the position of first 1 in LSB.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int i = 0;
    int count = 1;
    while (n)
    {

        if (n & 1)
        {
            printf("%d", count);
            break;
        }
        n >>= 1;
        count++;
    }
    return 0;
}

// 8. Write a program to check whether the given number is even or odd using a bitwise
// operator
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n & 1 == 1)
    {
        printf("%d is odd", n);
    }
    else
    {
        printf("%d is even", n);
    }
    return 0;
}

// 9. Write a program to print size of an int, a float, a char and a double type variable.
#include <stdio.h>
int main()
{
    printf("size of an int is %d\n", sizeof(int));
    printf("size of char is %d\n", sizeof(char));
    printf("size of float is %d\n", sizeof(float));
    printf("size of double is %d\n", sizeof(double));
    return 0;
}

/*10. Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)*/

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    num /= 10;
    num *= 10;
    printf("%d", num);
    return 0;
}

/*11 .Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)*/

#include <stdio.h>
int main()
{
    int num, digit;
    printf("Enter number and digit: ");
    scanf("%d %d", &num, &digit);
    num *= 10;
    int result = num + digit;
    printf("%d", result);
    return 0;
}

/* 12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD*/

#include <stdio.h>
int main()
{
    float amount;
    printf("Enter Your Amount: ");
    scanf("%f", &amount);
    amount /= 76.23;
    printf("Amount in USD is %.2f", amount);
    return 0;
}

/*13. Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right*/
#include <stdio.h>
int main()
{
    int a = 15091;
    int b = a;
    int digits = 1;
    while (a > 0)
    {
        a = a / 10;
        digits = digits * 10;
    }
    digits = digits / 10;
    int c = b / digits;
    int d = (((b - c * (digits))) * 10) + c;
    printf("%d", d);
    return 0;
}
