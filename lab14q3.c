#include <stdio.h>
#include <stdlib.h>



int main()
{

    // 60 = 0011 1100
    unsigned int x = 60;  

    // 13 = 0000 1101 
    unsigned int y = 13; 

    int z = 0;

    //12 = 0000 1100
    z = x & y;           
    printf("Line 1 / Value of c is %d\n", x );

    //61 = 0011 1101
    z = x | y;            
    printf("Line 2 / Value of c is %d\n", x );

    // 49 = 0011 0001
    z = x ^ y;             
    printf("Line 3 / Value of c is %d\n", z );

    //-61 = 1100 0011
    z = ~x;               
    printf("Line 4 / Value of c is %d\n", z );

    // 240 = 1111 0000
    z = x << 2;           
    printf("Line 5 / Value of c is %d\n", z );

    // 15 = 0000 1111
    z = x >> 2;           
    printf("Line 6 / Value of c is %d\n", z );

}
