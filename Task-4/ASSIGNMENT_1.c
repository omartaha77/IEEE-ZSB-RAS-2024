#include <stdio.h>
#include <string.h>
struct student_info
{
    int roll_num;
    char name[50];
    int age;
    char address[50];
    double marks;
};

int main()
{

    struct student_info student[15];
    for (int i = 0; i < 15; i++)
    {
        student[i].roll_num = i + 1;
        strcpy(student[i].name, "omar taha");
        student[i].age = 22;
        strcpy(student[i].address, "miya elqumh");
        student[i].marks = 86.4;
    }

    for (int i = 0; i < 15; i++)
    {
        printf("student %d\n", i + 1);
        printf("roll_num:%d\n", student[i].roll_num);
        printf("name:%s\n", student[i].name);
        printf("age:%d\n", student[i].age);
        printf("adress:%s\n", student[i].address);
        printf("marks:%.2f\n\n\n", student[i].marks);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>

struct student_info
{
    int roll_num;
    char name[50];
    int age;
    char address[50];
    double marks;
};

int student_info(struct student_info student[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        printf("Please enter information for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &student[i].roll_num);
        getchar();
        printf("Name: ");
        gets(student[i].name);
        printf("Age: ");
        scanf("%d", &student[i].age);
        getchar();
        printf("Address: ");
        gets(student[i].address);
        printf("Marks: ");
        scanf("%lf", &student[i].marks);
        printf("\n");
        if (student[i].marks < 12.0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    struct student_info student[15];
    int count = student_info(student, 15);

    for (int i = 0; i < 15; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Roll Number: %d\n", student[i].roll_num);
        printf("Name: %s\n", student[i].name);
        printf("Age: %d\n", student[i].age);
        printf("Address: %s\n", student[i].address);
        printf("Marks: %.2f\n\n", student[i].marks);
    }

    printf("Number of students with marks less than 12: %d\n", count);

    return 0;
}
