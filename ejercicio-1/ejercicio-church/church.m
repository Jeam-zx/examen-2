:- module church.
:- interface.
:- import_module io.

% Definición del tipo de dato church
:- type church --->
    cero ;  % Constructor cero
    suc(church). % Constructor suc para representar el sucesor

% Funciones de suma y multiplicación sobre church,
% al igual que en Haskell se declara la firma de suma y multiplicacion

:- func suma(church, church) = church.
:- func multiplicacion(church, church) = church.

% Punto de entrada del programa
:- pred main(io::di, io::uo) is det.

:- implementation.

% Suma por recursión sobre el primer argumento
suma(cero, N) = N. % 0 + N = N
suma(suc(M), N) = suc(suma(M, N)). % M+1 + N = 1 + (M + N)

% Multiplicación por recursión sobre el primer argumento
multiplicacion(cero, _) = cero. % 0 * M = 0
multiplicacion(suc(M), N) = suma(N, multiplicacion(M, N)). % (M+1) * N = N + M * N

% Observese que para la suma y la multiplicacion no es necesario definir
% el caso base por la derecha (el neutro de la suma y el absorbente de la multiplicacion)
% dado que en la misma definicion recursiva, el lado izquierdo siempre "pierde" un sucesor
% por lo que eventualmente llegara a cero por la izquierda

main(!IO) :-
% Casos de prueba
    % Número 3 como suc(suc(suc(cero)))
    N3 = suc(suc(suc(cero))),

    % Número 5 como suc(suc(suc(suc(suc(cero)))))
    N5 = suc(suc(suc(suc(suc(cero))))),

    % Numero 0 como cero
    N0 = cero,

    % Llamada a suma y multiplicación
    Suma1 = suma(N5, N0),
    Producto1 = multiplicacion(N3, N0),
    Suma2 = suma(N5, N3),
    Producto2 = multiplicacion(N3, N5),

    % Imprimir resultados
    print("5 + 0 = ", !IO),
    print(Suma1, !IO),
    nl(!IO),

    print("3 * 0 = ", !IO),
    print(Producto1, !IO),
    nl(!IO),

    % Imprimir resultados
    print("5 + 3 = ", !IO),
    print(Suma2, !IO),
    nl(!IO),

    print("3 * 5 = ", !IO),
    print(Producto2, !IO),
    nl(!IO).