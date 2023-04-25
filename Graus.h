#include <stdio.h>

main(){
	float graus, C;
	
	printf("Digite um valor em graus Fahrenheit\n ");
	scanf("%f",&graus);
	
	C=(graus-32.0) * (5.0/9.0);
	
	printf("O valor em graus celsius eh:\n%f",C);	
}
