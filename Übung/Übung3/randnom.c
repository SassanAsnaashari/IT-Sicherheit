#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* arg[]){
    srand(time(NULL));
    int rand = rand() & 0xff;
    return 0;
}