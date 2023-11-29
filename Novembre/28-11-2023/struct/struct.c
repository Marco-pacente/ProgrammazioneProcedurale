#include <stdio.h>

struct Date
{
    short int day;
    short int month;
    short int year;
};

int main(){
    struct Date ieri;
    ieri.day = 27;
    ieri.month = 11;
    ieri.year = 2023;

    printf("Ieri era il %d/%d/%d\n", ieri.day, ieri.month, ieri.year);
}