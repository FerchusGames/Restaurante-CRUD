#pragma once

#include<string>

class Provedor
{
public:
	Provedor(std::string _nombre, std::string _recurso, float _costoAnual, std::string _localizacion, std::string _metodoTransporte);

private:
	std::string nombre;
	std::string recurso;
	float costoAnual;
	std::string localizacion;
	std::string metodoTransporte;
};

Provedor::Provedor(std::string _nombre, std::string _recurso, float _costoAnual, std::string _localizacion, std::string _metodoTransporte)
{
	nombre = _nombre;
	recurso = _recurso;
	costoAnual = _costoAnual;
	localizacion = _localizacion;
	metodoTransporte = _metodoTransporte;
}

