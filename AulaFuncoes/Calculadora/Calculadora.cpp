// Calculadora.cpp : Defines the entry point for the console application.
//

#include "stdafx.h";
#include "stdlib.h";


float OperacaoSoma(float a, float b)
{
	float resultSoma;
	resultSoma = a + b;
	return resultSoma;
}

float OperacaoSub(float a, float b)
{
	float resultSub;
	resultSub = a - b;
	return resultSub;
}
float OperacaoMulti(float a, float b)
{
	float resultMulti;
	resultMulti = a * b;
	return resultMulti;
}

float OperacaoDiv(float a, float b)
{
	float resultDiv;
	resultDiv = a / b;
	return resultDiv;
}

float lerValorEOperar()
{
	float a;

	printf("Digite o valor ");
	scanf_s("%f", &a);

	return a;	
}

int main()
{
	float primeiroValor = lerValorEOperar();

	float resultSoma = OperacaoSoma(primeiroValor, b);
	OperacaoSub(a, b);
	OperacaoMulti(a, b);
	OperacaoDiv(a, b); 

	printf("Resultado da soma %f", resultSoma);
	printf("Resultado da soma %f", resultSub);
	printf("Resultado da soma %f", resultMulti);
	printf("Resultado da soma %f", resultDiv);


    return 0;
}

