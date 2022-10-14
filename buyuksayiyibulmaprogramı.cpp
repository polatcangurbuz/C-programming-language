#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {	
float a,b,c;
	printf("uc sayi giriniz:   ");
	scanf("%f %f %f",&a,&b,&c);
	if(a>b){
	  if(a>c){
		printf(	"en buyuk sayi :%.2f",a);
		}
		else{
	
		printf(	"en buyuk sayi :%.2f",c);
			}
		}
		else{
			if(b>c)
			{
			printf(	"en buyuk sayi :%.2f",b);
			}
			else{
				printf(	"en buyuk sayi :%.2f",c);
				
			}
		}
		getch();
}
