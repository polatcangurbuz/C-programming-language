#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int sayi,i,topl=0;
	printf("Pozitif bir sayi giriniz:");
	scanf("%d",&sayi);
	for(i=1;i<=sayi;i++){
   topl=topl+i;
	}
	printf("0 dan '%d'e kadar olan sayilarin toplami: %d",sayi,topl);
	getch();
	
	return 0;
}