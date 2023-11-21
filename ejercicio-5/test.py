import unittest
import manipulador

class TestManejadorTipos(unittest.TestCase):

    def test_agregar_tipo_atomo(self):
        self.assertTrue(manipulador.agregar_tipo_atomo("a", 1, 4))

    def test_agregar_tipo_atomo_existente(self):
        manipulador.agregar_tipo_atomo("b", 1, 2)
        self.assertFalse(manipulador.agregar_tipo_atomo("b", 4, 7))

    def test_agregar_tipo_union(self):
        manipulador.agregar_tipo_atomo("c", 4, 4)
        manipulador.agregar_tipo_atomo("d", 1, 4)
        self.assertTrue(manipulador.agregar_tipo_union("union1", ["c", "d"]))

    def test_agregar_tipo_union_existente(self):
        manipulador.agregar_tipo_atomo("e", 4, 4)
        manipulador.agregar_tipo_atomo("f", 2, 4)
        manipulador.agregar_tipo_union("union2", ["e", "f"])
        self.assertFalse(manipulador.agregar_tipo_union("union2", ["e", "f"]))

    def test_agregar_tipo_struct(self):
        manipulador.agregar_tipo_atomo("g", 1, 1)
        manipulador.agregar_tipo_atomo("h", 2, 2)
        self.assertTrue(manipulador.agregar_tipo_struct("struct1", ["g", "h"]))

    def test_agregar_tipo_struct_existente(self):
        manipulador.agregar_tipo_atomo("i", 2, 4)
        manipulador.agregar_tipo_atomo("j", 1, 2)
        manipulador.agregar_tipo_struct("struct2", ["i", "j"])
        self.assertFalse(manipulador.agregar_tipo_struct("struct2", ["i", "j"]))

    def test_describir_atomo(self):
        manipulador.agregar_tipo_atomo("k", 3, 8)
        self.assertTrue(manipulador.describir_tipo("k"))

    def test_describir_struct(self):
        manipulador.agregar_tipo_atomo("l", 2, 2)
        manipulador.agregar_tipo_atomo("s", 4, 2)
        manipulador.agregar_tipo_struct("struct3", ["l", "s"])
        self.assertTrue(manipulador.describir_tipo("struct3"))

    def test_describir_union(self):
        manipulador.agregar_tipo_atomo("d", 3, 8)
        manipulador.agregar_tipo_atomo("e", 2, 1)
        manipulador.agregar_tipo_union("union3", ["e", "d"])
        self.assertTrue(manipulador.describir_tipo("union3"))

if __name__ == '__main__':
    unittest.main()
