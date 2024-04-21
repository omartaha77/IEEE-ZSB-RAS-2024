#include <stdio.h>
struct test1
{
    int id;
    char name[50];
    char class_id;
};
struct test2
{
    char name[50];
    int id;
    char class_id;
};

int main()
{
    printf("Size of struct test1 : %d \n", sizeof(struct test1));

    printf("Size of struct test2 : %d \n", sizeof(struct test2));

    return 0;
}

// there is difference between test1 and test becuse compiler add padding to  improve performance in terms of memory access
// we can neglect it by add * #pragma pack(1) * buy now less performance And less memory usage
