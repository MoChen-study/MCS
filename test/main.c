#include "uhead.h"

int main()
{
	int a[N],b[N],c[N];
	struct arg ar;
	urand(a,N);
	cp(a,b,N);
	printf("\n****before sort*****\n");
	show(a,N);
	writefile(a,N);
	printf("\n*********read file**********\n");
	readfile(c,N);
	showfile(c,N);
	printf("\n*********\n");
	printf("sum=%d",usum(a,N));
	printf("\n*********\n");
	bsort(a,N);
	writefile1(a,N);
	printf("\n*********read file**********\n");
	readfile1(c,N);
	showfile(c,N);
	printf("\n****after sort*****\n");
	show(a,N);
	runtimes(bsort,a,N);
	printf("\n*********\n");
	printf("\n****before sort*****\n");
	show1(b,N);
	syssort(b,N);
	printf("\n****after sort*****\n");
	show1(b,N);
	runtimes(syssort,b,N);

	printf("operater****\n");
	ar=oprater(a,N);
	printf("sum=%d,ave=%.2f\n",ar.sum,ar.ave);
	return 0;
}
