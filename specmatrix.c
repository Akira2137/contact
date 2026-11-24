#include<stdio.h>
int main(void)
{
int a=336;






printf("%%d%d\n",a);
printf("%%u%u\n",a);
printf("%%o%o\n",a);
printf("%%x%x\n",a);
printf("%%c%c\n",a);

short b=-336;

printf("%%hd%hd\n",b);
printf("%%hu%hu\n",b);





printf("%x\n", (unsigned)(unsigned short)(-336));









printf("use %%ld to print a int :%ld\n",a);
printf("use %%d to print a int :%d\n",a);
printf("use %%f to print a int :%f",a);
}



