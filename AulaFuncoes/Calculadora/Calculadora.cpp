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

float lerValor()
{
	float a;

	printf("Digite o valor ");
	scanf_s("%f", &a);

	return a;	
}

int main()
{
	float primeiroValor = lerValor();
	float segundoValor = lerValor();
	float resultSoma = OperacaoSoma(primeiroValor, segundoValor);
	float resultSub = OperacaoSub(primeiroValor, segundoValor);
	float resultMulti = OperacaoMulti(primeiroValor, segundoValor);
	float resultDiv = OperacaoDiv(primeiroValor, segundoValor);

	printf("Resultado da soma %f", resultSoma);
	printf("Resultado da SUBTRA��O %f", resultSub);
	printf("Resultado da multiplica��o %f", resultMulti);
	printf("Resultado da divs�o %f", resultDiv);

	system("pause");

    return 0;
}

