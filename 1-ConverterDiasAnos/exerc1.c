#include <stdio.h>
/* (CC3P17)/AUTOR: */
/* MATHEUS VIN�CIUS BRASIL MORAES */

/*Primeiro Programa*/
	
void main() {

	/*Declara��o de Variav�is */
	int Dias;
	float Anos;
	printf("Entre com o numero de dias :");
	
	/*Entrada de Dados */
	scanf("%d", &Dias);
	
	/*Convers�o de Dias para Anos */
	Anos = Dias/365.25;
	printf("\n\n%d dias equivalem a %f anos.\n", Dias, Anos);
}
