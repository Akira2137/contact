#include <stdio.h>

int main(void)
{
    /* 一、整数除法的陷阱 */
    int a = 7, b = 2;
    double d;

    d = a / b;
    printf("d = a / b        = %f\n", d);

    d = (double)a / b;
    printf("d = (double)a / b = %f\n", d);

    d = a / (double)b;
    printf("d = a / (double)b = %f\n", d);

    /* 二、强制转换是截断，不是四舍五入 */
    printf("(int)3.99  = %d\n", (int)3.99);
    printf("(int)-3.99 = %d\n", (int)-3.99);
    printf("(int)0.999 = %d\n", (int)0.999);

    /* 三、整数提升：char 参与运算会升成 int */
    char c = 'A';
    printf("c     = %c\n", c);
    printf("c + 1 = %d\n", c + 1);
    printf("(char)(c + 1) = %c\n", (char)(c + 1));

    /* 四、赋值时的截断：超范围的值被砍掉 */
    unsigned char uc = 300;
    short s = 70000;
    printf("uc = %u\n", uc);
    printf("s  = %d\n", s);

    /* 五、整数转浮点也可能丢精度 */
    int big = 2147483647;
    float f = big;
    printf("big = %d\n", big);
    printf("f   = %.1f\n", f);
    printf("f - big = %.1f\n", f - big);

    /* 六、先括号后转换，与先转换后运算，结果不同 */
    printf("(int)(3.9 + 4.1) = %d\n", (int)(3.9 + 4.1));
    printf("(int)3.9 + (int)4.1 = %d\n", (int)3.9 + (int)4.1);

    return 0;
}
