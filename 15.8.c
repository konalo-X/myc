#include<stdio.h>
#include<stdlib.h>

int main()
{
	long *p1;
	long size=1000*sizeof(long);
	p1=(long *)malloc(size);
	if(p1!=NULL)
		printf("\nAllocation of %d bytes ok\n",size);
	else
		printf("\n Allocation fail!"),
			exit(-1);
free(p1);
p1=NULL;
if(p1==NULL)
	printf("p1 free ok!\n");
else
	printf("p1 free isn't ok!\n");

return 0;
	
}
