#include <stdio.h>
struct Song
{
    char title[64];
    char artist[32];
    char composer[32];
    short duration;
    struct Date published;
};

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
}