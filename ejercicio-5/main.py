import manipulador
import sys

# SE EJECUTA EL PROGRAMA
while True:

    print("USO:")
    print("ATOMICO <nombre> <representación> <alineación>")
    print("STRUCT <nombre> [<tipo>]")
    print("UNION <nombre> [<tipo>]")
    print("DESCRIBIR <nombre>")

    print("SALIR")
    comando = input("> ")

    if comando == '':
        continue

    argumentos = comando.split()

    if argumentos[0] == "SALIR":
        sys.exit()
    elif argumentos[0] == "ATOMICO":

        if len(argumentos) < 4:
            print("Accion invalida")
        else:
            nombre = argumentos[1]
            representacion = int(argumentos[2])
            alineacion = int(argumentos[3])

            manipulador.agregar_tipo_atomo(nombre, representacion, alineacion)


    elif argumentos[0] == "STRUCT":

        if len(argumentos) < 3:
            print("Accion invalida")
        else:
            nombre = argumentos[1]
            tipos = argumentos[2:]
            manipulador.agregar_tipo_struct(nombre, tipos)

    elif argumentos[0] == "UNION":

        if len(argumentos) < 3:
            print("Accion invalida")
        else:
            nombre = argumentos[1]
            tipos = argumentos[2:]
            manipulador.agregar_tipo_union(nombre, tipos)

    elif argumentos[0] == "DESCRIBIR":

        if len(argumentos) != 2:
            print("Accion invalida")
        else:
            nombre = argumentos[1]
            manipulador.describir_tipo(nombre)


    else:
        print("Accion invalida")