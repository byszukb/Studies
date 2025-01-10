#include <stdio.h>
#include <string.h>

int rekurencja(char slowo[], int left, int right) {
    if(left >= right) {
        return 1;
    }
    if(!(slowo[left] == slowo[right])) {
        return 0;
    }
    else if (slowo[left] == slowo[right]) {
        return rekurencja(slowo, left +1, right -1);
    }
}

int main() {
    char slowo[] = "abba";
    int size = strlen(slowo);
    int mid = size / 2;
    if(rekurencja(slowo, 0, size - 1)) {
        printf("Slowo to palindrom");
    }
    else {
        printf("Slowo to nie palindrom");
    }
}