#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>

/* (CC3P17)/AUTOR: */
/* MATHEUS VINÍCIUS BRASIL MORAES */
/* Update 02/09/2023 */
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void clscr(){
    system("@cls||clear");
}
void gotoxy(int x, int y){
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD){x-1,y-1});
}

/*Referente ao Exercicio 41 de Estrutura de Dados */

/*Declaração de Variavéis */

char Nome_Funcionario[30];
int Cod_Funcao, Descontos;
float Promocao, qtd_bonus_promocoes, INSS, IR , Seguro_saude;
float Salario_bruto, Salario_liquido, Salario_liquidoTipo2,Salario_liquidoTipo3,Salario_liquidoTipo4;
float Desconto1, Desconto2, Desconto3, Desconto4, Desconto5;
float Desconto_INSS1, Desconto_INSS2, Desconto_INSS3, Desconto_INSS4, Desconto_INSS5, Desconto_IR1, Desconto_IR2, Desconto_IR3, Desconto_IR4;
BOOLEAN true;

/*Função Main */

int main(void) 
{	

	clscr();
	gotoxy(10,5);
	printf("Calculo do Salario Liquido com Descontos e Bonus de Producao!");
	gotoxy(10, 10);
	printf("Digite seu Nome :");
	scanf("%s", &Nome_Funcionario);
	gotoxy(10, 12);
	printf("Informe o Salario Bruto: ");
    scanf("%f", &Salario_bruto);
	gotoxy(10, 14);
    printf("Entre com o codigo da funcao: ");
    scanf("%i", &Cod_Funcao);
    gotoxy(10, 16);
    printf("Informe a quantidade de promocoes: ");
    scanf("%f", &qtd_bonus_promocoes);
    gotoxy(10, 18);
    printf("Tem INSS, digite 1 :");
    scanf("%i", &INSS);
    gotoxy(10, 20);
    printf("Tem Imposto de Renda, digite 1 :");
    scanf("%i", &IR);
    gotoxy(10, 22);
    
/* Calcular Promoção */
	
	if(Cod_Funcao >= 0 && Cod_Funcao <=100)
	{
	Promocao = qtd_bonus_promocoes * 0.15f;
		if(Promocao >= 0.15)
			Promocao += 150;
	}
	else if(Cod_Funcao >= 100 && Cod_Funcao <=200)
	{
	Promocao = qtd_bonus_promocoes * 0.25f;
		if(Promocao >= 0.25)
			Promocao += 250;
	}
	else if(Cod_Funcao >= 201 && Cod_Funcao <= 300)
	{
	Promocao = qtd_bonus_promocoes * 0.35f;
		if(Promocao >= 0.35)
			Promocao += 350;
	}
		else if(Cod_Funcao >= 301 && Cod_Funcao <= 500)
	{
	Promocao = qtd_bonus_promocoes * 0.45f;
		if(Promocao >= 0.45)
			Promocao += 450;
	}
	

/*Entrada de Dados INSS */

    Desconto_INSS1 = 45;
    Desconto_INSS2 = 55;
    Desconto_INSS3 = 60;
    Desconto_INSS4 = 65;
    Desconto_INSS5 = 70;
    
	if (INSS = true && Salario_bruto <=380)
	{
		Salario_bruto * Desconto_INSS1;
	}
	else if (INSS = true && Salario_bruto >=381 <= 600 )
	{
			Salario_bruto * Desconto_INSS2;
	}
	else if (INSS = true && Salario_bruto >=601 <=1000)
	{
			Salario_bruto * Desconto_INSS3;
	}
	else if (INSS = true && Salario_bruto >=1001 <=1300)
	{
			Salario_bruto * Desconto_INSS4;
	}
	else if (INSS = true && Salario_bruto>1320)
	{
		 	Salario_bruto * Desconto_INSS5;
	}
	
/* ANtes Vai subtrair só Desconto_INSS5 abaixo! */
		
		
/*Entrada de Dados IR */

    Desconto_IR1 = 50;
    Desconto_IR2 = 65;
    Desconto_IR3 = 70;
    Desconto_IR4 = 75;
    
	if (IR = true && Salario_bruto <=1200)
	{
		Salario_bruto * Desconto_IR1;
	}
	else if (IR = true && Salario_bruto >=1201 <=1900)
	{ 
			Salario_bruto * Desconto_IR2; 
	}
	else if (IR = true && Salario_bruto >=1901 <=2500)
	{
			Salario_bruto * Desconto_IR3;
	}
	else if (IR = true && Salario_bruto >2500)
	{
			Salario_bruto * Desconto_IR4;
		/*Para calcular salario bruto ou IR*/
	}
	
/*Cálculo da Funcao*/

/* float CalcularSalario() */
	
	Desconto1 = Desconto_INSS1 + Desconto_IR1;
	Desconto2 = Desconto_INSS2 + Desconto_IR2;
	Desconto3 =	Desconto_INSS3 + Desconto_IR3;
	Desconto4 = Desconto_INSS4 + Desconto_IR4;
	Desconto5 = Desconto_INSS5;
	
	Seguro_saude = 0.15 * Salario_bruto;

	Salario_liquido = Salario_bruto - Desconto1 - Seguro_saude;
	Salario_liquidoTipo2 = Salario_bruto - Desconto2 - Seguro_saude ;
	Salario_liquidoTipo3 = Salario_bruto - Desconto3 - Seguro_saude ;
	Salario_liquidoTipo4 = Salario_bruto - Desconto4 - Seguro_saude ; 

	
/*Output para o Usuario*/
	gotoxy(10,24);
	int desconto;

	printf ("Selecione o tipo de Desconto, de 0 a 3:");
	scanf("%d", &desconto);
	
	switch (desconto)
{
	case 0 :
	gotoxy(10, 26);
	printf("Caro(a) Senhor(a) %s\n",Nome_Funcionario);
	gotoxy(10, 28);
	printf("O Calculo do Salario Liquido foi de: R$%.2f\n" ,Salario_liquido);
	break;

	case 1 :
	gotoxy(10, 26);
	printf("Caro(a) Senhor(a) %s\n", Nome_Funcionario);
	gotoxy(10, 28);
	printf("O Calculo do Salario Liquido foi de: R$%.2f\n" ,Salario_liquidoTipo2);
	break;
	
	case 2 :
	gotoxy(10, 26);
	printf("Caro(a) Senhor(a) %s\n", Nome_Funcionario);
	gotoxy(10, 28);
	printf("O Calculo do Salario Liquido foi de: R$%.2f\n" ,Salario_liquidoTipo3);
	break;
	
	case 3 :
	gotoxy(10, 26);
	printf("Caro(a) Senhor(a) %s\n", Nome_Funcionario);
	gotoxy(10, 28);
	printf("O Calculo do Salario Liquido foi de: R$%.2f\n" ,Salario_liquidoTipo4);
	break;
	
    default :
    printf ("Desconto invalido!\n");
    
}
	getch();
	
	gotoxy(10, 30);
	printf("Seu bonus de Promocao foi de: R$%.2f\n" ,Promocao);
	
	return 0;

}	
