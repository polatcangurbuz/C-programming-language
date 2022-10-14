#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 int rastgele,a;
 basadon:
srand(time(NULL)); 
rastgele=5+rand()%25;

printf("rastgele cikan sayi : %d",rastgele);

printf("\nyeniden sayi uretilmesini istiyorsaniz 1'e basin : ");
scanf("%d",&a);
if(a==1){
	goto basadon;
}
else{
	printf("Keyifli gunler dileriz");
}
getch();

}