#define R 1
main()
{
	float c,r,s;
	printf("input a num: ");
	scanf("%f",&c);
#if R
	r=3.1415926*c*c;
	printf("Area around is: %f\n",r);
#else 
	s=c*c;
	printf("Area of square is : %f\n",s);
#endif

}
