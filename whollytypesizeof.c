#include <stdio.h>

int main(void)
{
    char a = 0;
    short b = 0;
    int c = 0;
    long d = 0;
    long long e = 0;
    unsigned int f = 0;
    float g = 0.0f;
    double h = 0.0;
    long double i = 0.0L;

    printf("char        %zu\n", sizeof(a));
    printf("short       %zu\n", sizeof(b));
    printf("int         %zu\n", sizeof(c));
    printf("long        %zu\n", sizeof(d));
    printf("long long   %zu\n", sizeof(e));
    printf("unsigned int %zu\n", sizeof(f));
    printf("float       %zu\n", sizeof(g));
    printf("double      %zu\n", sizeof(h));
    printf("long double %zu\n", sizeof(i));

    printf("pointer     %zu\n", sizeof(void *));
    return 0;
}
