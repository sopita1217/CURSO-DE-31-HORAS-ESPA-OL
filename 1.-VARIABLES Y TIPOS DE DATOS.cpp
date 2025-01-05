#include <iostream>
//LAS '' NORMALES SOLO OCUPAN UN CHARACTER, LAS "" SON PARA FRASES
int main(){

int numero_manzanas= {10};
int numero_peras= {32};

int numero_frutas (numero_manzanas + numero_peras);

std::cout << numero_frutas << std::endl;
std::cout << "numero de peras: " << numero_peras << std::endl;
std::cout << "numero de manzanas: " << numero_manzanas << std::endl;
std::cout << "tamaño del int : numero_frutas " << sizeof(numero_frutas) << std::endl;


//PARA GUARDAR POSITIVOS O NEGATIVOS AGREGA UN SIGNED ANTES DEL INT
signed int PUNTUACION {-1000};
std::cout << "puntuacion : " << PUNTUACION << std::endl;

//PARA GAUARDAR SOLO POSITIVOS SE USA UNSINGED
unsigned int PUNTUACION1 {11000};
std::cout << "puntuacion positiva : " << PUNTUACION1 << std::endl;

//BOOLEANS
bool luz_roja {false};
bool luz_verde {false};
 if (luz_roja == true ){
   std::cout << "LA LUZ ES ROJA NO PASES" << std::endl;
 }else{
   std::cout << "LA LUZ ES VERRDE PASA WN " <<std::endl;
}
//CHAR PARA UNE LETRA
   char nombre {'S'};
   std::cout << nombre << std::endl;
//EL STATEMENT AUTO DEJA DECIDIR AL COMPILADOR QUE TIPO USAR
   auto numero = 5;
   std::cout << numero << std::endl;

//TAMBIEN PUEDES CAMBIAR LOS VALORES ASIGNADOS A UNA VARIABLE

   nombre = {'b'};
   std::cout << nombre << std::endl;;

}
