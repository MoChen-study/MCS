#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

void show(int *,int);
void urand(int *,int);
int usum(int *,int);
void bsort(int *,int);
void syssort(int *a,int n);
int cmp(const void *a,const void *b);
void runtimes(void (*func)(int *,int ),int *a,int n);
void cp(int*,int*,int n);
void show1(int *,int);
void writefile(int *,int);
void readfile(int *,int);
void writefile1(int *,int);
void readfile1(int *,int);
void showfile(int *,int);
struct arg{
	int sum;
	float ave;
};

struct arg oprater(int *,int);
