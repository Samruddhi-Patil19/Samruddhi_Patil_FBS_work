// Print strong numbers in the given range 1 to n.
#include <stdio.h>

void main()
{
    int no, a, b, fact, sum, temp, rem;

    printf("Enter range for printing strong numbers: ");
    scanf("%d", &no);

    for (a = 1; a <= no; a++)
    {
        temp = a;
        sum = 0;

        for (b = a; b > 0; b = b / 10)
        {
            rem = b % 10;

            fact = 1;
            for (int i = 1; i <= rem; i++)
            {
                fact = fact * i;
            }

            sum = sum + fact;
        }

        if (sum == a)
            printf("%d\n", a);
    }
}
