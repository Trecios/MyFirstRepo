//
//  Math.cpp
//
//  Created by Eiji Adachi Medeiros Barbosa 
//

#include "Math.hpp"

int add(int a, int b)
{
    return t_add(a, b, b);

}

int t_add(int a, int b, int soma)
{
	if(a == 0)
	{
		return soma;
	}
	else if (a > 0)
	{
		return t_add(a-1, b, soma+1);	
	}
	else
	{
		return t_add(a+1, b, soma-1);
	}
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
	return t_multiply(a, b, b);

}

int t_multiply(int a, int b, int multiplicacao)
{
	if(a == 1)
	{
		return multiplicacao;
	}
	else if (a > 0)
	{
		return t_multiply(a-1, b, multiplicacao+b);	
	}
	else
	{
		return t_multiply(a+1, b, multiplicacao-b);
	}
}

int divide(int a, int b)
{
	return a / b;
}

int factorial(int a)
{
	int fat = 1;
	if(a == 0){
		return 1;
	}

	else
	{
		return fat = a * factorial(a-1);
	}
}