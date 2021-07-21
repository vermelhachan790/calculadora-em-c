#include <stdio.h>
#include <conio.h>

int main()
{ //declaracoes
int numero[2];
	numero[0];
	numero[1];
int recebe = 0;
int resultado;
	//printfs
	textcolor(WHITE); //funcao de cor da lib conio
printf("Calculadora, digite: 1 para + 2 para x e 3 para ÷ ");
//teclado
scanf("%i",&recebe);
//Switch
 switch (recebe)
 {
 	case 1:
 	 textcolor(GREEN);
 	 printf("Digite 2 numeros para somar ");
      if (recebe == 1)
      {
      scanf("%i",&numero[0]);
      scanf("%i",&numero[1]);
      resultado = numero[0] + numero[1];
      printf("%i", resultado);
      }
        break;
 	 	 case 2:
 	 textcolor(RED);
 	 printf("Digite 2 numeros para multiplicar");
 	 if (recebe == 2)
      {
      scanf("%i",&numero[0]);
      scanf("%i",&numero[1]);
      resultado = numero[0] * numero[1];
      printf("%i", resultado);
      }
 	 break;
 	 case 3:
 	 textcolor(BLUE);
 	 printf("Digite 2 numeros para dividir");
 	 if (recebe == 3)
      {
      scanf("%i",&numero[0]);
      scanf("%i",&numero[1]);
      resultado = numero[0] / numero[1];
      printf("%i", resultado);
      }
 	 break;
 }





}

