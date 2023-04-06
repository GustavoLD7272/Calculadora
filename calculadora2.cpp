#include <stdio.h>

int main()
{
	float n1,n2,res;
	int conta;
	
	printf("Escreva um valor");
	scanf("%f",&n1); 
	
	printf("Escreva outro valor");
	scanf("%f",&n2);
	
	printf("escolha uma operacao\n");
	printf("1-soma\n");
	printf("2-multiplicacao\n");
	printf("3-subtracao\n");
	printf("4-divisao\n");
	scanf("%d",&conta); 
	
	switch ("%d",conta)
	{
		case 1 :
			res = n1 + n2;
			break;
			
		case 2 :
			res = n1 * n2; 
			break;
			
		case 3 :
			res= n1 - n2;
			break;
			
		case 4 :
			res = n1 / n2;
			break;
	}
	printf("o resultado é %f\n", res);
	return 0;
}
