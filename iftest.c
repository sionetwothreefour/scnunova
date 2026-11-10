   #include <stdio.h>

  int main(void)
  {
        int score;

        printf("정수를 입력하시오:");
        scanf("%d", &score);

        if( score >= 80 )
              if(score >= 90)
                   printf("당신의 학점은 A입니다.\n");
              else
                   printf("당신의 학점은 B입니다.\n");
                   
              return 0;
  }        