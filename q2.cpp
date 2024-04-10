#include <iostream>

using namespace std;

class Poligono {
protected:
    int numero_lados;
public:
    int getNumeroLados() const {
        return numero_lados;
    }
};

class Retangulo : public Poligono {
private:
    float base;
    float altura;
public:
    Retangulo(float base, float altura) {
        this->base = base;
        this->altura = altura;
        numero_lados = 4;
    }

    float calcularArea() const {
        return base * altura;
    }

    float calcularPerimetro() const {
        return 2 * (base + altura);
    }
};


int main() {
    float base, altura;

    cin >> base;
    cin >> altura;

    Retangulo retangulo(base, altura);

    cout << retangulo.getNumeroLados();
    cout << retangulo.calcularArea();
    cout << retangulo.calcularPerimetro();

    return 0;
}
