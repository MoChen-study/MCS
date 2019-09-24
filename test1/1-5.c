#include "stdio.h"
#include "stdlib.h"

void main()
{
	FILE* fp_r;
	FILE* fp_w;
	int file_size = 0;	
	unsigned char ch[1] = {0};
	if((fp_r = fopen("file_r.txt", "r")) == NULL) 
	{
		printf("can not open the file_r\n");
		exit(1);
	}
	if((fp_w = fopen("file_w.txt", "w")) == NULL)
	{
		printf("can not open the file_w\n");
		exit(1);
	}
	fseek(fp_r,0L,SEEK_END);
	file_size = ftell(fp_r);
	rewind(fp_r);

	while(ftell(fp_r) != file_size) //判断是否读到文末
	{	
		ch[0] = fgetc(fp_r);// int fgetc(FILE *stream) 读一个字节		
		fputc(ch[0],fp_w);// int fputc(int char, FILE *stream) 写一个字节
	 }
	 
	fclose(fp_r);
	fclose(fp_w);	
}

