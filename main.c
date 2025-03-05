#include "myMath.h"
#include "stdio.h"
int main() {
    
    int a, b;

    puts("insert two integers separated by a space");
    scanf("%d %d", &a, &b);

    printf("%d + %d = %d\n", a, b, add(a,b));
    printf("%d - %d = %d\n", a, b, sub(a,b));
    printf("%d * %d = %d\n", a, b, mul(a,b));
    printf("%d / %d = %d\n", a, b, div(a,b));
    
    return 0;
}