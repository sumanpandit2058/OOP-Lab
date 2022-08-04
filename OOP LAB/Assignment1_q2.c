#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    int rollNo;
    int m1,m2,m3,m4,m5;
};
int main(){
struct student s1;
printf("Enter the name of  student \n");
    scanf("%s", &s1.name);
    printf("Enter the roll number \n");
    scanf("%d", &s1.rollNo);
    printf("Enter the marks of student \n");
    scanf("%d,%d,%d,%d,%d", &s1.m1,&s1.m2,&s1.m3,&s1.m4,&s1.m5);
    printf("\n\n");
    printf("Student :");
    printf("%s\n",s1.name );
    printf("Roll no :");
    printf("%d\n", s1.rollNo);
     printf("Marks: ");
    printf("%d,%d,%d,%d,%d\n", s1.m1,s1.m2,s1.m3,s1.m4,s1.m5);
return 0;
}