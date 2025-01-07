#include <iostream>
int main(){
//ARRAYS
//SOLO PUEDE CONTENER UN TIPO DE DATO   
int PUNTUACION [10];//10 ES EL TAMAÑO DE INDEXES DEL ARRAY
//PUEDE LEERSE A TRAVES DE UN BUCLE

for (int i=0; i<10; i++){
    std::cout<<"Introduce la puntuacion del jugador "<<i+1<<": ";
    std::cin>>PUNTUACION[i];//tambien se puede meter datos a traves de un input a un array
}
//ESCRIBIENDO DATOS EN UN ARRAY
int STRINGS [10];
STRINGS[0]=1;//en el index 0 el valor designado es 1
STRINGS[1]=2;
STRINGS[2]=3;
STRINGS[3]=4;
STRINGS[4]=5;
STRINGS[5]=6;
STRINGS[6]=7;
STRINGS[7]=8;
STRINGS[8]=9;
STRINGS[9]=10;

//tambien podemos declarar un array e inicializarlo al mismo tiempo
int NUMEROS [5]={1,2,3,4,5};// [] es el tamaño del array y {} son los valores que se le asignamos
//O PODEMOS NO ESPECIFICAR EL TAMAÑO DEL ARRAY Y DEJAR QUE EL COMPILADOR LO HAGA POR NOSOTROS
//TAMAÑO DE UN ARRAY
int ARRAY [5]={1,2,3,4,5};
std::cout<<"El tamaño del array es: "<<sizeof(ARRAY)/sizeof(ARRAY[0])<<std::endl;//sizeof(ARRAY) nos da el tamaño total del array y sizeof(ARRAY[0]) nos da el tamaño de un index del array
// la / sirve para dividir el tamaño total del array entre el tamaño de un index del array lo que hace que nos de el tamaño total del array
//pero si necesitamos el valor del array mientras compilamos el programa podemos hacerlo de la siguiente manera
const int TAMANO=5;
int ARRAY2 [TAMANO]={1,2,3,4,5};
std::cout<<"El tamaño del array es: "<<TAMANO<<std::endl;
//Y ASI PODREMOS USARLO EN UN LOOP PARA IMPRIMIRLO
for (int i=0; i<TAMANO; i++){
    std::cout<<ARRAY2[i]<<std::endl;
}
//ARRAYS DE CHARACTERS
char LETRAS [5]={'a','b','c','d','e'};
//TAMBIEN PODEMOS DECLARAR UN ARRAY DE CHARACTERS Y ASIGNARLE UNA PALABRA
char PALABRA [6]={'H','O','L','A',' ','\0'};//\0 es un caracter nulo que se usa para indicar el final de una cadena de caracteres
//TAMBIEN PODEMOS DECLARAR UN ARRAY DE CHARACTERS Y ASIGNARLE UNA PALABRA DE LA SIGUIENTE MANERA
char PALABRA2 []="HOLA";//el compilador asignara el tamaño del array dependiendo de la cantidad de caracteres que tenga la palabra
//aqui imprimiremos la palabra HOLA con un loop
for (int i=0; i<4; i++){
    std::cout<<PALABRA[i];
}
//LIMITES DE UN ARRAY 
//CADA ARRAY TIENE UN LUGAR ESPECIFICO EN LA MEMORIA Y SI TRATAS DE ACCEDER A UN LUGAR QUE NO EXISTE EN EL ARRAY VAS A CONSEGUIR UN VALOR BASURA O UN ERROR DE COMPILACION, POR ESO ES IMPORTANTE SIEMPRE REVISAR EL INDEX DE UN ARRAY
return 0;
}