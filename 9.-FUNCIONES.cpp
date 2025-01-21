#include <iostream>
#include "9.1.2.-FUNCIONES.h" //incluimos el archivo de funciones
//funciones (NO PUEDEN DECLARARSE DENTRO DE INT MAIN)
//una funcion es una pieza reusable de codigo que puedes usar en tu programa
//NO puedes DEFINIR dos funciones o variables con el mismo nombre ex : void entrar_Bar(int edad) y void entrar_Bar(int edad) NO HAGAS ESO PQ VA A EXPLOTAR
//podemos separar la funcion en partes para que sea mas facil de leer

//DECLARACION DE FUNCIONES EN ESTE ARCHIVO
void entrar_Bar(int edad);
int maximo(int num1, int num2);
int area(int lado);
void sumarEdad (int edad);
void incrementarPorDos(int* ptr);
void incrementar(int &num);

int main() {
//Llamar a las funciones
//tambien podemos llamar a las funciones dentro de cout
   std::cout <<" el numero mayor es : " << maximo(100, 123) << '\n';
   std::cout <<" el area de el cuadrado es : " << area(900) << '\n';
   std::cout <<"necesitas ser mayor de 18 para entrar al bar\n";
   entrar_Bar(20);
//AHORA VAMOS A USAR FUNCIONES DE OTROS ARCHIVOS (HACEMOS ESTO POR SI TENEMOS MUCHAS FUNCIONES Y QUEREMOS QUE EL CODIGO SEA MAS LEGIBLE)
//PARA ESO VAMOS A CREAR UN HEADER Y UN ARCHIVO DE FUNCIONES (en la carpeta includes estan los archivos)
//Tienes que compilar los archivos juntos para que funcione en la terminal

std::cout <<"suma de dos numeros " << add (10, 20)<< std::endl;
std::cout <<"resta de dos numeros " << substract(10, 20)<< std::endl;
std::cout <<"multiplicacion de dos numeros " << multiply(10, 20)<< std::endl;
std::cout <<"division de dos numeros " << divide(10, 20)<< std::endl;

//pass by value (pasar por valor) significa que la funcion recibe una copia de la variable original
   int edad {20};
   std::cout << "Tu edad es: " << edad << '\n';//esto es antes de llamar a la funcion
   sumarEdad(edad);
   std::cout << "Tu edad es: " << edad << '\n';//esto es despues de llamar a la funcion

//pass by pointer (pasar por puntero) significa que la funcion recibe la direccion de memoria de la variable original
    int numero = 18;//antes de llamar la duncion(10)
    std::cout << numero << " antes de llamar la funcion" << '\n';
    incrementarPorDos(&numero);
    std::cout << numero << " despues de llamar a la funcion \n";//despues de llamar la funcion(20)

//pass by reference (pasar por referencia) es similar a pasar por puntero pero mas seguro
int numerinho = 10;
    std::cout << "Valor antes de ejecutar la funcion: " << numero << std::endl;  // Imprime: 10
    incrementar(numerinho);
    std::cout << "Valor despues de la funcion: " << numero << std::endl;  // Imprime: 15
    
return 0;
}
//CUERPO DE LAS FUNCIONES (DEFINICION DE FUNCIONES)
void entrar_Bar(int edad) { //void significa que la funcion no regresa nada
    if (edad >= 18) {
        std::cout << "Puedes entrar al bar\n";
    } else {
        std::cout << "No puedes entrar al bar\n";
    }
}
int maximo(int num1, int num2) {
    if (num1 > num2) {
        return num1; 
    } else {
        return num2;
    }
}
int area(int lado) {
    int resultado = lado * lado;
    return resultado;


}
void sumarEdad (int edad) {//esto es un ejemplo de pass by value
    ++edad;
    std::cout << "Tu edad es: " << edad << '\n';
}
void incrementarPorDos(int* ptr) { // esto es un ejemplo de pass by pointer
    *ptr = *ptr * 2;
}
void incrementar(int &num) {//esto es un ejemplo de pass by reference
    num = num + 5;  // Modifica el valor original de 'num'
}