import itertools

# Implementación del manejador de tipos de datos
dic_tipos_atomo = {}   # Diccionario para tipos atómicos
dic_tipos_struct = {}  # Diccionario para tipos estructurados
dic_tipos_union = {}   # Diccionario para tipos de unión

# Definición de la clase para tipos atómicos
class Atomo:
    def __init__(self, representacion, alineacion):
        self.representacion = representacion
        self.alineacion = alineacion

# Definición de la clase para tipos estructurados
class Struct:
    def __init__(self, nombre: str, tipos: str):
        self.nombre = nombre
        self.tipos = tipos

# Definición de la clase para tipos de unión
class Union:
    def __init__(self, nombre: str, tipos: str):
        self.nombre = nombre
        self.tipos = tipos

# Función para agregar un tipo atómico al diccionario correspondiente
def agregar_tipo_atomo(nombre, representacion, alineacion):
    # Si el tipo ya se definió previamente, se muestra un mensaje de error
    if dic_tipos_atomo.get(nombre) or dic_tipos_struct.get(nombre) or dic_tipos_union.get(nombre):
        print(f"El tipo {nombre} ya se definió previamente")
        return False
    # Caso contrario, se agrega el tipo al diccionario
    dic_tipos_atomo[nombre] = Atomo(representacion, alineacion)
    return True

# Función para agregar un tipo estructurado al diccionario correspondiente
def agregar_tipo_struct(nombre, tipos):
    # Si el tipo ya se definió previamente, se muestra un mensaje de error
    if dic_tipos_atomo.get(nombre) or dic_tipos_struct.get(nombre) or dic_tipos_union.get(nombre):
        print(f"{nombre} ya se definió previamente")
        return False
    # Caso contrario, se verifica que los tipos de los campos estén definidos previamente
    lista_tipos = []
    for tipo in tipos:
        # Si alguno de los tipos no está definido, se muestra un mensaje de error
        if dic_tipos_atomo.get(tipo) is None:
            print(f"El tipo {tipo} no está definido previamente")
            return False
        # Caso contrario, se agrega el tipo a la lista de tipos
        lista_tipos.append(tipo)
    # Se agrega el tipo al diccionario
    dic_tipos_struct[nombre] = Struct(nombre, lista_tipos)
    return True

# Función para agregar un tipo de unión al diccionario correspondiente
def agregar_tipo_union(nombre, tipos):
    # Si el tipo ya se definió previamente, se muestra un mensaje de error
    if dic_tipos_atomo.get(nombre) or dic_tipos_struct.get(nombre) or dic_tipos_union.get(nombre):
        print(f"{nombre} ya se definió previamente")
        return False
    # Caso contrario, se verifica que los tipos de los campos estén definidos previamente
    for tipo in tipos:
        # Si alguno de los tipos no está definido, se muestra un mensaje de error
        if dic_tipos_atomo.get(tipo) is None:
            print(f"El tipo {tipo} no está definido previamente")
            return False
    # Se agrega el tipo al diccionario
    dic_tipos_union[nombre] = Union(nombre, tipos)
    return True

# Función para describir un tipo
def describir_tipo(nombre):
    # Si el tipo no está definido, se muestra un mensaje de error
    if nombre not in dic_tipos_union and nombre not in dic_tipos_struct and nombre not in dic_tipos_atomo:
        print(f"{nombre} no está definido previamente")
        return

    # Se obtiene el tipo
    objeto = obtener_tipo(nombre)

    # Se muestra el tipo
    if isinstance(objeto, Atomo):
        print(f"Tipo Atomo {nombre}")
    elif isinstance(objeto, Struct):
        print(f"Tipo Struct {nombre}")
    elif isinstance(objeto, Union):
        print(f"Tipo Union {nombre}")

    # Se muestra la representación y alineación del tipo
    size = obtener_espacio(objeto)
    alineacion = obtener_alineacion(objeto)
    # En el caso de empacaquetados, el desperdicio es 0
    print("Empaquetados:")
    print(f"Ocupacion: {size}\nAlineacion: {alineacion}\nDesperdicio: 0")

    # Se muestra la representación y alineación del tipo sin empaquetar
    size, desperdicio = obtener_espacio_y_desperdicio_sin_empaquetar(objeto)
    print("Sin empaquetar:")
    print(f"Ocupacion: {size + desperdicio}\nAlineacion: {alineacion}\nDesperdicio: {desperdicio}")

    # Se muestra la representación y alineación del tipo reordenado
    size, desperdicio = reordenar_campos(objeto)
    print("Reordenamiento de los campos de manera óptima:")
    print(f"Ocupacion: {size}\nAlineacion: {alineacion}\nDesperdicio: {desperdicio}")
    return True

# Función para obtener el espacio y desperdicio sin empaquetar de un tipo
def obtener_espacio_y_desperdicio_sin_empaquetar(tipo):
    # Si el tipo es atómico, se devuelve su representación y desperdicio
    # el cual se calcula como la alineación del tipo menos su representación
    if isinstance(tipo, Atomo):
        desperdicio = obtener_alineacion(tipo) - tipo.representacion
        return tipo.representacion, desperdicio
    # Si el tipo es de unión, se obtiene el tipo atómico de mayor representación
    elif isinstance(tipo, Union):
        tipos = tipo.tipos
        lista_tipos = [dic_tipos_atomo[elem] for elem in tipos]
        atom = max(lista_tipos, key=lambda Atomo: Atomo.representacion)
        desperdicio = obtener_alineacion(atom) - atom.representacion
        return atom.representacion, desperdicio
    else:
        # Si el tipo es estructurado, se calcula el tamaño y desperdicio de cada campo
        size = 0
        desperdicio = 0
        for tipo in tipo.tipos:
            atom = dic_tipos_atomo[tipo]
            desperdicio_act = obtener_alineacion(atom) - atom.representacion
            size_act = atom.representacion
            size += size_act
            desperdicio += desperdicio_act
        return size, desperdicio

# Función para reordenar campos de manera óptima
def reordenar_campos(tipo):
    # Si el tipo es atómico, se devuelve su representación y desperdicio
    if isinstance(tipo, Atomo):
        desperdicio = obtener_alineacion(tipo) - tipo.representacion
        return tipo.representacion, desperdicio
    # Si el tipo es de unión, se obtiene el tipo atómico de mayor representación
    elif isinstance(tipo, Union):
        tipos = tipo.tipos
        lista_tipos = [dic_tipos_atomo[elem] for elem in tipos]
        atom = max(lista_tipos, key=lambda Atomo: Atomo.representacion)
        desperdicio = obtener_alineacion(atom) - atom.representacion
        return atom.representacion, desperdicio
    # Si el tipo es estructurado, se calcula el tamaño y desperdicio de cada campo
    else:
        permutaciones = list(itertools.permutations(tipo.tipos))
        valores = []
        for permutacion in permutaciones:
            tipo.tipos = permutacion
            size = 0
            desperdicio = 0
            for tipo_actual in tipo.tipos:
                size_act, desperdicio_act = reordenar_campos(obtener_tipo(tipo_actual))
                size += size_act
                desperdicio += desperdicio_act
            valores.append((size, desperdicio))
        return min(valores)

# Función para obtener el espacio de un objeto
def obtener_espacio(objeto):
    # Si el objeto es atómico, se devuelve su representación
    if isinstance(objeto, Struct):
        # Si el objeto es estructurado, se calcula el tamaño de cada campo
        acc = 0
        for tipo in objeto.tipos:
            acc += dic_tipos_atomo.get(tipo).representacion
        return acc
    elif isinstance(objeto, Union):
        # Si el objeto es de unión, se obtiene el tipo atómico de mayor representación
        lista = [dic_tipos_atomo.get(tipo).representacion for tipo in objeto.tipos]
        return max(lista)
    else:
        return objeto.representacion

# Función para obtener el tipo asociado a un nombre
def obtener_tipo(nombre):
    # Si el nombre está definido, se devuelve el tipo asociado
    if nombre in dic_tipos_atomo:
        return dic_tipos_atomo[nombre]
    elif nombre in dic_tipos_struct:
        return dic_tipos_struct[nombre]
    elif nombre in dic_tipos_union:
        return dic_tipos_union[nombre]
    else:
        print(f"{nombre} no está definido")
        return None

# Función para calcular el MCM de una lista de números
def mcm_lista(lista):
    # Si la lista es vacía, se devuelve 0
    if len(lista) == 1:
        return lista[0]
    i = 1
    # Se calcula el MCM de los dos primeros elementos
    minimo = mcm(lista[0], lista[1])
    while i < len(lista) - 1:
        minimo = mcm(minimo, lista[i + 1])
        i += 1
    return minimo

# Función para calcular el MCD de dos números
def MCD(a, b):
    # Se calcula el MCD de dos números usando el algoritmo de Euclides
    temporal = 0
    while b != 0:
        temporal = b
        b = a % b
        a = temporal
    return a

# Función para calcular el MCM de dos números
def mcm(a, b):
    # Se calcula el MCM de dos números usando la propiedad de que
    # el MCM de dos números es igual al producto de los dos números
    # dividido entre el MCD de los dos números
    return int((a * b) / MCD(a, b))

# Función para obtener la alineación de un tipo
def obtener_alineacion(tipo) -> int:
    # Si el tipo es atómico, se devuelve su alineación
    if isinstance(tipo, Atomo):
        return tipo.alineacion
    elif isinstance(tipo, Union):
        # Si el tipo es de unión, se obtiene el tipo atómico de mayor representación
        tipos = tipo.tipos
        lista_tipos = [dic_tipos_atomo[elem].alineacion for elem in tipos]
        return mcm_lista(lista_tipos)
    else:
        # Si el tipo es estructurado, se calcula la alineación de cada campo
        tipos = tipo.tipos
        return dic_tipos_atomo[tipos[0]].alineacion
