//Accept three sides of a triangle from the user and determine whether the triangle is equilateral, isosceles, or scalene.

void main()
{
	int s1,s2,s3;
	printf("Enter 3 sides of triangle ");
	scanf("%d %d %d",&s1,&s2,&s3);
	if (s1==s2 && s3==s2 && s1==s3 )
	printf("This is equilateral triangle");
	else if (s1==s2 || s2==s3 || s1==s3 )
		printf("This is isosceles  triangle");
	else
		printf("This is scalene triangle");

}