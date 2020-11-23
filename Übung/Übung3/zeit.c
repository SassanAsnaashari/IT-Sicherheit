#include<stdio.h>
#include<unistd.h>
#include<time.h>

int main(int argc, char* argv[]){
    time_t now;
    time_t yet;
    time(&yet);
    while(1){
        time(&now);
        time(&yet);
        if(now != yet){
            printf("Das ist die aktuelle Zeit: %ld\n",now);
        } 
        
    }

}