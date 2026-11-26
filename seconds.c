#include<stdio.h>
int main(void)
{



int t=0;
scanf("%d",&t);
int h= t/3600;
int m=(t%3600)/60;
int s =t%60;

printf("%dhour %dminute %dsecond",h,m,s);
}
