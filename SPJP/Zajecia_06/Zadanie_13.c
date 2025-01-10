//Napisz funkcję, która przyjmuje jako argumenty d1,m1,r1,d2,m2,r2 reprezentujące dwie daty i zwróci liczbę dni różniącą te daty.
#include <stdio.h>
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    }
    return 0;
}

int daysInMonth(int month, int year) {
    int daysInEachMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) {
        return 29;
    }
    return daysInEachMonth[month - 1];
}
//ilosc dni od daty 0.0.0
int dateToDays(int year, int month, int day) {
    int days = 0;
    for(int i = 0; i < year; i++) {
        if(isLeapYear(i)) {
            days+= 366;
        }
        else {
            days+= 365;
        }
    }
    for(int i = 1; i < month; i++) {
        days+= daysInMonth(i, year);
    }
    days+= day;
    return days;
}

int daysDifference(int r1, int m1, int d1, int r2, int m2, int d2 ) {
    int firstDate = dateToDays(r1, m1, d1);
    int secondDate = dateToDays(r2, m2, d2);
    if(firstDate > secondDate) {
        return 2;
    }
    else {
        return 1;
    }
}

int main() {
    int r1 = 2003, r2 = 2003, m1 = 1, m2 = 3, d1 = 20, d2 = 25;
    int result = daysDifference(r1, m1, d1, r2, m2, d2);
    printf("%d\n", result);
}