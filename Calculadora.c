#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void main(){
setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3;
	int result;
	printf("Digite uma operação\n");

	scanf("%d", &n3);
	
	if(n3==1){
	printf("Digite o primeiro número");
	scanf("%d", &n1);
	printf("Digite o segundo número");
	scanf("%d", &n2);
	result = n1 + n2;
	printf("Resultado da soma de %d + %d:%d",n1,n2,result);
	}	
	
	if(n3==2){
	printf("Digite o primeiro número");
	scanf("%d", &n1);
	printf("Digite o segundo número");
        scanf("%d", &n2);
	result = n1 - n2;
	printf("Resultado da subtração %d - %d:%d",n1,n2,result);
	}

	if(n3==3){
	printf("digite o primeiro número");
	scanf("%d", &n1);
	printf("digite o segundo numero");
 	scanf("%d", &n2);
	result= n1 * n2;
	printf("Resultado da multiplicação %d * %d:%d",n1,n2,result);
	}
        
	if(n3==4){
        printf("digite o primeiro número");
        scanf("%d", &n1);
	printf("digite o segundo número");
	scanf("%d", &n2);
	result= n1 / n2;
	printf("Resultado da divisão %d / %d:%d",n1,n2,result);
	}}
        
	





