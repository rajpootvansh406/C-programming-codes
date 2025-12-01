// Program to demonstrate the use of structures and unions in C
#include <stdio.h>
#include <string.h>
 struct student
 {
  char name[20];
 int roll;
 float marks;
 };
 int main(){
 struct student s1,s2;
  strcpy(s1.name,"Vansh Ranot");
 s1.roll=101;
 s1.marks=95.5;
    s2=s1;
 printf("%s\n%d\n%.2f",s2.name,s2.roll,s2.marks);
 }


union student
{
    char name[20];
    int roll;
    float marks;
};

int main() {
    union student s1, s2;

    // Demonstrating one member at a time
    strcpy(s1.name, "Vansh Ranot");
    printf("%s\n", s1.name);

    s1.roll = 101;
    printf("%d\n", s1.roll);

    s1.marks = 95.5;
    printf("%.2f\n", s1.marks);

    return 0;
}