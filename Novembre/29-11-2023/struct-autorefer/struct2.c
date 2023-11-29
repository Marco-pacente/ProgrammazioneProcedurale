#include <stdlib.h>
#include <stdio.h>


typedef struct Song
{
    char title[32];
    char composer[32];
    short duration;
} song_t;


struct Cell
{
    struct Song song;
    struct Cell *pNext; //punta alla canzone dopo
};



int main(){
    song_t fuoridaltunnel;
}