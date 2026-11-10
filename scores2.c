 #include <stdio.h>
 #define SIZE 5

 int main(void) {
    int i;
    int a[SIZE] = {1, 2, 3, 4, 5};
    int b[SIZE];

    for(i = 0; i < SIZE; i++) {
        b[i] = a[i];
        printf("b[%d] = %d\n", i, b[i]);
        
    }
    return 0; 
 }