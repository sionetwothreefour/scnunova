#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int i;
    for(i = 0; i < 500; i++) {
        printf("\r %10d *****", i);
        sleep(2);
        
        
    }
    printf("\n"); 

    return 0;
}