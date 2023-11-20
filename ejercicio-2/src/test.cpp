#include "../headers/expresionesAritmeticas.hpp"
#include "../ext/googletest/googletest/include/gtest/gtest.h"

// Pruebas para evalPrefijo
TEST(PrefijoTest, EvaluaExpresionSimple) {
vector<string> tokens = {"/", "8", "4"};
int resultado = evalPrefijo(tokens);
EXPECT_EQ(resultado, 2);
}

TEST(PrefijoTest, EvaluaExpresionCompleja) {
vector<string> tokens = {"*", "+", "7", "-", "4", "2", "1"};
int resultado = evalPrefijo(tokens);
EXPECT_EQ(resultado, 9);
}

// Ejemplo de evaluacion prefija del examen
TEST(PrefijoTest, EjemploExamenPreEval) {
vector<string> tokens = {"+", "*", "+", "3", "4", "5", "7"};
int resultado = evalPrefijo(tokens);
EXPECT_EQ(resultado, 42);
}

// Ejemplo de evaluacion postfija del examen
TEST(PrefijoTest, EjemploExamenPostEval) {
    vector<string> tokens = {"8", "3", "-", "8", "4", "4", "+", "*", "+"};
    int resultado = evalPostfijo(tokens);
    EXPECT_EQ(resultado, 69);
}

// Pruebas para evalPosfijo
TEST(PostfijoTest, EvaluaExpresionSimple) {
vector<string> tokens = {"3", "4", "+"};
int resultado = evalPostfijo(tokens);
EXPECT_EQ(resultado, 7);
}

TEST(PostfijoTest, EvaluaExpresionCompleja) {
vector<string> tokens = {"7", "4", "2", "1", "-", "+", "*"};
int resultado = evalPostfijo(tokens);
EXPECT_EQ(resultado, 35);
}

// Parentesis Prefijo lado derecho
TEST(PostfijoTest, MostrarPrefijoParentesisDerecho) {
vector<string> tokens = {"/", "7", "+", "8", "3"};
string infija = mostrarExpresion("PRE", tokens);
EXPECT_EQ(infija, "7 / (8 + 3)");
}

TEST(MostrarTest, MostrarDivision) {
vector<string> tokens = {"7", "8", "-", "9", "/"};
string infija = mostrarExpresion("POST", tokens);
EXPECT_EQ(infija, "(7 - 8) / 9");
}

// Pruebas para mostrarExpresion
TEST(MostrarTest, ExpresionPrefijaSimple) {
vector<string> tokens = {"+", "3", "4"};
string infija = mostrarExpresion("PRE", tokens);
EXPECT_EQ(infija, "3 + 4");
}

// Pruebas para mostrarExpresion
TEST(MostrarTest, ExpresionPostfijaSimple){
vector<string> tokens = {"8", "4", "/"};
string infija = mostrarExpresion("POST", tokens);
EXPECT_EQ(infija, "8 / 4");
}

// Pruebas para mostrarExpresion
TEST(MostrarTest, ExpresionPrefijaCompleja) {
vector<string> tokens = {"*", "+", "7", "-", "4", "2", "1"};;
string infija = mostrarExpresion("PRE", tokens);
EXPECT_EQ(infija, "(7 + 4 - 2) * 1");
}

// Pruebas para mostrarExpresion
TEST(MostrarTest, ExpresionPostfijaComleja){
vector<string> tokens = {"7", "4", "2", "1", "-", "+", "*"};;
string infija = mostrarExpresion("POST", tokens);
EXPECT_EQ(infija, "7 * (4 + 2 - 1)");
}

// Ejemplo de mostrar prefija del examen
TEST(MostrarTest, ExpresionEjemploMostrarPrefijaExamen) {
vector<string> tokens = {"+", "*", "+", "3", "4", "5", "7"};
string infija = mostrarExpresion("PRE", tokens);
EXPECT_EQ(infija, "(3 + 4) * 5 + 7");
}

// Ejemplo de mostrar postfija del examen
TEST(MostrarTest, ExpresionEjemploMostrarPostfijaExamen){
    vector<string> tokens = {"8", "3", "-", "8", "4", "4", "+", "*", "+"};
    string infija = mostrarExpresion("POST", tokens);
    EXPECT_EQ(infija, "8 - 3 + 8 * (4 + 4)");
}