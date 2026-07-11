#include<stdio.h>
struct student{
    int rollno;
    char name[50];
    int age;
    float marks;    
};
int main(){
    struct student s;

    printf("\nEnter the name of the student: ");
    scanf("%s", &s.name);
    printf("\n Enter the rollno: ");
    scanf("%d", &s.rollno);
    printf("\nEnter the age of the student: ");
    scanf("%d", &s.age);
    printf("\n Enter the marks of the student: ");
    scanf("%f", &s.marks);

    printf("\n -----Here is the details of the student------");
    printf("\n student name: %s", s.name);
    printf("\n The roll no of the student: %d", s.rollno);
    printf("\n the marks of the student: %f", s.marks);
    printf("\n The age of the student: %d", s.age);

    return 0;
}
