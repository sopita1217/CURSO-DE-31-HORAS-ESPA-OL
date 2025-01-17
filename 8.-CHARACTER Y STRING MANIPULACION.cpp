#include <iostream>
#include <cstring>
//MANIPULACION DE CHARACTERES Y STRINGS 
//MANIPULACION DE CHARACTERES
//VERIFICAR SI UN CHARACTER ES ALFANUMERICO

int main(){
    /*char c;
    std::cout << "Introduce un caracter: ";
    std::cin >> c;
    if (isalnum(c))
        std::cout << "El caracter es alfanumerico." << std::endl;
    else
        std::cout << "El caracter no es alfanumerico." << std::endl;
        */
//ENCONTRAR LOS CHARACTERES BLANCOS EN UNA FRASE E IMPRIMIRLOS
char mensaje [] {"Hola mundo desde aqui "}; //se declara un arreglo de caracteres
int Caracteres_blancos{}; //se declara una variable para almacenar los caracteres blancos
for (size_t i{0} ; i < std::size(mensaje) ; i++){//si hay dudas sobre como funciona el loop revisar la seccion 4.-LOOPS.cpp
    if (std::isblank(mensaje[i])){//se verifica si el caracter es un espacio en blanco y si lo es se usa el operador de incremento para aumentar el valor de la variable caracteres blancos
        ++Caracteres_blancos;//se incrementa el valor de la variable caracteres blancos
    }
}

//ahora imprimiremos la variable caracteres blancos
std::cout << "El numero de caracteres blancos en la frase es: " << Caracteres_blancos << std::endl;
//REVISAR SI ES MAYUSCULA O MINUSCULA
//Para eso usaremos std::islower() y std::isupper()
//operador ternario
char c;
bool islower;
std::cout << "Introduce un caracter: ";
std::cin >> c;
std::islower(c) ? islower = true : islower = false;//aqui usando el operador ternario se verifica si el caracter es minuscula y se almacena en la variable islower el cual aprendimos a usar en la leccion 3.-CONTROL DE FLUJO.cpp
//usaremos if and else if para hacer lo mismo para practicar
if (std::islower(c)){
    islower = true;
}
else if (std::isupper(c)){
    islower = false;
}
//ahora imprimiremos el resultado con varias opciones
if (islower){
    std::cout << "El caracter es minuscula." << std::endl;
}
else{
    std::cout << "El caracter es mayuscula." << std::endl;
}

//C STRING MANIPULACION
//longitud de un string
char cadena[] {"Hola mundo"};
std::cout << "La longitud de la cadena es: " << std::strlen(cadena) << std::endl;
//esta es solo una funcion de la libreria cstring que nos permite obtener la longitud de una cadena
//concatenar strings
char cadena1[] {"Hola"};
char cadena2[] {" mundo"};
char cadena3[20];//se declara un arreglo de caracteres
std::strcpy(cadena3, cadena1);//se copia la cadena1 en cadena3 o sea que la cadena3 ahora es "Hola"
std::strcat(cadena3, cadena2);//se concatena la cadena2 en cadena3 o sea que la cadena3 ahora es "Hola mundo"
std::cout << "La cadena concatenada es: " << cadena3 << std::endl;
//comparar strings
char cadena4[] {"Hola"};
char cadena5[] {"Hola"};
if (std::strcmp(cadena4, cadena5) == 0){//se compara si las cadenas son iguales
    std::cout << "Las cadenas son iguales." << std::endl;
}
else{
    std::cout << "Las cadenas no son iguales." << std::endl;
}
//convertir un string a mayusculas
char cadena6[] {"Hola mundo"};
for (size_t i{0} ; i < std::strlen(cadena6) ; i++){//se recorre la cadena
    cadena6[i] = std::toupper(cadena6[i]);//se convierte cada caracter a mayuscula
}
//introduccion a std::string
//con std::string somos capaces de hacer lo mismo que con los strings de c pero de una manera mas sencilla
std::string cadena7 {"Hola mundo"};
std::cout << "La longitud de la cadena es: " << cadena7.length() << std::endl;
std::string cadena8 {"Hola"};
std::string cadena9 {" mundo"};
std::string cadena10 = cadena8 + cadena9;
std::cout << "La cadena concatenada es: " << cadena10 << std::endl;
}