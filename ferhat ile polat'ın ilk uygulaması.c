#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int yol;
    int zaman;
    int hiz;
    char harf;
	printf("Polat ile Ferhat'in ilk uygulamasi \n",harf);
    printf("Hesaplamak istediginiz hizin yol uzunlugunu giriniz = \n ",yol);
    scanf("%d",&yol);
    printf("Hesaplamak istediginiz hizin zamanini giriniz = \n ",zaman);
    scanf("%d",&zaman);
    hiz=yol/zaman;
    printf("sonuc=%d",hiz);
    
    
    
	return 0;
}