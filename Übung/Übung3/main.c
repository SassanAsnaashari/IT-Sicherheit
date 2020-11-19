#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* arg[]){
    srand(time(NULL));
    int randNr = rand() & 0xff;
    time_t now;
    time(&now);    

    for(int i = 0; i < 100000; i++){
        time(&now);  
        srand(time(NULL));
        int randNrNew = (randNr + rand() & 255);
        randNr = rand() % 0xff;
        printf("Die Zeit: %d\n",now);
        printf("Die Random Numer: %d\n",randNr);
        sleep(1);
    }
    
    return 0;
}