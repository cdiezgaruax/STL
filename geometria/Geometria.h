#ifndef GEOMETRIA_H
#define GEOMETRIA_H

namespace Geometria {
    double calcularAreaTriangulo(double base, double altura);
    double calcularAreaCirculo(double radio);
    double calcularPerimetroCirculo(double radio);

    class Circulo {
    private:
        double radio;
    public:
        Circulo(double r);
        double calcularArea();
        double calcularPerimetro();
    };
}

#endif // GEOMETRIA_H