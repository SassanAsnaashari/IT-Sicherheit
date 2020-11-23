#include <stdio.h>
#include <time.h>
/**
 * Gibt 5 Zufallszahlen aus, mit 5 verschiedenen Seeds. Zu jeder dieser Zahl 
 * werden 20 Nachfolger ausgedruckt
 * Diese Nachfolger, koennen dann zum Knacken des Casinos genutzt werden. 
 */
int main()
{   
   time_t timer;
   time(&timer);
   for(int i = 0;i<5;i++){
   srand(timer);
   printf("Die Zeit ist:%ld , Die Nummer ist: %d\n",timer,rand() &0xff);
   printf("Die Zeit ist:%ld , Die Nummer ist: %d\n",timer,rand() &0xff);
   printf("Die Zeit ist:%ld , Die Nummer ist: %d\n",timer,rand() &0xff);
   printf("Die Zeit ist:%ld , Die Nummer ist: %d\n",timer,rand() &0xff);
   printf("Die Zeit ist:%ld , Die Nummer ist: %d\n",timer,rand() &0xff);
   printf("Die Zeit ist:%ld , Die Nummer ist: %d\n",timer,rand() &0xff);
   printf("Die Zeit ist:%ld , Die Nummer ist: %d\n",timer,rand() &0xff);
   printf("Die Zeit ist:%ld , Die Nummer ist: %d\n",timer,rand() &0xff);
   printf("Die Zeit ist:%ld , Die Nummer ist: %d\n",timer,rand() &0xff);
   printf("Die Zeit ist:%ld , Die Nummer ist: %d\n",timer,rand() &0xff);
   printf("Die Zeit ist:%ld , Die Nummer ist: %d\n",timer,rand() &0xff);
   printf("Die Zeit ist:%ld , Die Nummer ist: %d\n",timer,rand() &0xff);
   printf("Die Zeit ist:%ld , Die Nummer ist: %d\n",timer,rand() &0xff);
   printf("Die Zeit ist:%ld , Die Nummer ist: %d\n",timer,rand() &0xff);
   printf("Die Zeit ist:%ld , Die Nummer ist: %d\n",timer,rand() &0xff);
   printf("Die Zeit ist:%ld , Die Nummer ist: %d\n",timer,rand() &0xff);
   printf("Die Zeit ist:%ld , Die Nummer ist: %d\n",timer,rand() &0xff);
   printf("Die Zeit ist:%ld , Die Nummer ist: %d\n",timer,rand() &0xff);
   printf("Die Zeit ist:%ld , Die Nummer ist: %d\n",timer,rand() &0xff);
   printf("Die Zeit ist:%ld , Die Nummer ist: %d\n",timer,rand() &0xff);
   printf("Die Zeit ist:%ld , Die Nummer ist: %d\n",timer,rand() &0xff);
   printf("Die Zeit ist:%ld , Die Nummer ist: %d\n",timer,rand() &0xff);
   printf("Die Zeit ist:%ld , Die Nummer ist: %d\n",timer,rand() &0xff);
   printf("Die Zeit ist:%ld , Die Nummer ist: %d\n",timer,rand() &0xff);
   printf("****************************\n");
   timer++;
   }
    
   return 0;
}