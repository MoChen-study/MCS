#include "uhead.h"

void show(int *a,int n)
{
	int i;
	printf("\n*******************\n");
	for (i=0;i<n;i++)
		printf("a[%d]=%d\t",i,a[i]);
	printf("\n*******************\n");
}
void urand(int *a,int n)
{
	int i;
	srand((int)time(0));
	for(i=0;i<n;i++)
		a[i]=1+(int)(100.0*rand()/(RAND_MAX+1.0));
}
int usum(int *a,int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
		sum+=a[i];
	return sum;
}

void bsort(int *a,int n)
{
	int i,j,tmp;
	for(i=0;i<n;i++)
		for(j=0;j<n-i-1;j++)
			if(a[j]>a[j+1])
			{
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
}

int cmp(const void *a,const void *b)
{
	int *aa=(int *)a,*bb=(int *)b;
	if(*aa>*bb)return 1;
	if(*aa==*bb)return 0;
	if(*aa<*bb)return -1;

}
void syssort(int *a,int n)
{
	qsort(a,n,sizeof(int),cmp);
	printf("\n");

}

void runtimes(void (*func)(int *a,int b),int *a,int n)
{
	clock_t start,end;
	start=clock();
	func(a,n);
	end=clock();
	printf("\ntime is %5.2f s\n",difftime(end,start));// difftime的返回值单位是秒
	
	

}


void cp(int* a,int* b,int n)
{
	int i;
	for(i=0;i<n;i++)
		b[i]=a[i];
}

void show1(int *b,int n)
{
	int i;
	printf("\n*******************\n");
	for (i=0;i<n;i++)
		printf("b[%d]=%d\t",i,b[i]);
	printf("\n*******************\n");

}
