#include <stdio.h>
#include <stdarg.h>

float avarage(int v, ...)
{
va_list args;
int i=0, num=0;

va_start(args, v);
for (; v ; v--)
{
i+= va_arg(args, int);
num++;
}
va_end(args);
return (float)i/num;
}

int main()
{

float sr = avarage(5,60,5,3,89,56);
printf("%f\n",sr);
return 0;
}
