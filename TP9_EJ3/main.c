/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: mateo
 *
 * Created on May 16, 2020, 3:27 PM
 */
/*
a. El objetivo de la funcion es sumar los digitos que componen un numero. Ej: 12 -> 1 + 2.
b. No funciona por dos razones. Primero que en el return se llamaba a la funcion "digitos" y no "suma_digitos".
Y segundo porque nunca dejaba de llamar a la funcion para devolver algun valor.



*/
#include <stdio.h>
#include "numero.h"
#include "funcion.h"

int main()
{
	int c = suma_digitos(NUM);
    printf("%d\n",c);//imprime resultado
	return 0;
}



