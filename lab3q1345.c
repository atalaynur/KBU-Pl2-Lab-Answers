#include <stdio.h>
#include <stdlib.h>


 /* 1- Write screen output, when fun is called in main
    function with n = 0 a = 5 and b = 7
    void fun (int n, int a, int b)
    {
        if (n >= 10)
        return;
        fun (n+2, a, b + n ) ;
        printf("4d 4d 4d\n", n, a, b);
    }

    OUTPUT
    8 5 19
    6 5 13
    4 5 9
    2 5 7
    0 5 7


  3- What is the output of the following C program?
   A˛a˝daki C program˝n˝n Á˝kt˝s˝ nedir?

   int fun (int n)
   {
       if (n == 4)
        return n;
        else return 2 fun (n+1);
   }
    int main()
    {
        printf("d", fun (2));
         return 0;
    }

    OUTPUT
    16



    4-What is the output of the following C program?


    int toplam(int n)
    {
        if (n==1)
            return n;
        else
            return(n+ toplam(n-1));
    }
    void main(void)
    {
        int say! = 6 :
        printf("Sonuc = %d", toplam(sayi));
    }

    output
    21


    5- . In recursion, the condition for which
    the function will stop calling itself is
    a) Best case (En iyi durum)
    b) Worst case (En kˆt¸ durum)
    c) Base case (Temel durum)
    d) There is no such condition (Bˆyle bir durum yoktur)

    cevap C


    6-What does the following recursive code do?
       void my recursive function(int n)
       {
           if (n==0)
            return;
            printf("%d",n);
            my recursive function(n-1);
       }
            void main()
            {
            my recursive function(7);
            }
    output
    7654321


    7-What does the following function print
    for  n =25?
        void fun(int n)
        {
        if ( n ==0)
            return;
            fun(n/2);
            printf("%d", n%2);
        }

        OUTPUT
        11001


      8-You have to find the sum of digits of a number
        given that the number is always greater than 0.
        Which of the following base cases can replace
        the base case for the below code?


        cevap E

    9-If the following code is executed, how many "a"
      will be written on the screen.
      #include<stdio.h>
      char f1(int b);
      main()
      {
          char a;
      a = f1(10)
      printf("%c",a);
      }
      char f1(int b)
      {
          printf("a");
          if(b <= 8)
          return 'a';
           else
      }
      {
      printf("a");
      f1(b--);
      }


      OUTPUT
      6
      */



