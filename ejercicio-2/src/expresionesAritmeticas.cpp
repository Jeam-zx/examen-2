#include "../headers/expresionesAritmeticas.hpp"


// Función para obtener la precedencia de un operador
int precedence(string op) {
    if (op == "+" || op == "-") return 1;  // Precedencia 1 para + y -
    if (op == "*" || op == "/") return 2;  // Precedencia 2 para * y /
    return 0;  // Si no es un operador conocido, devuelve 0 por defecto
}

// Función para verificar si una cadena es un operador
bool esOperador(string token) {
    return token == "+" || token == "-" || token == "*" || token == "/";
}

// Función para verificar si un operador es no conmutativo
bool esOperadorNoConmutativo(string op) {
    return op == "-" || op == "/";
}

// Función para aplicar un operador a dos operandos
int applyOp(int a, int b, char op) {
    switch (op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
    }
    return 0;  // Si el operador no es reconocido, devuelve 0
}

// Función para verificar si una cadena es un entero
bool esEntero(const string& str) {
    istringstream ss(str);
    int resultado;
    return ss >> resultado && ss.eof();
}

// Función para evaluar una expresión en formato prefijo
int evalPrefijo(vector<string> tokens) {

    //  pila donde se almacenan los valores
    stack<int> valores;

    // Se recorre la expresión
    for (int i = tokens.size() - 1; i >= 0; i--) {
        // Si el token es un operador
        if (tokens[i] == "+" || tokens[i] == "-" ||
            tokens[i] == "*" || tokens[i] == "/") {
            // Se sacan los dos últimos valores de la pila
            int op1 = valores.top();
            valores.pop();
            int op2 = valores.top();
            valores.pop();
            // Se aplica el operador a los dos últimos valores
            int resultado = applyOp(op1, op2, tokens[i][0]);
            // Se almacena el resultado en la pila
            valores.push(resultado);

        } else {
            // Si el token es un entero, se almacena en la pila
            valores.push(stoi(tokens[i]));
        }
    }
    return valores.top();  // Devuelve el resultado final
}

int evalPostfijo(vector <string> tokens) {
    //  pila donde se almacenan los valores
    stack<int> valores;

    // Se recorre la expresión
    for (string token: tokens) {
        // Si el token es un entero, se almacena en la pila
        if (esEntero(token)) {
            valores.push(stoi(token));
        } else {
            // Si el token es un operador, se sacan los dos últimos valores de la pila, en orden contrario al almacenado
            // en la pila al estar en POSTFIJO
            int op2 = valores.top();
            valores.pop();
            int op1 = valores.top();
            valores.pop();
            // Se aplica el operador a los dos últimos valores
            valores.push(applyOp(op1, op2, token[0]));
        }
    }
    // Devuelve el resultado final
    return valores.top();

}

// Función para verificar si se necesitan paréntesis en una expresión, o son redundantes
bool parentesisNecesarios(const string proximo, const string actual, int posicion) {
    // Si la precedencia del operador proximo a evaluar es menor que la del operador actual, se necesitan paréntesis
    if (posicion == 0) {
        return precedence(proximo) < precedence(actual);
        // Si la precedencia del operador proximo a evaluar es igual que la del operador actual y es una expresion del
        // tipo no conmutativo, se necesitan paréntesis
    } else if (posicion == 1) {
        return (precedence(proximo) < precedence(actual)) ||
               precedence(proximo) == precedence(actual) && esOperadorNoConmutativo(actual);
    }

    return false;
}

// Función para mostrar una expresión en formato infijo dado una expresion prefija, con paréntesis donde sea necesario
string mostrarInfijoPre(const vector <string> &expresion) {
    // pila donde se almacenan los valores
    stack <pair<string, string>> stack;

    // Se recorre la expresión
    for (string i: expresion) {
        // Si el token es un operador
        if (esOperador(i)) {
            // Se sacan los dos últimos valores de la pila
            auto [operando1, operador1] = stack.top();
            stack.pop();
            auto [operando2, operador2] = stack.top();
            stack.pop();

            // Se añaden paréntesis donde sea necesario
            if (!operador1.empty() && parentesisNecesarios(operador1, i, 0)) {
                operando1 = "(" + operando1 + ")";
            }
            if (!operador2.empty() && parentesisNecesarios(operador2, i, 1)) {
                operando2 = "(" + operando2 + ")";
            }
            // Se almacena el resultado en la pila
            stack.push({operando1 + " " +  i + " " + operando2, i});
        } else {
            // Si el token es un entero, se almacena en la pila
            stack.push({i, ""});
        }
    }
    // Devuelve el resultado final
    return stack.top().first;
}

// Función para mostrar una expresión en formato infijo dado una expresion postfija, con paréntesis donde sea necesario
string mostrarInfijoPost(const vector <string> &expresion) {
    // pila donde se almacenan los valores
    stack <pair<string, string>> stack;

    // Se recorre la expresión
    for (string i: expresion) {
        // Si el token es un operador
        if (esOperador(i)) {
            // Se sacan los dos últimos valores de la pila, en orden contrario al almacenado en la pila al estar en
            // POSTFIJO
            auto [operando2, operador2] = stack.top();
            stack.pop();
            auto [operando1, operador1] = stack.top();
            stack.pop();

            // Se añaden paréntesis donde sea necesario
            if (!operador1.empty() && parentesisNecesarios(operador1, i, 0)) {
                operando1 = "(" + operando1 + ")";
            }
            if (!operador2.empty() && parentesisNecesarios(operador2, i, 1)) {
                operando2 = "(" + operando2 + ")";;
            }

            // Se almacena el resultado en la pila
            stack.push({operando1 + " " + i + " " + operando2, i});
        } else {
            // Si el token es un entero, se almacena en la pila
            stack.push({i, ""});
        }
    }

    // Devuelve el resultado final
    return stack.top().first;
}

// Función para mostrar una expresión en formato infijo dado una expresion en formato prefijo o postfijo definida en orden
string mostrarExpresion(const string &orden, vector <string> &expresion) {
    // Se invierte la expresión si es prefija
    if (orden == "PRE") {
        // Se invierte la expresión
        reverse(expresion.begin(), expresion.end());
        // Se muestra la expresión en formato infijo
        return mostrarInfijoPre(expresion);
    } else if (orden == "POST") {
        // Se muestra la expresión en formato infijo
        return mostrarInfijoPost(expresion);
    } else {
        // Si el orden no es válido, se devuelve un mensaje de error
        return "Orden no valido";
    }
}