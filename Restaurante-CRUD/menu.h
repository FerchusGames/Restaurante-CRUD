#pragma once

#include <iostream>
#include <string.h>

using namespace std;

class menu
{
public:
	void mostrarMenu();
	menu(string, float, string, float);

private:
	string nBebida;
	float pBebida;
	string nPlatillo;
	float pPlatillo;


};

	void menu::mostrarMenu()
	{
		cout << "El nombre del platillo es: " << nPlatillo << endl;
		cout << "El precio del platillo es: " << pPlatillo << endl;
		cout << "El nombre de la bebida es: " << nBebida << endl;
		cout << "El precio de la bebida es: " << pBebida << endl;
	}

menu::menu(string _nBebida,float _pPlatillo, string _nPlatillo, float _pBebida)
{

	nBebida = _nBebida;
	nPlatillo = _nPlatillo;
	pBebida = _pBebida;
	pPlatillo = _pPlatillo;

}

menu::~menu()
{

}
