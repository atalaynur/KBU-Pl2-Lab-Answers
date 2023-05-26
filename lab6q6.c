#include <stdio.h>

int main()
{
int c, *b, **a;
int f();
c=4;
b=&c;
a=&b;
printf("%d", f(c,b,a));


}

int f(int x, int *py, int **ppz) 
{
**ppz *= 1;
x= *py***ppz;
*py *= 2;
x *=* py+3;
return (x+*py+**ppz);

}

/*output:
ab6q6 
192% 
*/    