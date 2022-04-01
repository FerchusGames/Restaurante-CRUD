#include <iostream>
#pragma once

class publicidad
{
public: //metodos
	publicidad(int, int, std::string);
private: //atributos
	int costoMensual = 0;
	int costoAnual = 0;
	std::string plataformas = "";


};

publicidad::publicidad(int _costoM,int _costoA, std::string _plat)
{
	costoAnual = _costoA;
	costoMensual = _costoM;
	plataformas = _plat;
}


