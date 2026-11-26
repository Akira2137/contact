#include<stdio.h>
int main(void)
{

int i = 5;
printf("i++ : %d\n", i++);    //打 5，之后变成 6
printf("i   : %d\n", i);      //6

int j = 5;
printf("++j : %d\n", ++j);    //先加，打 6




int n = 5;
int y = n++ + n++;
printf("n=%d y=%d\n", n, y);


}
