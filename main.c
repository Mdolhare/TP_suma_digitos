#include <stdio.h>
#define NUM 294

int suma_digitos(int n1);

int main()
{
	int c = suma_digitos (NUM);
	return 0;
}

int suma_digitos(int n1)
{
	if(n1<10)
	{
		return n1;
	}
	else
	{
		return((n1%10)+digitos(n1/10)); //caso recursivo
	}
}
