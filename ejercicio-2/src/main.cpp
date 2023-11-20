#include "../headers/expresionesAritmeticas.hpp"

int main(int argc, char **argv) {
    while (true) {
        cout << "Introduzca una orden: " << endl;
        cout << "EVAL <PRE/POST> <expresion>" << endl;
        cout << "MOSTRAR <PRE/POST> <expresion>" << endl;
        cout << "SALIR" << endl;
        string linea;
        getline(cin, linea);

        vector <string> tokens;
        stringstream ss(linea);
        string palabra;

        while (ss >> palabra)
            tokens.push_back(palabra);

        if (tokens[0] == "EVAL") {

            string orden = tokens[1];

            vector <string> expr(tokens.begin() + 2, tokens.end());

            int resultado = 0;

            if (orden == "PRE")
                resultado = evalPrefijo(expr);
            else if (orden == "POST")
                resultado = evalPostfijo(expr);
            else
                cout << "Orden no válida." << endl;

            cout << resultado << endl;

        } else if (tokens[0] == "MOSTRAR") {

            string orden = tokens[1];
            if (orden != "PRE" && orden != "POST") {
                cout << "Orden no válida." << endl;
                continue;
            }
            vector <string> expr(tokens.begin() + 2, tokens.end());

            cout << mostrarExpresion(orden, expr) << endl;

        } else if (tokens[0] == "SALIR") {
            break;
        } else {
            cout << "Orden no válida." << endl;
        }
    }
    return 0;
}