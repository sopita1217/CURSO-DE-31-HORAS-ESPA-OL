#include <iostream>
//POINTERS
//NO PUEDES ALMACENAR UNA VARIABLE DE TIPO INT EN UN POINTER DE TIPO DOUBLE, SOLO PUEDES ALMACENAR EL MISMO TIPO DE VARIABLE
//NO USES POINTERS NO INICIALIZADOS O QUE NO HAN SIDO ASIGNADOS A NINGUNA VARIABLE, CRASHEARA TU PROGRAMA
int main()
{
//declarando y usando pointers
int * p_numero {};//solo puede almacenar la localizacion de integers,  lo inicializamos a nullptr para despues asignarle un valor
double *p_fraccion_de_numero {};//solo puede almacenar la localizacion de doubles

//TODOS LOS POINTERS TIENEN EL MISMO TAMAÑO YA QUE GUARDAN LO MISMO (addresses)
int int_var {100};
int *p_int_var {&int_var};//el address de int_var es guardado en p_int_var
std::cout << "localizacion de int_var: " << p_int_var << std::endl;
//REFERENCIA DE UN POINTER
int &ref_int_var {*p_int_var};//ref_int_var es una referencia de int_var
std::cout << "valor de int_var: " << ref_int_var << std::endl;
//POINTERS A CHARACTERS
char *p_char {};//p_char es un pointer a un character
char char_var {'P'};

p_char = &char_var;//p_char guarda la localizacion de char_var
std::cout << "localizacion de char_var: " << p_char << std::endl;
//INIZIALIZACION CON STRING LITERALS
const char *p_nombre {"ANGEL"};//para poder inicializarlo el tipo de dato debe de ser const char porque 
std::cout << p_nombre << std::endl;//no puedes modificar el contenido de un string literal
//ALOCACION DINAMICA DE MEMORIA
int *p_dinamico {nullptr};//inicializamos el pointer a nullptr
p_dinamico = new int;//asignamos un espacio de memoria para un integer
std::cout << "localizacion de p_dinamico: " << p_dinamico << std::endl;
delete p_dinamico;//liberamos la memoria, este paso es muy importante para evitar memory leaks
p_dinamico = nullptr;//asignamos el pointer a nullptr para evitar que se convierta en un dangling pointer
//ESO ES GUARDADO EN EL HEAP EN VEZ DE LA STACK
//LEAKS DE MEMORIA
//CUANDO NO LIBERAS MEMORIA QUE HAS ASIGNADO DINAMICAMENTE O PIERDES ACCESO A ELLA, SE LE LLAMA MEMORY LEAK 
//EJEMPLOS
int *p_leak {new int};//asignamos memoria dinamicamente
p_leak = new int;//asignamos memoria dinamicamente otra vez, perdiendo la referencia a la memoria anterior
//SOLUCION
delete p_leak;//liberamos la memoria
p_leak = nullptr;//asignamos el pointer a nullptr

return 0;
}