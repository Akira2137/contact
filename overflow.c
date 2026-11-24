#include<limits.h>
#include<math.h>
#include<float.h>
#include<stdio.h>
int main(void)
{
unsigned char uc = 255;
uc = uc + 1;
printf("%u\n", uc);            

signed char sc = 127;
sc = sc + 1;
printf("%d\n", sc);            

int big = INT_MAX;
big = big + 1;
printf("%d\n", big);           




float f = FLT_MAX;
f = f * 2.0f;
printf("%f  isinf=%d\n", f, isinf(f));





}
