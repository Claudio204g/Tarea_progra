#include <iostream>
using namespace std;

class circulo {
private:
    double radio;

public:
    circulo(int _radio);
    void calcular_area();
    void calcular_perimetro();
    void cambiar_radio(int _nuevo_radio);
};

circulo::circulo(int _radio) {
    radio = _radio;
}

void circulo::calcular_area() {
    cout << "el area del circulo es: " << 3.14 * radio * radio << endl; 
}

void circulo::calcular_perimetro() {
    cout << "el perimetro del circulo es: " << 2 * 3.14 * radio << endl; 
}

void circulo::cambiar_radio(int _nuevo_radio) {
    radio = _nuevo_radio;
}

int main() {
    int radio_inicial;
    cout << "ingrese el radio inicial del circulo: ";
    cin >> radio_inicial;

    circulo mi_circulo(radio_inicial);

    cout << "resultados con el radio inicial:\n";
    mi_circulo.calcular_area();
    mi_circulo.calcular_perimetro();

    char opcion;
    do {
        cout << "\nmenu:\n";
        cout << "a. cambiar radio\n";
        cout << "b. salir\n";
        cout << "seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 'a':
                int nuevo_radio;
                cout << "ingrese el nuevo radio del circulo: ";
                cin >> nuevo_radio;
                mi_circulo.cambiar_radio(nuevo_radio);
                cout << "resultados con el nuevo radio:\n";
                mi_circulo.calcular_area();
                mi_circulo.calcular_perimetro();
                break;
            case 'b':
                cout << "saliendo del programa." << endl;
                break;
            default:
                cout << "opcion no valida." << endl;
        }
    } while (opcion != 'b');

    return 0;
}
