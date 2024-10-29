#include <stdio.h>

int main() {
    int day1, month1, year1, day2, month2, year2;
    int yearsDiff, monthsDiff, daysDiff;

    printf("Wartości podawaj w postaci liczby int, nie słownie!\n");
    printf("Podaj dzień1: ");
    scanf("%d", &day1);
    printf("Podaj miesiąc1: ");
    scanf("%d", &month1);
    printf("Podaj rok1: ");
    scanf("%d", &year1);
    printf("Podaj dzień2: ");
    scanf("%d", &day2);
    printf("Podaj miesiąc2: ");
    scanf("%d", &month2);
    printf("Podaj rok2: ");
    scanf("%d", &year2);

    if (year1 > year2 || (year1 == year2 && month1 > month2) ||
        (year1 == year2 && month1 == month2 && day1 > day2)) {

        int tempDay = day1;
        day1 = day2;
        day2 = tempDay;

        int tempMonth = month1;
        month1 = month2;
        month2 = tempMonth;

        int tempYear = year1;
        year1 = year2;
        year2 = tempYear;
    }

    yearsDiff = year2 - year1;

    if (month2 >= month1) {
        monthsDiff = month2 - month1;
    } else {
        monthsDiff = 12 + month2 - month1;
        yearsDiff--;
    }

    if (day2 >= day1) {
        daysDiff = day2 - day1;
    } else {
        int daysInPreviousMonth;
        int prevMonth = month2 - 1;
        int prevYear = year2;

        if (prevMonth == 0) {
            prevMonth = 12;
            prevYear--;
        }

        if (prevMonth == 1 || prevMonth == 3 || prevMonth == 5 || prevMonth == 7 ||
            prevMonth == 8 || prevMonth == 10 || prevMonth == 12) {
            daysInPreviousMonth = 31;
        } else if (prevMonth == 4 || prevMonth == 6 || prevMonth == 9 || prevMonth == 11) {
            daysInPreviousMonth = 30;
        } else if (prevMonth == 2) {
            if ((prevYear % 4 == 0 && prevYear % 100 != 0) || (prevYear % 400 == 0)) {
                daysInPreviousMonth = 29;
            } else {
                daysInPreviousMonth = 28;
            }
        }

        daysDiff = daysInPreviousMonth + day2 - day1;
        if (monthsDiff == 0) {
            monthsDiff = 11;
            yearsDiff--;
        } else {
            monthsDiff--;
        }
    }

    printf("Różnica wynosi: %d lat, %d miesięcy, %d dni\n", yearsDiff, monthsDiff, daysDiff);

    return 0;
}