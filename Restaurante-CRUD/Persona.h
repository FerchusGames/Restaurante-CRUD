#pragma once

#include <iostream>
using namespace std;
#include <string>
#include "Persona.h"
class Persona
{
private:
    string nombre;
    int edad;
public:
    Persona(string, int);
};
Persona::Persona(string _nombre, int _edad)
{
    nombre = _nombre;
    edad = _edad;
}
class Adulto :public Persona
{
private:
    float dinero;
    string trabajo;
public:
    Adulto(string, int, float, string);
};
Adulto::Adulto(string _nombre, int _edad, float _dinero, string _trabajo) :Persona(_nombre, _edad)
{
    dinero = _dinero;
    trabajo = _trabajo;
}
class Empleado :public Persona
{
private:
    int horas_de_trabajo;
    string posicion_trabajo;
public:
    Empleado(string, int, float, string, int, string);

};
Empleado::Empleado(string _nombre, int _edad, float _dinero, string _trabajo, int _horas_de_trabajo, string _posicion_trabajo) :Persona(_nombre, _edad)
{
    horas_de_trabajo = _horas_de_trabajo;
    posicion_trabajo = _posicion_trabajo;
}