#include <iostream>
#pragma once

class publicidad
{
public: //metodos
	publicidad(int, int, std::string);
	~publicidad();
private: //atributos
	int costoMensual = 0;
	int costoAnual = 0;
	std::string plataformas;
};

publicidad::publicidad(int _costoM,int _costoA, std::string _plat)
{
	costoAnual = _costoA;
	costoMensual = _costoM;
	plataformas = _plat;
}
publicidad::~publicidad()
{

}
void crearPublicidad()
{
	int _costoM;
	int _costoA;
	std::string _plataforma;
	std::cout << "Hola, ingresa los siguientes datos: \nCosto Mensual: ";
	std::cin >> _costoM;
	std::cout << "\nCosto Anual: ";
	std::cin >> _costoA;
	std::cout << "\nLa plataforma: ";
	std::cin >> _plataforma;
	publicidad* Publici;
	Publici = new publicidad(_costoM, _costoA, _plataforma);
}
