// Restaurante-CRUD.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Omar Alejandro Angeles Hernandez

#include <iostream>
#include <stdlib.h>
using namespace std;

class costosdeoperacion { //Clase 
private: //Datos privados
	string nombre;
	float precio;
public:
	costosdeoperacion(string, float); //Lo que podra acceder el usuario
	void mostrarCostos();
};

//Constructor de los costos
costosdeoperacion::costosdeoperacion(string _nombre, float _precio) {
	nombre = _nombre;
	precio = _precio;
}

void costosdeoperacion::mostrarCostos() { //Funcion para imprimir 
	cout << "Nombre: " << nombre << endl;
	cout << "Precio: " << precio << endl;
}

int main() { //Main ejecuta las acciones en el programa

	costosdeoperacion* vector[6]; //Establecemos cuantos datos queremos
	vector[0] = new costosdeoperacion("Agua", 4752.34);
	vector[1] = new costosdeoperacion("Luz", 5789.43);
	vector[2] = new costosdeoperacion("Gas", 7000);
	vector[3] = new costosdeoperacion("Renta", 50000);
	vector[4] = new costosdeoperacion("Alejandro", 17500);
	vector[5] = new costosdeoperacion("Fernando", 20000);
	vector[0]->mostrarCostos(); //Llamamos a la funcion mostrar
	vector[1]->mostrarCostos();
	vector[2]->mostrarCostos();
	vector[3]->mostrarCostos();
	vector[4]->mostrarCostos();
	vector[5]->mostrarCostos();

	system("pause");
	return 0;
}