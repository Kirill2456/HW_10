#include <stdio.h>
void read (char *filename)
{
//char *filename = "data.txt";
char buffer[256];
FILE *fp = fopen(filename,"r");
if (fp)
{
while((fgets(buffer,256,fp))!=NULL)
{
printf("%s",buffer);
}
printf("\n");
fclose(fp);
}
}
int main()
{
read("data.txt");
return 0;
}
