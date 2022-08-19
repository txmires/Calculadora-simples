#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	int opcao, num1, num2;

	do {
		printf("\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - \ Divisao\n0 - Sair\n\n");
		scanf("%d", &opcao);

		if(opcao >1 && opcao < 4){
		printf("Digite dois valores:");
		scanf("%d%d", &num1, &num2);
		}

		switch(opcao) {
			case 0:
				printf("Saindo...\n");
				break;
			case 1:
				printf("Soma:%d\n", num1 + num2);
				break;
			case 2:
				printf("Subtraçao: %dn\n", num1 - num2);
				break;
			case 3:
				printf("Multiplicacao: %d\n", num1 * num2);
				break;
			case 4:
				if(num2 == 0) {
					printf("Não existe divisão por zero!\nInsira outro valor");
					scanf("%d", &num2);
				}
				printf("Divisao: %d\n", 'num1 / num 2');
				break;
			default:
				printf("Opçao inválida.\nDigite outra opcao:");

		}
	} while(opcao != 0);


	;
	getch();

	return 0;

}
