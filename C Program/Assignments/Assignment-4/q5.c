//Write a menu driven program to take a number for user and perform operations as follows.
//Press 1.To check number is even or odd.
// 2.To check number is prime or not.
// 3.To check number is pallindrome or not.
// 4.To check number is positive, negative or zero.
// 5.To reverse a number.
// 6.To find sum of digits.
#include <stdio.h>

void main()
{
    int no, choice, i, temp, rev, sum, rem, status = 0;

    printf("Enter a number: ");
    scanf("%d", &no);

    printf("Press 1. To check number is even or odd.\n");
    printf("2. To check number is prime or not.\n");
    printf("3. To check number is palindrome or not.\n");
    printf("4. To check number is positive, negative or zero.\n");
    printf("5. To reverse a number.\n");
    printf("6. To find sum of digits.\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        if (no % 2 == 0)
            printf("Number is Even.\n");
        else
            printf("Number is Odd.\n");
    }

    else if (choice == 2)
    {
        status = 0;
        if (no < 2)
            status = 1;

        for (i = 2; i <= no / 2; i++)
        {
            if (no % i == 0)
            {
                status = 1;
                break;
            }
        }

        if (status == 0)
            printf("Number is Prime.\n");
        else
            printf("Number is Not Prime.\n");
    }

    else if (choice == 3)
    {
        temp = no;
        rev = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp = temp / 10;
        }

        if (rev == no)
            printf("Number is Palindrome.\n");
        else
            printf("Number is Not Palindrome.\n");
    }

    else if (choice == 4)
    {
        if (no > 0)
            printf("Number is Positive.\n");
        else if (no < 0)
            printf("Number is Negative.\n");
        else
            printf("Number is Zero.\n");
    }

    else if (choice == 5)
    {
        temp = no;
        rev = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp = temp / 10;
        }

        printf("Reverse of the number is %d\n", rev);
    }

    else if (choice == 6)
    {
        temp = no;
        sum = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            sum = sum + rem;
            temp = temp / 10;
        }

        printf("Sum of digits is %d\n", sum);
    }

    else
    {
        printf("Invalid Choice.\n");
    }
}
