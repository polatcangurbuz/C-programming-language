#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	basadon:
		printf("bir sayi giriniz:");
		scanf("%d",&n);
		printf("girdiginiz sayi %d \n",n);
		goto basadon;
		
	return 0;
}