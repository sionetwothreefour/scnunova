
#include <stdio.h>
int main(void)
{
       int i;
       for (i = 0; i<5; i++) {
            printf("*");
       }*/
       printf("\n");

       for(i = 0; i< 4; i++) {
          for(int j= 0; j< i; j++) {
               printf("*");
          }
          printf("\n");
       }
       
       return 0;
}



