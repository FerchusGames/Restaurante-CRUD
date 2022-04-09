// Restaurante-CRUD.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Omar Alejandro Angeles Hernandez

#include <iostream>
#include <fstream>
#include "Provedor.h"
#include "Persona.h"
#include "menu.h"
#include "localizacion.h"
#include "publicidad.h"

int main()
{
	
}

void escribir()
{
	Proveedor* proveedor = new Proveedor(" ", " ", 0, " ", " ");
	Empleado* empleado;
	Publicidad* publici;
	localizacion* locali;
	ofstream archivo;
	/*
	std::string nombreArchivo;
	std::cout << "Escribe el nombre del archivo: ";
	std::cin.ignore();
	std::getline(cin, nombreArchivo);
	archivo.open(nombreArchivo.c_str(), ios::out);
	if (archivo.fail())
	{
		std::cout << "No se puede abrir el archivo." << std::endl;
		exit(1);
	}
	*/
	//crearPublicidad(publici);
	//CrearProovedor(proveedor);
	crearEmpleado(empleado);
	//crearLocalizacion(locali);
	empleado->mostrarDatos();
	//archivo.close();
}