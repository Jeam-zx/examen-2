:- module maxHeapSimetrico.

:- interface.

:- import_module int.
:- import_module io.
:- import_module list.

% Definición del tipo de dato arbol
:- type arbol(A)
    ---> hoja(A)
    ;    rama(A, arbol(A), arbol(A)).

% Se definen las funciones a usar
:- pred esMaxHeapSimetrico(arbol(int)::in) is semidet.
:- pred preorder(arbol(int)::in, list(int)::out) is det.
:- pred postorder(arbol(int)::in, list(int)::out) is det.


:- pred condicionHeap(int, arbol(int), arbol(int)).
:- mode condicionHeap(in, in, in) is semidet.

% Punto de entrada del programa
:- pred main(io::di, io::uo) is det.

:- implementation.

% caso base: la hoja es un maxHeapSimetrico
esMaxHeapSimetrico(hoja(_)).

% caso recursivo: las ramas son maxHeapSimetrico si cumplen la condicion de heap y el postorder y preorder dan el mismo
% resultado
esMaxHeapSimetrico(rama(Valor, Izquierda, Derecha)) :-
    condicionHeap(Valor, Izquierda, Derecha),
    preorder(rama(Valor, Izquierda, Derecha), Preorder),
    postorder(rama(Valor, Izquierda, Derecha), Postorder),
    Preorder = Postorder.

% recorrido preorder recursivo, se almacena en list
preorder(hoja(X), [X]).
preorder(rama(X, I, D), [X|L]) :-
   preorder(I, LI),
   preorder(D, LD),
   list.append(LI, LD, L).

% recorrido postorder recursivo, se almacena en list
postorder(hoja(X), [X]).
postorder(rama(X, I, D), L) :-
   postorder(I, LI),
   postorder(D, LD),
   list.append(LI, LD, L1),
   list.append(L1, [X], L).

% la condicion de heap es que las hojas de una rama son menores o iguales a la rama
condicionHeap(Valor, hoja(ValorIzqHoja), hoja(ValorDerHoja)) :-
    Valor >= ValorIzqHoja,
    Valor >= ValorDerHoja.
% la condicion de heap recursivo: se itera recursivamente verificando la condicion
condicionHeap(Valor, rama(ValorIzq, ArbolIzqIzquierdo, ArbolIzqDerecho), rama(ValorDer, ArbolDerIzquierdo, ArbolDerDerecho)) :-
    Valor >= ValorIzq,
    Valor >= ValorDer,
    condicionHeap(ValorIzq, ArbolIzqIzquierdo, ArbolIzqDerecho),
    condicionHeap(ValorDer, ArbolDerIzquierdo, ArbolDerDerecho).

main(!IO) :-
% Casos de prueba
    Arbol1 = rama(1, rama(2, hoja(4), hoja(5)), rama(3, hoja(6), hoja(7))),
    Arbol2 = hoja(5),
    Arbol4 = rama(10, hoja(10), hoja(10)),

    ( if esMaxHeapSimetrico(Arbol1) then
        % Imprimir resultados
        print("El árbol 1 es un max–heap simétrico.", !IO),
        nl(!IO)
    else
        print("El árbol 1 no es un max–heap simétrico.", !IO),
        nl(!IO)
    ),

    ( if esMaxHeapSimetrico(Arbol2) then
        % Imprimir resultados
        print("El árbol 2 es un max–heap simétrico.", !IO),
        nl(!IO)
    else
        print("El árbol 2 no es un max–heap simétrico.", !IO),
        nl(!IO)
    ),

    ( if esMaxHeapSimetrico(Arbol4) then
        % Imprimir resultados
        print("El árbol 4 es un max–heap simétrico.", !IO),
        nl(!IO)
    else
        print("El árbol 4 no es un max–heap simétrico.", !IO),
        nl(!IO)
    ).

