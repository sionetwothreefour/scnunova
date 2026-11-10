 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 struct student {
        int number;
        char name[12];
        double grade;
 };

 int main(void) 
 {
    struct student s;

    s.number = 20230001;
    s.name[0] = 'P';
    s.name[1] = 'a';
    s.name[2] = 'r';
    s.name[3] = 'k';
    s.name[4] = ',';
    s.name[5] = ' ';
    s.name[6] = 's';
    s.name[7] = 'i';
    s.name[8] = 'w';
    s.name[9] = 'o';
    s.name[10] = 'n';
    s.name[11] = '\0';
    
  
    s.grade = 4.3;

    printf("학번: %d\n", s.number);
    printf("이름: %s\n", s.name);
    printf("학점: %.2f\n", s.grade);

    return 0;
    
 }