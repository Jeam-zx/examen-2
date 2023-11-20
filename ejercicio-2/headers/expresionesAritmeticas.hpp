#ifndef EXPRESIONESARITMETICAS_HPP
#define EXPRESIONESARITMETICAS_HPP

#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

// Función para obtener la precedencia de un operador
int precedence(string op);

// Función para verificar si una cadena es un operador
bool esOperador(string token);

// Función para verificar si un operador es no conmutativo
bool esOperadorNoConmutativo(string op);

// Función para aplicar un operador a dos operandos
int applyOp(int a, int b, char op);

// Función para verificar si una cadena es un entero
bool esEntero(const string& str);

// Función para evaluar una expresión en formato prefijo
int evalPrefijo(vector<string> tokens);

int evalPostfijo(vector <string> tokens);

// Función para verificar si se necesitan paréntesis en una expresión, o son redundantes
bool parentesisNecesarios(const string proximo, const string actual, int posicion);

// Función para mostrar una expresión en formato infijo dado una expresion prefija, con paréntesis donde sea necesario
string mostrarInfijoPre(const vector <string> &expresion);

// Función para mostrar una expresión en formato infijo dado una expresion postfija, con paréntesis donde sea necesario
string mostrarInfijoPost(const vector <string> &expresion);

// Función para mostrar una expresión en formato infijo dado una expresion en formato prefijo o postfijo definida en orden
string mostrarExpresion(const string &orden, vector <string> &expresion);

void ejecutar();

#endif //EXPRESIONESARITMETICAS_HPP
