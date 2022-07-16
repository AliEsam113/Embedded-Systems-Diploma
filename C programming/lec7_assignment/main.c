#include <stdio.h>
#define PI 3.14
#define area(r) (PI*(r)*(r))
struct SStudent
{
    char  name[20];
    int roll;
    double marks;
};
struct Sdistance
{
    double feet;
    double inch;
};
struct Scomplex
{
    float real;
    float imaginary;
};
double add (struct Sdistance d1,struct Sdistance d2);
struct Scomplex add_complex (struct Scomplex n1,struct Scomplex n2);
double inches_to_feet(double inch);
int main() {
    struct SStudent student;
    struct Sdistance s1,s2;
    struct Scomplex n1,n2,sum;
    struct SStudent students [20];
    int radius;
    float area;
    /*
   printf("Enter the radius \n");
   scanf("%d",&radius);
   area=area(radius);
   printf("Area = %f",area);
   printf("Enter student information\n");
   printf("Enter student name :");
   gets(student.name);
   printf("Enter student roll number :");
   scanf("%d",&student.roll);
   printf("Enter student marks :");
   scanf("%lf",&student.marks);
   printf("///////////////////\nDisplaying information : \n");
   printf("student name :%s\n",student.name);
   printf("student name :%d\n",student.roll);
   printf("student name :%lf\n",student.marks);

   printf("Enter information for distance 1 : \n");
   printf("Enter feet :\n");
   scanf("%lf",&s1.feet);
   printf("Enter inches :\n");
   scanf("%lf",&s1.inch);
   fflush(stdin);
   fflush(stdout);
   printf("Enter information for distance 2 : \n");
   printf("Enter feets :\n");
   scanf("%lf",&s2.feet);
   printf("Enter inches :\n");
   scanf("%lf",&s2.inch);
   printf("sum of distances : %lf \n", add(s1,s2));

   printf("Enter information for complex number 1 : \n");
   printf("Enter real and imaginary respectively :\n");
   scanf("%f %f",&n1.real,&n1.imaginary);
   fflush(stdin);
   fflush(stdout);
   printf("Enter information for complex number 2 : \n");
   printf("Enter real and imaginary respectively :\n");
   scanf("%f %f",&n2.real,&n2.imaginary);
   sum= add_complex(n1,n2);
   printf("sum=%f+%fi",sum.real,sum.imaginary);
    */
    printf("Enter students information\n");
    for (int i = 0; i < 3; ++i) {
        students[i].roll=i+1;
        printf("for student no %d \n",students[i].roll);
        printf("Enter name : \n");
        scanf("%s",students[i].name);
        printf("Enter marks :\n");
        scanf("%lf",&students[i].marks);
        printf("\n");
    }
    fflush(stdin);
    fflush(stdout);
    printf("Displaying information : \n");
    for (int i = 0; i < 3; ++i) {
        printf("info for student no %d are : \n",students[i].roll);
        printf("Name : %s",students[i].name);
        printf("marks : %lf",students[i].marks);
    }
    return 0;
}
double add (struct Sdistance d1,struct Sdistance d2)
{
    double sum=d1.feet+ inches_to_feet(d1.inch)+d2.feet+ inches_to_feet(d2.inch);
    return sum;
}
double inches_to_feet(double inch)
{
    return inch*0.08333333;
}
struct Scomplex add_complex (struct Scomplex n1,struct Scomplex n2)
{
    struct Scomplex sum;
    sum.real=n1.real+n2.real;
    sum.imaginary=n1.imaginary+n2.imaginary;
    return sum;
}