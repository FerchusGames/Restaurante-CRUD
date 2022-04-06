#pragma once
#include <iostream>
#include <string>
using namespace std;
class loclizacion
{
private:
	string planeta = "tierra", pais="mexico", estado="jalisco", ciudad="guadalajara", municipio="zapopan", colonia="las aguilas", calle="rio tuxpan";
public:	
	int numero = 85;
	int coordenadas = 20;
	int coordenados = -103;
	loclizacion(string,string,string,string,string,string,string, int, int,int);
};
loclizacion::loclizacion(string _planeta ,string _pais ,string _estado,string _ciudad, string _municipio, string _colonia, string _calle, int _numero, int _coordenadas,int _coordenados) 
{
	planeta = _planeta;
	pais = _pais;
	estado = _estado;
	ciudad = _ciudad;
	municipio = _municipio;
	colonia = _colonia;
	calle = _calle;
	numero = _numero;
	coordenadas = _coordenadas;
	coordenados = _coordenados;
}
int main()
{

}


