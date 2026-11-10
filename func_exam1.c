  #include <stdio.h>

  void print_stars(int n)
  {
       for(int i = 0; i < n; i++) 
            printf("*");
            
       printf("\n");     
       
  }

  int main(void) 
  {
       

       for(int i = 0; i <3; i++) {
            print_stars(30);
       }
        

        

       
       return 0;
  }