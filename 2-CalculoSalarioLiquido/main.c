#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>

/* (CC3P17)/AUTOR: */
/* MATHEUS VINÍCIUS BRASIL MORAES */

void clscr(){
    system("@cls||clear");
}
void gotoxy(int x, int y){
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD){x-1,y-1});
}

void main() {

/*Dados de Entrada*/
char nome_funcionario[40];
float salario_bruto, salario_liquido, desconto_inss_trabalhador, valor_horas, desconto_horas;
int horas_trabalhadas;


/*Entrando com Dados*/
clscr();
gotoxy(10,5);
printf("Calculo do Salario Liquido");
gotoxy(10,10);
printf("Digite o Nome do Funcionario:");
scanf("%s" ,&nome_funcionario);
gotoxy(10,12);
printf("Informe o Salario Bruto:");
scanf("%f" ,&salario_bruto);
gotoxy(10,14);
printf("Digite o Numero de Horas Trabalhadas:");
scanf("%i" , &horas_trabalhadas);

/*Cálculo do Salário Líquido*/	
valor_horas = salario_bruto / 240 ;
desconto_horas = valor_horas * horas_trabalhadas ;
desconto_inss_trabalhador= 0.085f * salario_bruto;
		
salario_liquido = salario_bruto - desconto_horas - desconto_inss_trabalhador;


/*Output para o Usuario*/
gotoxy(10, 18);
printf("Caro(a) Senhor(a) %s, O Calculo do Salario Liquido foi de: %.2f\n", nome_funcionario, salario_liquido);
gotoxy(10, 20);
system("pause");

}
