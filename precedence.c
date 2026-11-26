#include<stdio.h>
int main(void)
{
printf("%d\n", 3 + 4 * 5);        //应该是 23
printf("%d\n", (3 + 4) * 5);      //括号改变结果，35
printf("%d\n", 10 - 4 - 3);       //左结合，3
printf("%d\n", 10 - (4 - 3));     //括号，9

int a, b, c;
a = b = c = 5;                    //右结合
printf("a=%d b=%d c=%d\n", a, b, c);

printf("%d\n", 1 < 2);            //比较结果是 1 或 0
printf("%d\n", 5 > 3 > 1);        //经典陷阱，先算 5>3

printf("%d\n", !0);               //逻辑非
printf("%d\n", !5);
printf("%d\n", -5 % 2);           //负号的优先级

//I can't use chinese in this page, so 
}
