#include "lib.h"

int sum(int *a,int n)
{
	int sum1=0,i=0;
	for(;i<n;i++)
		sum1+=a[i];
	return sum1;
}
