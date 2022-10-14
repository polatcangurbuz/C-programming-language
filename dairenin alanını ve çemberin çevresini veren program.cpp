#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float b,c,r;
	int a;	
	printf("1-Dairenin alani\n");
	printf("2-Cemberin cevresi\n");
	printf("Islemini yapmak istediginiz formulun verilen sayisini giriniz:");
	scanf("%d",&a);
	if(a==1){
		printf("Islemini yapmak istediginiz dairenin yaricapini giriniz:");
	scanf("%f",&r);	
	}
	
	else{
		printf("Islemini yapmak istediginiz cemberin yaricapini giriniz:");
	scanf("%f",&r);
	}
		
		b=(3.14)*(r)*r;
		c=(2)*(3.14)*r;
	switch(a)
	{
		case 1:
		printf("Dairenin alani= %.2f",b);
		break;
		case 2:
		printf("cemberin cevresi: %.2f",c);	
		break;
		default:
			printf("bilinmeyen islemci\n");
			getch();
	}
	getch();
	
	return 0;
}