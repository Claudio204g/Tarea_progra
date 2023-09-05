import math

class Circulo:
    def __init__(self, radio):
        self.radio = radio

    def calcular_area(self):
        print("el area del circulo es:", 3.14 * self.radio * self.radio)

    def calcular_perimetro(self):
        print("el perimetro del circulo es:", 2 * 3.14 * self.radio)

    def cambiar_radio(self, nuevo_radio):
        self.radio = nuevo_radio

if __name__ == "__main__":
    radio_inicial = float(input("ingrese el radio inicial del circulo: "))

    mi_circulo = Circulo(radio_inicial)

    print("resultados con el radio inicial:")
    mi_circulo.calcular_area()
    mi_circulo.calcular_perimetro()

    opcion = ''
    while opcion != 'b':
        print("\nmenu:")
        print("a. cambiar radio")
        print("b. salir")
        opcion = input("seleccione una opcion: ")

        if opcion == 'a':
            nuevo_radio = float(input("ingrese el nuevo radio del circulo: "))
            mi_circulo.cambiar_radio(nuevo_radio)
            print("resultados con el nuevo radio:")
            mi_circulo.calcular_area()
            mi_circulo.calcular_perimetro()
        elif opcion == 'b':
            print("saliendo del programa.")
        else:
            print("opcion no valida.")
