#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct Month {
    char name[10];
    char nameAbbr[4];
    unsigned char dayNum;
    unsigned char num;
} Month;

const char * monthNames[12] = {
    "January", 
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October", 
    "November",
    "December"
};

typedef struct Date {
    unsigned short year;
    unsigned char month;
    unsigned char day;
} Date;

void getDate(Date * pDate);
bool isMonthNameValid(const char * monthName);

int main(void) {
    Date date;

    printf("Please enter a date:\n");
    printf("day:");
    while (scanf("%hhu", &date.day) != 1 || 
           date.day < 1 || date.day > 31)
        {
            printf("Invalid entry, please re-enter:");
        }
    printf("month:");
    while (scanf("%hhu", &date.month) != 1 || 
           scanf("%s", )
           date.month < 1 || date.month > 31)
        {
            printf("Invalid entry, please re-enter:");
        }
    printf("year:");
    while (scanf("%hhu", &date.year) != 1 || 
           date.year < 1 || date.year > 31)
        {
            printf("Invalid entry, please re-enter:");
        }
    

    return 0;
}

void getDate(Date * pDate) {
    printf("Please enter a date:\n");
    printf("day:");
    while (scanf("%hhu", &pDate->day) != 1 || 
           pDate->day < 1 || pDate->day > 31)
        {
            printf("Invalid entry, please re-enter:");
        }
    printf("month:");
    while (scanf("%hhu", &pDate->month) != 1 || 
           pDate->month < 1 || pDate->month > 31)
        {
            printf("Invalid entry, please re-enter:");
        }
    printf("year:");
    while (scanf("%hhu", &pDate->year) != 1 || 
           pDate->year < 1 || pDate->year > 31)
        {
            printf("Invalid entry, please re-enter:");
        }
}

bool isMonthNameValid(const char * monthName) {
    if (monthName == NULL) return false;

    for ()
}