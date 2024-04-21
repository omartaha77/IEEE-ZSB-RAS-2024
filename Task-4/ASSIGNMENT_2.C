#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

int main()
{
    struct Date date1, date2;

    printf("Enter first date\n");
    printf("day: ");
    scanf("%d", &date1.day);
    printf("month: ");
    scanf("%d", &date1.month);
    printf("year: ");
    scanf("%d", &date1.year);

    printf("Enter second date \n");
    printf("day: ");
    scanf("%d", &date2.day);
    printf("month: ");
    scanf("%d", &date2.month);
    printf("year: ");
    scanf("%d", &date2.year);

    printf("First date: %d/%d/%d\n", date1.day, date1.month, date1.year);
    printf("Second date: %d/%d/%d\n\n", date2.day, date2.month, date2.year);

    if (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year)
    {
        printf("Dates are equal\n");
    }
    else
    {
        printf("Dates are not equal\n");
    }

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>

struct info
{
    char name[50];
    int age;
};
int main()
{
    struct info person;
    strcpy(person.name, "omar taha");
    person.age = 22;
    struct info *ptr;
    ptr = &person;
    printf("name: %s\nage: %d", ptr->name, ptr->age);
}
