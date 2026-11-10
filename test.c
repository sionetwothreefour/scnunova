  #include <stdio.h>

  int rectDrawArea(int w, int h);

  int main(void) {
    int x = 5; 
    int y = 7;
    int ss;

    ss = rectDrawArea(x, y);
    printf("%d", ss);

    return 0;

    
  }

  int rectDrawArea(int w, int h)
  {
        
           
           int s;
        
           for( int i  = 0; i < w; i++) {
                for( int j = 0; j < h; j++) {
                    printf("*");
                }
                    printf("\n");
           }               

           s = w * h;
           
           return s;
           
  }