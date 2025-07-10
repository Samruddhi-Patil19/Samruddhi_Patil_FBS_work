//Print armstrong numbers in the given range 1 to n


void main()
{
    int no, a, temp, digit, sum, count;

    printf("Enter range for printing Armstrong numbers: ");
    scanf("%d", &no);

    for (a = 1; a <= no; a++)
    {
        temp = a;
        sum = 0;
        count = 0;

        // Count digits
        int t = temp;
        while (t != 0)
        {
            t /= 10;
            count++;
        }

        t = temp;
        while (t != 0)
        {
            digit = t % 10;
            sum += pow(digit, count);
            t /= 10;
        }

        if (sum == a)
        {
            printf("%d\n", a);
        }
    }
}

