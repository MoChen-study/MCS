#include "lib.h"

int max(int *a,int n)
{
	int max=0,i=0;
	for(;i<n;i++){
		if(max<a[i])
			max=a[i];	
	}
	return max;
}
