#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("CHAR_BIT   = %d\n", CHAR_BIT);        
    printf("INT_MAX    = %d\n", INT_MAX);      
    printf("LONG_MAX   = %ld\n", LONG_MAX);     
    printf("LLONG_MAX  = %lld\n", LLONG_MAX);
    printf("UINT_MAX   = %u\n", UINT_MAX);        
    printf("FLT_MAX    = %e\n", FLT_MAX);
    printf("DBL_MAX    = %e\n", DBL_MAX);
    return 0;
}
