#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int yol;
    int zaman;
    int hiz;
    char harf;
	printf("Hız hesaplama programima hosgeldiniz \n",harf);
    printf("Hesaplamak istediginiz hizin yol uzunlugunu giriniz = \n ",yol);
    scanf("%d",&yol);//klavyeden input(veri girişi)almak için bu fonksiyon kullanılır.
    printf("Hesaplamak istediginiz hizin zamanini giriniz = \n ",zaman);
    scanf("%d",&zaman);
    hiz=yol/zaman;//aritmetik işlem
    printf("sonuc=%d",hiz);
    
    
    
	return 0;
}
