#include "uhead.h"

void writefile(int *a,int n)
{
	int i;
	FILE *fp;
	//char buf[N];
	fp=fopen("arraydata1.txt","w+");
	if(fp==NULL){
		perror("创建文件失败\n");
		exit(1);
	}
	for (i=0;i<n;i++)
		fprintf(fp,"%4d",a[i]);
	fclose(fp);
}

void readfile(int *a,int n)
{
	int i;
	FILE *fp;
	fp=fopen("arraydata1.txt","r");
	if(fp==NULL){
		perror("读取文件失败\n");
		exit(1);
	}
	for (i=0;i<n;i++){
		//printf("a[%d]=",i);
		fscanf(fp,"%4d",&a[i]);
	}
	fclose(fp);

}

void writefile1(int *a,int n)
{
	int i;
	FILE *fp;
	//char buf[N];
	fp=fopen("arraydata2.txt","w+");
	if(fp==NULL){
		perror("创建文件失败\n");
		exit(1);
	}
	for (i=0;i<n;i++)
		fprintf(fp,"%4d",a[i]);
	fclose(fp);
}

void readfile1(int *a,int n)
{
	int i;
	FILE *fp;
	fp=fopen("arraydata2.txt","r");
	if(fp==NULL){
		perror("读取文件失败\n");
		exit(1);
	}
	for (i=0;i<n;i++){
		//printf("a[%d]=",i);
		fscanf(fp,"%4d",&a[i]);
	}
	fclose(fp);
	
	

}
void showfile(int *a,int n)
{
	int i;
	for (i=0;i<n;i++){
		printf("a[%d]=%d\t",i,a[i]);
	}
	printf("\n");
}
