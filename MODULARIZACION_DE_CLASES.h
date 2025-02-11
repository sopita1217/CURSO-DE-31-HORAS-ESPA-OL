#ifndef MODULARIZACION_DE_CLASES_H
#define MODULARIZACION_DE_CLASES_H

class cuadrado1 {
public:
    double lado{20};

    double area() {
        return lado * lado;
    }

    cuadrado1(double ladoParam) : lado(ladoParam) {}
};

#endif
