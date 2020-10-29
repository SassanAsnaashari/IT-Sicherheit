#include <stdio.h>

void printAll(int* count, int size)  {
    for(int i = 0;i<257;i++){
        if(count[i]!=0 && i >=65){
        printf("%c : %d Vorkommen: %f\n ",i,count[i],(((float)count[i]/(size))*100));
        }
    }
}
void countChiffre(FILE* fp){
    char tmp = '0';
    char enc;
    int count[256];
    int d=0;
    FILE *wp = fopen("ecodedFile.txt", "w");
    if(wp == NULL){
        printf("Attention, file not open");
    }
    for(int i=0;i<257;i++){
         count[i] = 0;
    }


    while(tmp != EOF){
        tmp = fgetc(fp);
        enc = tmp;
        if(tmp  =='\xbc'){
            count[252]++;
        }if(tmp  =='\x9f'){
            count[223]++;
        }if(tmp  =='\xb6'){
            count[246]++;
        }if(tmp  =='\xa4'){
            count[228]++;
        }
        else{
            if(tmp < 97 && tmp > 64){
                tmp += 32;
            }
            count[tmp]++;
        }
        if(tmp =='\x9f'){
            enc = 'd';
        }
        if(tmp =='\xa4'){
            enc = 'w';
        }
        if(tmp == 'V' || tmp == 'v'){
            enc = 'e';
        }

        if(tmp == 'i'){
            enc = 's';
        }if(tmp == 'r'){
            enc = 'i';
        }
        if(tmp =='o'){
            enc = 'r';
        }
        if(tmp =='\xbc'){
            enc = 'n';
        }
        if(tmp =='p'){
            enc = 'a';
        }
        if(tmp == 'm'){
            enc = 'u';
        }
        if(tmp == '_'){
            enc = 'w';
        }
        if(tmp == 'e'){
            enc = 't';
        }
        if(tmp == 'S' || tmp =='s'){
            enc = 'f';
        }
        if(tmp == 'Q' || tmp =='q'){
            enc = 'h';
        }
        if(tmp == 'J' || tmp =='j'){
            enc = 'm';
        }
        if(tmp =='K' || tmp == 'k'){
            enc = 'l';
        }
        if(tmp =='Y' || tmp == 'y'){
            enc = 'g';
        }
        if(tmp =='W' || tmp == 'w'){
            enc = 'b';
        }
        if(tmp =='h' || tmp == 'H'){
            enc = 's';
        }
        if(tmp =='T' || tmp == 't'){
            enc = 'z';
        }
        if(tmp == '\xb6'){
            enc = 'k';
        }
        if(tmp =='g' || tmp =='G'){
            enc = 'o';
        }
        if(tmp =='\xa4' || tmp =='\x84'){
            enc = 'w';
        }

        if(tmp =='U' || tmp =='u'){
            enc = 'v';
        }
        if(tmp =='F' || tmp =='f'){
            enc = 'j';
        }
        if(tmp =='A' || tmp =='a'){
            enc = 'p';
        }
        if(tmp =='d' || tmp == 'D'){
            enc = 'u';
        }
        d++;
        putchar(tmp);
        putc(enc,wp);
    }
    printf("%d\n",d);
    printAll(count,d-1040);

}
int main() {
    FILE *fp = fopen("interessantesDokument.txt", "r");
    if (fp == NULL ) {
        printf("Fehler, File konnt nicht geöffnet werden");
    } else{
        countChiffre(fp);
    }
    return 0;
    }
