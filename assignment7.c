#include<stdio.h>

struct student{
    char name[100];
    int roll;
    int phy_marks;
    int chm_marks;
    int math_marks;
    int FOP_marks;
    int total_marks;
    float per;
};

int main(){
    struct student stu[65];

    int n;
    printf("enter index(0-64) : ");
    scanf("%d", &n);
    
    printf("Enter student roll no.(1-65) : ");
    scanf("%d", &stu[n].roll);

    printf("Enter student name(without space ) : ");
    scanf("%s", stu[n].name);

    printf("Enter marks of physics(out of 100) : ");
    scanf("%d", &stu[n].phy_marks);
    
    printf("Enter marks of chemistry(out of 100) : ");
    scanf("%d", &stu[n].chm_marks);

    printf("Enter marks of maths(out of 100) : ");
    scanf("%d", &stu[n].math_marks);

    printf("Enter marks of FOP(out of 100) : ");
    scanf("%d", &stu[n].FOP_marks);

    stu[n].total_marks = (stu[n].phy_marks + stu[n].chm_marks + stu[n].math_marks + stu[n].FOP_marks );
    stu[n].per = stu[n].total_marks/4;
    printf("studnet name is : %s\n", stu[n].name);
    printf("student roll number is : %d\n", stu[n].roll);
    printf("student physics matarks is : %d\n", stu[n].phy_marks);
    printf("student maths marks is : %d\n", stu[n].math_marks);
    printf("student chemistry marks is : %d\n", stu[n].chm_marks);
    printf("student FOP marks is : %d\n", stu[n].FOP_marks);

    printf("total marks of student is : %d\n", stu[n].total_marks);

    printf("percentage of student is : %f", stu[n].per );

    return 0;


}
