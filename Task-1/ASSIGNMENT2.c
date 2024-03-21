#include <stdio.h>
int main()
{
    int x = 10, y = 50, z = 100;
    int *p, *q, *r;
    p = &x;
    q = &y;
    r = &z;

    printf("x = %d\ny = %d\nz = %d\n", x, y, z);
    printf("p = %p\nq = %p\nr = %p\n", p, q, r);
    printf("*p = %i\n*q = %i\n*r = %i\n", *p, *q, *r);

    printf("Swapping pointers\n");
    int *container;
    container = r;
    r = p;
    p = q;
    q = container;

    printf("x = %d\ny = %d\nz = %d\n", x, y, z);
    printf("p = %p\nq = %p\nr = %p\n", p, q, r);
    printf("*p = %i\n*q = %i\n*r = %i\n", *p, *q, *r);
}