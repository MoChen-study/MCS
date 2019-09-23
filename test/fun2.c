#include "uhead.h"

struct arg oprater(int *a,int n)
{
	struct arg ar;
	ar.sum=0;
	ar.ave=0.0;
	int i;
	for (i=0;i<n;i++)
		ar.sum+=a[i];
	ar.ave=(float)ar.sum/n;
	return ar;
}
