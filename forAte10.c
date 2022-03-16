#include <stdio.h>
int main(){
	int contador;
	printf("Digite um numero abaixo de 10: ");
	scanf("%d", &contador);
	for(contador; contador <= 10; contador++)
	printf("Oia ele subindo %d \n", contador);
	getch();
}

