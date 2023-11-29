#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef struct Song
{
    char title[32];
    char artist[32];
    short duration;
} song_t;


struct Cell
{
    struct Song song;
    struct Cell *pNext; //punta alla canzone dopo
};


void printSong(song_t song){
    printf("Song title: %s\n", song.title);
    printf("Song composer: %s\n", song.artist);
    printf("Song duration: %d s\n", song.duration);
}


int main(){
    song_t fuoridaltunnel;
    struct Song *pCanzone;
    pCanzone = &fuoridaltunnel;
    strcpy(fuoridaltunnel.title, "fuori dal tunnel");
    strcpy(fuoridaltunnel.artist, "Caparezza");
    fuoridaltunnel.duration = 210;
    printSong(fuoridaltunnel);
    printf("%s\n", pCanzone -> title); //sono la steessa cosa
    printf("%s\n", (*pCanzone).title); //però così è più disordinato
}