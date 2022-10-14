#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sayi,fakt,i,sayac,a;
	basadon:
	printf("\nFaktoriyelini hesaplamak istediginiz sayiyi giriniz:");
	scanf("%d",&sayi);
	fakt=1;
	for(i=1;sayi>=i;i++){
		fakt*=i;
	}
	printf("\nsonuc=%d",fakt);
	printf("\nIsleme devam etmek istiyorsaniz 1 yazin : ");
	scanf("%d",&a);
	if(a==1){
		goto basadon;
	}
	else{
			printf("Isleminiz bitmistir keyifli gunler dileriz. ");		
	}
	getch();
	return 0;
}