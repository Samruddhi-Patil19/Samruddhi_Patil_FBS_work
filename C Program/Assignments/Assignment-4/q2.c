//Print prime numbers in the given range 1 to n.

void main()
{
	int no,a,b,status=0;

	printf("Enter range for printing prime number");
	scanf("%d",&no);
	
	for (a=2;a<=no;a++)
	{
		status=0;
		for (int i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
			status=1;
			break;
		}
	}
	
	
	if(status==0)
	printf("%d\n",a);
}

}