#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float yol;
    float zaman;
    float hiz;
    char harf;
	printf("Hiz hesaplama programima hosgeldiniz \n",harf);
    printf("Hesaplamak istediginiz hizin yol uzunlugunu giriniz = \n ",yol);
    scanf("%d",&yol);//klavyeden input(veri girişi)almak için bu fonksiyon kullanılır.
    printf("Hesaplamak istediginiz hizin zamanini giriniz = \n ",zaman);
    scanf("%d",&zaman);
    hiz=yol/zaman;//aritmetik işlem
    printf("sonuc=%.2f",hiz);/*.2 kullanmamızın nedeni sonuc değeri float çıktığı için virgülden sonra ne kadar değer
	görmek istiyorsak noktadan sonra o sayıyı yazıyoruz*/
	getch();//klavyeden enter tuşuna basılmasını beklediğimizden dolayı bu fonksiyonu kullanıyoruz.
	return 0;
}
