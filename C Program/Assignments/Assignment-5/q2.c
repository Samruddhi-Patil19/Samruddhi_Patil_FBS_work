void main()
{
	int n;
	printf("Enter number to print pattern");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}