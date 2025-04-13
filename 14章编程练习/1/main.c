#include <stdio.h>
#include <string.h>
#include <myiofuncs.h>

struct Month {
    char name[10];
    char nameAbbr[4];
    unsigned char darNum;
    unsigned char num;
};

struct Month months[12] = {
    { "January", "Jan", 31, 1 },
    { "February", "Feb", 28, 2 },
    { "March", "Mar", 31, 3 },
    { "April", "Apr", 30, 4 },
    { "May", "May", 31, 5 },
    { "June", "Jun", 30, 6 },
    { "July", "Jul", 31, 7 },
    { "August", "Aug", 31, 8 },
    { "September", "Sep", 30, 9 },
    { "October", "Oct", 31, 10 },
    { "November", "Nov", 30, 11 },
    { "December", "Dec", 31, 12 }
};

// unsigned short dayNumberToMonth(unsigned char month) {
//     register unsigned char i = 0;
//     unsigned short dayNumber = 0;
    
//     for (; i < month; ++i) {
//         dayNumber += months[i].num;
//     }
    
//     return dayNumber;
// }
unsigned short dayNumToMon(const char * monthName);

int main(void) {
    char monthName[10];
    register unsigned i = 0;

    printf("Please enter the name of the month"
           " to calculate the total number of days"
           " in a year to that month:\n");

    while (s_gets(monthName, 10) != 0) {
        for (i = 0; i < 12; ++i) {
            if (strcmp(monthName, months[i].name) == 0 || 
                strcmp(monthName, months[i].nameAbbr) == 0)
                {
                    printf("Total %hu days in a year to that month.\n", 
                           dayNumToMon(monthName));
                    return 0;
                }
        }
        printf("Invalid month name, please re-enter:");
    }

    return 0;
}

unsigned short dayNumToMon(const char * monthName) {
    unsigned short dayNum = 0;
    register unsigned i = 0;

    for (i = 0; i < 12; ++i) {
        dayNum += months[i].darNum;
        if (strcmp(monthName, months[i].name) == 0 || 
            strcmp(monthName, months[i].nameAbbr) == 0)
            {
                return dayNum;
            }
    }

    return 0;
}