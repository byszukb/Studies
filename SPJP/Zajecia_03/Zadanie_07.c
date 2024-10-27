#include <stdio.h>

int main() {
    int day, month, year;

    printf("Podaj dzien: ");
    scanf("%d", &day);
    printf("Podaj miesiac: ");
    scanf("%d", &month);
    printf("Podaj rok: ");
    scanf("%d", &year);

    if(month <= 12 && month >= 1) {
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            if(month == 2) {
                if(day <= 29 && day >= 1) {
                    printf("Data jest poprawna");
                }
                else {
                    printf("Data jest niepoprawna");
                }
            }
            else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
                if(day <= 31 && day >= 1) {
                    printf("Data jest poprawna");
                }
                else {
                    printf("Data jest niepoprawna");
                }
            }
            else if(month == 4 || month == 6 || month == 9 || month == 11) {
                if(day <= 30 && day >= 1) {
                    printf("Data jest poprawna");
                }
                else {
                    printf("Data jest niepoprawna");
                }
            }
        }
        else {
            if(month == 2) {
                if(day <= 28 && day >= 1) {
                    printf("Data jest poprawna");
                }
                else {
                    printf("Data jest niepoprawna");
                }
            }
            else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
                if(day <= 31 && day >= 1) {
                    printf("Data jest poprawna");
                }
                else {
                    printf("Data jest niepoprawna");
                }
            }
            else if(month == 4 || month == 6 || month == 9 || month == 11) {
                if(day <= 30 && day >= 1) {
                    printf("Data jest poprawna");
                }
                else {
                    printf("Data jest niepoprawna");
                }
            }
        }
    }
    else {
        printf("Data jest niepoprawna");
    }

        return 0;
}