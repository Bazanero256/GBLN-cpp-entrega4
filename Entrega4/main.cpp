#include "stdafx.h"
#include <iostream>
#include "ej3.h"
#include "list.h"

int main()
{
	
	
	/* 
	Ejercicio 1 
	a) si es valido.
	int var = 40;
	int &ref = var;
	
	b) NO es valido, se le debe pasar una direccion de memoria. Lo que se conoce como L-valor. No se le puede asignar una constante a una referencia.

	int &ref = 1;
	
	c) Falla porque se le deberia dar la direccion de memoria de ref para poder utilizar *ptr, 
		la asignacion deberia ser ptr = &ref; 

	int var = 1;
	int *ptr;
	int &ref = var;
	*ptr = ref;
	*/
	/*Ejercicio 2*/
	int indice[] = { 1,2,3,4,5,6,7,8,9,10 };
	int *ptr = &indice[0];
	ptr++;
	
	if ((*ptr * 5) == (*(ptr + 8)))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	/*Ejercicio 3*/

	int one = 1;
	int two = 2;
	int * firstPointer = &one;
	int * secondPointer = &two;
	std::cout << "El valor de one es : " << one << " y el valor de two es : " << two << std::endl;
	swap_1(firstPointer, secondPointer);
	std::cout << "El valor de one es : " << one << " y el valor de two es : " << two << std::endl;
	swap_2(one, two);
	std::cout << "El valor de one es : " << one << " y el valor de two es : " << two << std::endl;

	std::cout << "**************************************************************************************" << std::endl;
	bool keepGoing = true;
	int option;
	list* numberList;
	numberList = new list();
	do {
		std::cout <<"Choose the number of the selected option : " << std::endl;
		std::cout << "1 - Add a number to the list  " << std::endl;
		std::cout << "2 - Quit " << std::endl;
		std::cin >> option;
		switch (option)
		{
		case 1:
		{
			int number;
			std::cout << "Insert the desire number : " << std::endl;
			std::cin >> number;
			numberList->addElement(number);
		}
			break;
		case 2:
			delete numberList;
			keepGoing = false;
			break;
		default:
			std::cout << "Invalid option " << std::endl;
			break;
		}
	} while (keepGoing);

	return 0;
}

