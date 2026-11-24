#include<stdio.h>
int main(void)
{
printf("%.20f\n", 0.1 + 0.2);
printf("%.20f\n", 0.3);
printf("%d\n", 0.1 + 0.2 == 0.3);




float f = 1.23456789f;
double d = 1.23456789;
printf("%.12f\n%.12f\n", f, d);



float big = 123456789.0f;
printf("%.1f\n", big);
printf("%f\n", big + 1.0f);     


printf("%d\n", 0.5 == 0.5);     
printf("%.80f\n", 0.1);         
}
