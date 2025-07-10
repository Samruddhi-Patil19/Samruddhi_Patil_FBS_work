//Print perfect numbers in the given range 1 to n.
void main()
{
	int no, a, b, sum;

	printf("Enter range for printing perfect numbers: ");
	scanf("%d", &no);

	for (a = 1; a <= no; a++)
	{
		sum = 0;
		for (b = 1; b <= a / 2; b++)
		{
			if (a % b == 0)
			{
				sum += b;
			}
		}

		if (sum == a)
			printf("%d\n", a);
	}
}
