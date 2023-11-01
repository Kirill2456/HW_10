#include <stdio.h>
#include <stdlib.h>
int* resize(int *a)
{
int temp;
for (int j=0; j<5; j++)
{
for (int i=0; i<4; i++)
{
if(a[i]<a[i+1])
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
}
}
return a;
}

int main()
{
int a[10];
FILE *in = fopen("mas.txt","r+");
for (int i = 0; i<5; i++)
{
fscanf(in,"%d",&a[i]);
}

resize(a);

FILE *f=fopen("mas2.txt","w");
for (int i=0; i<5; i++)
fprintf(f,"%d ", a[i]);
fclose(f);
return 0;
}
