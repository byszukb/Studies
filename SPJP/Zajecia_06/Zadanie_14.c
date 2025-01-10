#include <stdio.h>

int sprawdzDate(int d, int m, int r) {
    if(m <= 0 || m > 12)
        return 0;

    if(m == 2) {
        if ((r % 4 == 0 && r % 100 != 0) || (r % 400 == 0)) {
            if(d < 0 || d > 29) {
                return 0;
            }
        }
        else {
            if(d < 0 || d > 28) {
                return 0;
            }
        }
    }
    if(m == 4 || m == 6 || m == 9 || m == 11) {
        if(d < 0 || d > 30) {
            return 0;
        }
    }
    else {
        if(d < 0 || d > 31) {
            return 0;
        }
    }
    return 1;
}

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
        return firstDate - secondDate;
    }
    else {
        return secondDate - firstDate;
    }
}

int main() {
    int r1, r2, m1, m2, d1, d2;
    printf("Podaj date, najpierw dzien, potem miesiac, potem rok:");
    scanf("%d\n%d\n%d", &d1, &m1, &r1);
    printf("Podaj druga date, najpierw dzien, potem miesiac, potem rok:");
    scanf("%d\n%d\n%d", &d2, &m2, &r2);
    if(!sprawdzDate(d1, m1, r1) || !sprawdzDate(d2, m2, r2)) {
        printf("Bledna data");
        return 0;
    }
    int result = daysDifference(r1, m1, d1, r2, m2, d2);
    printf("Roznica dni miedzy poprawnymi datami to: %d\n", result);
}