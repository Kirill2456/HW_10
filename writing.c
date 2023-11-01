#include <stdio.h>
void write( char* filename)
{
char *message = "This string will be written into file";
//
//char *filename = "data.txt";
//
FILE *fp = fopen(filename,"w");
if (fp)
{
fputs(message,fp);
fclose(fp);
printf("File has been written\n");
}
}
int main()
{
write ("data.txt");
return 0;
}
