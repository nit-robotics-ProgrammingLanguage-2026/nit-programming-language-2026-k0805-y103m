#include <stdio.h>
 
void divmod(int x, int y, int *q, int *r);
 
void divmod(int x, int y, int *q, int *r)
{
    *q = x / y;
    *r = x % y;
}
 
int main(void)
{
    int x = 0;
    int y = 0;
    int q = 0;
    int r = 0;
 
    if (scanf("%d %d", &x, &y) != 2)
    {
        printf("NG");
        return 0;
    }
 
    if (x <= 0 || y <= 0)
    {
        printf("NG");
        return 0;
    }
 
    divmod(x, y, &q, &r);
    printf("%d,%d", q, r);
    return 0;
}
