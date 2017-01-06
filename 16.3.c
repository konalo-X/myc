#define X 3
main()
{
#if X-3
	printf("|X|=%d",-X);
#else
	printf("|X|=%d",X);
#endif
}
