
#include <stdio.h>


int countChiffre(FILE* fp){
    char tmp = '0';
    int count[256];
    for(int i=0;i<257;i++){
        count[i] = 0;
    }
    while(tmp != EOF){
        count[tmp]++;
        tmp = fgetc(fp);
        putchar(tmp);
    }
    return count;
}

void printAll(int* count){
    for(int i = 0;i<257;i++){
        printf("%d",count[i]);
    }
}

int main(){
    
    
    FILE* fp = fopen("interessantesDokument.txt","r");
    FILE* wp = fopen("encoded.txt","w");
    if(fp == NULL || wp == NULL){
        printf("Fehler, File konnt nicht geöffnet werden");
    }
    int* count = countChiffre(fp);
    printAll(count);
    return 0;
}
