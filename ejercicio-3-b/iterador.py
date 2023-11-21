def sublistasCrecientes(lista):
    # Función interna recursiva para generar sublistas crecientes
    def sublistasCrecientesRec(p, actual):
        # Caso base: si la lista es vacía, devolvemos la sublista actual
        if not p:
            yield actual
        else:
            # Generamos sublistas sin incluir el primer elemento
            for result in sublistasCrecientesRec(p[1:], actual):
                yield result
            # Verificamos si podemos incluir el primer elemento en la sublista
            if not actual or p[0] > actual[-1]:
                # Generamos sublistas incluyendo el primer elemento
                for result in sublistasCrecientesRec(p[1:], actual + [p[0]]):
                    yield result

    # Iniciamos la generación de sublistas crecientes con la lista dada
    for result in sublistasCrecientesRec(lista, []):
        yield result


# Ejemplo de uso:
lista_ejemplo = [1,4,3,2,5]
for sublista in sublistasCrecientes(lista_ejemplo):
    print(sublista)