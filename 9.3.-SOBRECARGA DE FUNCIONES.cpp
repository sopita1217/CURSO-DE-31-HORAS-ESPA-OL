#include <iostream>
#include <string>
//SOBRECARGA DE FUNCIONES
//SI DOS FUNCIONES CON EL MISMO NOMBRE TOMAN EL MISMO VALOR DE INPUT VA A CAUSAR EL ERROR DE ONE DEFINITION RULE
//LAS FUNCIONES MAX SON SOBRECARGA MUTUAMENTE
int max (int a, int b){//esta funcion toma variables del valor int
    std::cout <<"SOBRECARGA INT LLAMADA" <<std::endl;
   return (a < b) ? a : b ;//si ponemos una , no va a regresar ningun valor en la variable auto debido a como funciona(descarta el primer parametro)
}
int max (double a, double b){//esta funcion toma variables double asi que no tiene problema con la funcion anterior
    std::cout <<"SOBRECARGA DOUBLE LLAMADA" <<std::endl;
   return (a < b) ? a : b ;
}
int max (double a, int b){//esta funcion toma variables del valor double e int
    std::cout <<"SOBRECARGA (double, int) LLAMADA" <<std::endl;
   return (a < b) ? a : b ;
}
int max (int a, double b){//esta funcion toma variables del valor int y double
    std::cout <<"SOBRECARGA (int, double) LLAMADA" <<std::endl;
   return (a < b) ? a : b ;
}
int max (int a, double b, int c){//esta funcion toma variables del valor int y double e int podemos agregar valores y va a funcionar pq la funcion es distinta
    std::cout <<"SOBRECARGA (int, double, int) LLAMADA" <<std::endl;
   return (a < b) ? a : b ;
}
int main(){
int int1{10};
int int2 {20};

double double1{30.30};
double double2{40.40};
//llamamos la funcion Max que usa integers
std::cout << "Max :" << max(int1, int2) <<std::endl;
//llamamos la funcion Max que usa doubles
std::cout << "Max :" << max(double1, double2) <<std::endl;
//llamamos a la funcion correspondiente con la variable auto
auto resultado = max(int1,int2);
std::cout << "Resultado auto (int): " << resultado << std::endl;//necesitas poner esa linea de codigo para sacar el valor auto a la terminal
auto resultado1 = max (int1, double1);
auto resultado2 = max (double2, int2);
auto resultado3 = max (double2, int2, int1);
}