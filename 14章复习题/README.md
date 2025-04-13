## 1.

- 关键字错误：是 `struct` 而不是 `structure`；
- 成员声明语句末尾缺少 `;`；
- 整个结构的声明末尾缺少 `;`;
- 结构应该带有名称。

## 2.

```
6 1
22 Spiffo Road
S p

```

## 3.

```c
struct Month {
    char name[10];
    char nameAbbreviation[5];
    unsigned char dayNumber;
    unsigned char number;
};
```

## 4.

```c
struct Month months[12] = {
    { "January", "Jan", 31, 1 },
    { "February", "Feb", 28, 2 },
    { "March", "Mar", 31, 3 },
    { "April", "Apr", 30, 4 },
    { "May", "May", 31, 5 },
    { "June", "Jun", 30, 6 },
    { "July", "Jul", 31, 7 },
    { "August", "Aug", 31, 8 },
    { "September", "Sept", 30, 9 },
    { "October", "Oct", 31, 10 },
    { "November", "Nov", 30, 11 },
    { "December", "Dec", 31, 12 },
};
```

## 5.

```c
unsigned short dayNumberToMonth(unsigned char month) {
    register unsigned char i = 0;
    unsigned short dayNumber = 0;
    
    for (; i < month; ++i) {
        dayNumber += months[i].dayNumber;
    }
    
    return dayNumber;
}
```

## 6.

### a.

```c
LENS lensArr[10] = {
    ...
    { 500, 500 / 2.0, "Remarkata" },	// 第 3 个元素
    ...
};
```

### b.

```c
LENS lensArr[10] = {
    [2] = { 500, 500 / 2.0, "Remarkata" }  
};
```

## 7.

### a.

```
6
Arcturan
cturan
```

### b.

```c
deb.title.last;
```

### c.

```c
#include "starfolk.h"
#include <stdio.h>

void printBem(struct bem * pBem) {
    printf("%s %s is a %d-limbed %s.\n", 
           pBem->title.first, pBem->title.last, 
           pBem->limbs, pBem->type);
}
```

## 8.

### a.

```c
willie.born;
```

### b.

```c
pt->born;
```

### c.

```c
scanf("%d", &willie.born);
```

### d.

```c
scanf("%d", &pt->born);
```

### e.

```c
scanf("%s", willie.name.lname);
```

### f.

```c
scanf("%s", pt->name.lname);
```

### g.

```c
char ch = willie.name.fname[2];
```

### h.

```c
strlen(willie.name.fname) + strlen(willie.name.lname);
```

## 9.

```c
struct car {
    char name[20];
    float horsepower;
    unsigned grade;
    float whellBase;
    unsigned birthYear;
};
```

## 10.

### a.

```c
float getMPG(struct gas g) {
    return g.distance / g.gals;
}
```

### b.

```c
struct gas getMPG(struct gas g) {
    g.mpg = g.distance / g.gals;
    return g.mpg;
}
```

## 11.

```c
enum choices {
    no = 0,
    yes = 1,
    maybe = 2
};
```

## 12.

```c
char* (*pf)(char*, char);
```

## 13.

```c
double function1(double a, double b);
double function2(double a, double b);
double function3(double a, double b);
double function4(double a, double b);

double (*pf[4])(double, double) = {
  	function1, funtion2, funtion3, funtion4  
};

*pf[2](10.0, 2.5);
pf[2](10.0, 2.5);
```

