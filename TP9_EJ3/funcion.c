/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include "numero.h"
#include "funcion.h"


int suma_digitos(int n1)
{
	if(n1<10)
	{
		return n1;
	}
	else
	{
		return((n1%10)+suma_digitos(n1/10)); //caso recursivo
	}
}
