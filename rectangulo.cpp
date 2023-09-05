#include <iostream>
using namespace std;

class rectangulo {
private:
    int ancho;
    int longitud;

public:
    rectangulo(int _ancho, int _longitud);
    void mostrar_perimetro();
    void mostrar_area();
    void cambiar_ancho(int nuevo_ancho);
    void cambiar_longitud(int nueva_longitud);
};

rectangulo::rectangulo(int _ancho, int _longitud) {
    ancho = _ancho;
    longitud = _longitud;
}

void rectangulo::mostrar_perimetro() {
    int perimetro = (ancho * 2) + (longitud * 2);
    cout << "perimetro: " << perimetro << endl;
}

void rectangulo::mostrar_area() {
    int area = longitud * ancho;
    cout << "area: " << area << endl;
}

void rectangulo::cambiar_ancho(int nuevo_ancho) {
    ancho = nuevo_ancho;
}

void rectangulo::cambiar_longitud(int nueva_longitud) {
    longitud = nueva_longitud;
}

int main() {
    int ancho, longitud;
    cout << "ingrese ancho inicial: ";
    cin >> ancho;
    cout << "ingrese longitud inicial: ";
    cin >> longitud;

    rectangulo mi_rectangulo(ancho, longitud);

    char opcion;

    mi_rectangulo.mostrar_perimetro();
    mi_rectangulo.mostrar_area();

    do {
        cout << "que desea hacer? (a para cambiar ancho, b para cambiar longitud, c para salir): ";
        cin >> opcion;

        switch (opcion) {
            case 'a':
                cout << "ingrese nuevo ancho: ";
                cin >> ancho;
                mi_rectangulo.cambiar_ancho(ancho);
                mi_rectangulo.mostrar_perimetro();
                mi_rectangulo.mostrar_area();
                break;
            case 'b':
                cout << "ingrese nueva longitud: ";
                cin >> longitud;
                mi_rectangulo.cambiar_longitud(longitud);
                mi_rectangulo.mostrar_perimetro();
                mi_rectangulo.mostrar_area();
                break;
            case 'c':
                cout << "saliendo del programa." << endl;
                break;
            default:
                cout << "opcion no valida." << endl;
        }
    } while (opcion != 'c');

    return 0;
}
