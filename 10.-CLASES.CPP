#include <iostream>  // Biblioteca estándar para entrada y salida
#include "MODULARIZACION_DE_CLASES.h"  // Archivo de cabecera para la clase cuadrado1

// CLASE CILINDRO
// Esta clase permite modelar un cilindro y calcular su volumen
class cilindro {
public:
    // Constructor que inicializa el radio de la base y la altura del cilindro
    cilindro(double radioParam, double alturaParam) 
        : radioBase(radioParam), altura(alturaParam) {}

    // Método para calcular el volumen del cilindro
    double volumen() {
        return pi * radioBase * radioBase * altura;
    }

    // Getters para acceder a las variables miembro privadas
    double get_radioBase() {
        return radioBase;
    }

    double get_altura() {
        return altura;
    }

    // Setters para modificar las variables miembro privadas
    void set_radioBase(double radioParam) {
        radioBase = radioParam;
    }

    void set_altura(double alturaParam) {
        altura = alturaParam;
    }

private:
    double radioBase {10};  // Radio de la base del cilindro
    double altura {1.0};    // Altura del cilindro
    const double pi {3.1416};  // Valor de pi como constante
};

// CLASE CUADRADO
// Clase para modelar un cuadrado y calcular su área
class cuadrado {
public:
    double lado{20};  // Longitud del lado del cuadrado

    // Método para calcular el área del cuadrado
    double area() {
        return lado * lado;
    }

    // Constructor que inicializa el lado del cuadrado
    cuadrado(double ladoParam) : lado(ladoParam) {}
};
//CLASE VECTOR
class Vector {
    int* datos;
    int size;

public:
    // Constructor que reserva memoria dinámica
    Vector(int s) : size(s) {
        datos = new int[size];
        std::cout << "Memoria dinamica asignada para " << size << " elementos." << std::endl;
    }

    // Destructor para liberar memoria
    ~Vector() {
        delete[] datos;
        std::cout << "Memoria dinamica liberada." << std::endl;
    }
};
class Perro {//miembros privados por default
    std::string name {"nada"};
};
struct Gato {//miembros publicos por default
    std::string name {"nada"};
};
int main() {
    // Crear un objeto de la clase cilindro con radio 10 y altura 20
    cilindro cilindro1(10, 20);

    // Mostrar el volumen del cilindro
    std::cout << "Volumen c1: " << cilindro1.volumen() << std::endl;

    // Modificar las dimensiones del cilindro
    cilindro1.set_altura(55.4);
    cilindro1.set_radioBase(10.0);
    
    // Mostrar el volumen del cilindro después de modificarlo
    std::cout << "Volumen c1 despues de modificarlo: " << cilindro1.volumen() << std::endl;

    // Crear un objeto de la clase cuadrado con lado 20
    cuadrado cuadradoObj(20);
    std::cout << "Area cuadrado: " << cuadradoObj.area() << std::endl;

    // Crear un objeto de la clase cuadrado1 definida en el archivo de cabecera
    cuadrado1 cuadrado1Obj(25);
    std::cout << "Area cuadrado1: " << cuadrado1Obj.area() << std::endl;

   // Manejar objeto mediante puntero
    cilindro * p_cilindro = &cilindro1;

    // Acceder al volumen usando el operador de indirección (*)
    std::cout << "Volumen usando *p_cilindro: " << (*p_cilindro).volumen() << std::endl;

    // Acceder al volumen usando el operador flecha (->)
    std::cout << "Volumen usando p_cilindro->: " << p_cilindro->volumen() << std::endl;
    
    //destructores, sirven para liberar memoria alocada en los objetos

    Vector v1(5);  // Se asigna memoria dinámica
    std::cout << "El objeto v1 esta a punto de ser destruido..." << std::endl;


}