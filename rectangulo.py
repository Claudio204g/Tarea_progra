class Rectangulo:
    def __init__(self, ancho, longitud):
        self.ancho = ancho
        self.longitud = longitud

    def mostrar_perimetro(self):
        perimetro = (self.ancho * 2) + (self.longitud * 2)
        print("perimetro:", perimetro)

    def mostrar_area(self):
        area = self.longitud * self.ancho
        print("area:", area)

    def cambiar_ancho(self, nuevo_ancho):
        self.ancho = nuevo_ancho

    def cambiar_longitud(self, nueva_longitud):
        self.longitud = nueva_longitud

if __name__ == "__main__":
    ancho = int(input("ingrese el ancho inicial: "))
    longitud = int(input("ingrese la longitud inicial: "))

    mi_rectangulo = Rectangulo(ancho, longitud)

    opcion = ''

    mi_rectangulo.mostrar_perimetro()
    mi_rectangulo.mostrar_area()

    while opcion != 'c':
        print("¿que desea hacer? (a para cambiar ancho, b para cambiar longitud, c para salir): ")
        opcion = input()

        if opcion == 'a':
            nuevo_ancho = int(input("ingrese el nuevo ancho: "))
            mi_rectangulo.cambiar_ancho(nuevo_ancho)
            mi_rectangulo.mostrar_perimetro()
            mi_rectangulo.mostrar_area()
        elif opcion == 'b':
            nueva_longitud = int(input("ingrese la nueva longitud: "))
            mi_rectangulo.cambiar_longitud(nueva_longitud)
            mi_rectangulo.mostrar_perimetro()
            mi_rectangulo.mostrar_area()
        elif opcion == 'c':
            print("saliendo del programa.")
        else:
            print("opcion no valida.")
