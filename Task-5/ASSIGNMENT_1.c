#include <stdio.h>
#include <string.h>
struct student_info
{
    unsigned roll_num : 4;
    unsigned int age : 8;
    unsigned int marks : 3;
    char address[50];
    char name[50];
};

void print_info(struct student_info student[], int num)
{
    for (int i = 0; i < num; ++i)
    {
        printf("Student %d:\n", i + 1);
        printf("Roll number: %d\n", student[i].roll_num);
        printf("Age: %d\n", student[i].age);
        printf("Marks: %d\n", student[i].marks);
        printf("Name: %s\n", student[i].name);
        printf("Address: %s\n", student[i].address);
        printf("\n");
    }
}

int main()
{
    struct student_info student[15];
    for (int i = 0; i < 15; i++)
    {
        student[i].roll_num = i + 1;
        strcpy(student[i].name, "omar taha");
        student[i].age = 22;
        strcpy(student[i].address, "miya elqumh");
        student[i].marks = 50;
    }
    print_info(student, 15);

    printf("Size of struct student_info: %d bytes\n", sizeof(struct student_info));

    return 0;
}
// 4 bit for roll number and 8bit for age and three bit for marks and 50 for address and 50 for name
// the total is 4bit + 3bit + 8bit + 100 bytes =103 bytes
// but the size is 104 why?
// becuse there is one byte for padding

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
typedef struct
{
    float real;
    float imag;
} Complex;

Complex add(Complex n1, Complex n2)
{
    Complex result;
    result.real = n1.real + n2.real;
    result.imag = n1.imag + n2.imag;
    return result;
}

int main()
{
    Complex num1, num2, sum;
    printf("please enter your first complex number\n");
    scanf("%f %f", &num1.real, &num1.imag);
    printf("please enter your second complex number\n");
    scanf("%f %f", &num2.real, &num2.imag);

    sum = add(num1, num2);
    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
typedef unsigned char uint8;
typedef signed char sint8;
typedef unsigned short uint16;
typedef signed short sint16;
typedef unsigned long uint32;
typedef signed long sint32;
typedef unsigned long long uint64;
typedef signed long long sint64;
typedef float float32;
typedef double float64;

int main()
{
    printf("Size of uint8: %zu bytes\n", sizeof(uint8));
    printf("Size of sint8: %zu bytes\n", sizeof(sint8));
    printf("Size of uint16: %zu bytes\n", sizeof(uint16));
    printf("Size of sint16: %zu bytes\n", sizeof(sint16));
    printf("Size of uint32: %zu bytes\n", sizeof(uint32));
    printf("Size of sint32: %zu bytes\n", sizeof(sint32));
    printf("Size of uint64: %zu bytes\n", sizeof(uint64));
    printf("Size of sint64: %zu bytes\n", sizeof(sint64));
    printf("Size of float32: %zu bytes\n", sizeof(float32));
    printf("Size of float64: %zu bytes\n", sizeof(float64));
    return 0;
}
