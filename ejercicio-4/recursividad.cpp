#include <iostream>
#include <vector>
#include <chrono>
#include <fstream>

using namespace std;
using namespace std::chrono;


// Definicion recursiva de F_{alpha, beta} (n) con alpha = 3, beta = 5
long F(int n) {
    // Caso base
    if (n >= 0 && n < 15) {
        return n;
    } else {
        // Caso recursivo
        return F(n - 5) + F(n - 10) + F(n - 15);
    }
}


// FColaAux es la funcion auxiliar de cola para la funcion F
long FColaAux(int n, int it, vector<long> acc) {
    // En la versión recursiva de cola tenemos el vector acc para
    // ir guardando todos los resultados parciales necesarios
    // y no tener que recalcularlos en cada llamada recursiva.
    // Casos bases de la misma forma que antes.
    if(n >= 0 && n < 15) {
        return n;
    } else {
        // En cada llamada recursiva, se va a ir agregando un nuevo valor
        // al vector acc, que es la suma de los ultimos 3 valores del vector.
        // Es decir, el valor parcial del resultado de F(n) se va a ir
        // agregando al final del vector acc.
        // Terminamos cuando el vector acc tenga tamaño n (num max de iteraciones simples
        // que realiza F), y devolvemos
        if(it == n) {
            return acc.back();
        }
        // En caso contrario, agregamos un nuevo valor al vector acc
        int nuevoValAcum = acc[acc.size() - 5] + acc[acc.size() - 10] + acc[acc.size() - 15];
        acc.push_back(nuevoValAcum);
        // Y llamamos recursivamente a FCola con el nuevo valor de it
        return FColaAux(n, it+1, acc);
    }
}

// FCola representa la version recursiva de cola de la funcion F
long FCola(int n) {
    // En la versión recursiva de cola tenemos el vector acc para
    // ir guardando todos los resultados parciales necesarios
    // y no tener que recalcularlos en cada llamada recursiva.
    vector<long> acc;
    for(int i = 0; i < 15; i++) {
        acc.push_back(i);
    }
    int it = 14;
    return FColaAux(n, it, acc);
}

// FIterativo representa la version iterativa de la funcion F
long FIterativo(int n) {
    // En la versión iterativa tenemos un vector acc para
    // ir guardando todos los resultados parciales necesarios
    // y no tener que recalcularlos en cada iteracion. Esto es lo mismo
    // que en la version recursiva de cola.
    vector<long> acc;
    for(int i = 0; i < 15; i++) {
        acc.push_back(i);
    }

    // En cada iteracion, se va a ir agregando un nuevo valor
    // al vector acc, que es la suma de los ultimos 3 valores del vector.
    // Es decir, el valor parcial del resultado de F(n) se va a ir
    // agregando al final del vector acc. Terminamos cuando el vector acc
    // tenga tamaño n (num max de iteraciones), y devolvemos el ultimo valor.
    // Esto es equivalente al caso recursivo, ya que se itera el numero de veces
    // que se llama recursivamente a FCola.
    for(int i = 15; i <= n; i++) {
        int nuevoValAcum = acc[acc.size() - 5] + acc[acc.size() - 10] + acc[acc.size() - 15];
        acc.push_back(nuevoValAcum);
    }

    // Devolvemos el ultimo valor del vector acc
    return acc.back();
}


int main() {

    // Vectores para guardar mediciones
    vector<double> tiemposF;
    vector<double> tiemposFCola;
    vector<double> tiemposFIterativo;



    // Maximo valor de n
    int nMax = 170;

    // Medir tiempos de ejecucion
    for(int n = 0; n <= nMax; n++){

        high_resolution_clock::time_point tInicio, tFin;
        duration<double> tiempo;

        // Evaluar F
        tInicio = high_resolution_clock::now();
        F(n);
        tFin = high_resolution_clock::now();
        tiempo = duration_cast<duration<double>>(tFin - tInicio);
        tiemposF.push_back(tiempo.count());

        // Evaluar FCola
        tInicio = high_resolution_clock::now();
        FCola(n);
        tFin = high_resolution_clock::now();
        tiempo = duration_cast<duration<double>>(tFin - tInicio);
        tiemposFCola.push_back(tiempo.count());

        // Evaluar FIter
        tInicio = high_resolution_clock::now();
        FIterativo(n);
        tFin = high_resolution_clock::now();
        tiempo = duration_cast<duration<double>>(tFin - tInicio);
        tiemposFIterativo.push_back(tiempo.count());
    }

    // Exportar tiemposF
    ofstream archivo("tiemposF.csv");
    archivo << "n,tiempo\n";
    for(int i = 0; i < tiemposF.size(); i++) {
        archivo << i << "," << tiemposF[i] << "\n";
    }
    archivo.close();

    // Exportar tiemposFCola
    ofstream archivo2("tiemposFCola.csv");
    archivo2 << "n,tiempo\n";
    for(int i = 0; i < tiemposFCola.size(); i++) {
        archivo2 << i << "," << tiemposFCola[i] << "\n";
    }
    archivo2.close();

    // Exportar tiemposFIter
    ofstream archivo3("tiemposFIterativo.csv");
    archivo3 << "n,tiempo\n";
    for(int i = 0; i < tiemposFIterativo.size(); i++) {
        archivo3 << i << "," << tiemposFIterativo[i] << "\n";
    }
    archivo3.close();

    return 0;
}