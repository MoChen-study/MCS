#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char buf1[] = "abcdefghij";
char buf2[] = "ABCDEFGHIJ";
int main (void)
{
	int fd;
	if ( (fd = creat ("file.hole",0644)) < 0)
	perror ("Creat error") ;
	if (write(fd,buf1,10) != 10)
	perror ("buf1 write error") ;
	/* offset now = 10 */
	if (lseek(fd,40,SEEK_SET) == -1)
	perror("lseek error") ;
	/* offset now = 40 */
	if (write(fd,buf2,10)!= 10)
	perror ("buf2 write error") ;
	/* offset now = 50 */
	exit (0) ;
}

