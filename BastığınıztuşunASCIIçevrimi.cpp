#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char tus;
	printf("bir tusa basin");
	tus=getch();
	printf("\nBastiginiz tus:%c \n",tus);
	printf("Bastiginiz tusun ASCII cevrimi:%d",tus);
	getch();
	return 0;
}