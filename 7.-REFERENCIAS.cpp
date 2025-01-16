#include <iostream>
//REFERENCIAS 
//DECLARANDO Y USANDO REFERENCIAS
int main() {
int A = 25;
int B = 50;
double C = 50.51;
    int &RefA {A};//asignar atraves de inicializacion
    int &RefB = B;//asignar por medio de asignacion
    double &RefC = C;
//TIENES QUE DECLARAR E INICIALIZAR LA REFERENCIA AL MISMO TIEMPO SI NO SUCEDERA UN ERROR
std::cout << "A: " << A << std::endl;
std::cout << "B: " << B << std::endl;
std::cout << "C: " << C << std::endl;
std::cout << "RefA: " << RefA << std::endl;
std::cout << "RefB: " << RefB << std::endl;
std::cout << "RefC: " << RefC << std::endl;
//MODIFICAR DATOS A TRAVES DE REFERENCIAS
//MODIFICAR UN VALOR MODIFICA TANTO LA VARIABLE COMO LA REFERENCIA POR QUE LOS 2 APUNTAN A LA MISMA DIRECCION DE MEMORIA
//ESTO SE LLAMA NON-CONSTANT REFERENCE
RefA = 100;
RefB = 200;
RefC = 100.50;
std::cout << "A: " << A << std::endl;
std::cout << "B: " << B << std::endl;
std::cout << "C: " << C << std::endl;
std::cout << "A: " << A << std::endl;
std::cout << "B: " << B << std::endl;
std::cout << "C: " << C << std::endl;
//CONSTANT REFERENCE
//NO SE PUEDE MODIFICAR EL VALOR DE LA VARIABLE A TRAVES DE LA REFERENCIA
const int &RefD = A;
const int &RefE = B;
const double &RefF = C;
//RefD = 500; //ERROR
//RefE = 1000; //ERROR
//RefF = 100.50; //ERROR
    return 0;
}