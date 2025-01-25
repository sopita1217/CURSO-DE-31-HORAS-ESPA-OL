#include <iostream>
#include <string>
//PLANTILLA DE FUNCIONES
/*
template = Es una palabra clave que define el inicio de una plantilla
typename T = Declara un parametro de tipo generico(tambien puedes usar class en lugar de typename)
T = Es un tipo de dato que se determinará en tiempo de compilación según el tipo de argumentos que pase el usuario.*/
template <typename T>
T FunctionName(T parametro1, T parametro2){
    return parametro1 + parametro2;
}

// Declaración de la plantilla (EJEMPLO BASICO)
template <typename T>
T maximo(T a, T b) {//T a y T b son variables que guardan informacion como en una funcion normal, la T es para no tener que definir el tipo de dato varias veces como en la sobrecarga de funciones
    return (a > b) ? a : b; // Devuelve el mayor de los dos
}
template <typename T>
T cuadrado(T numero) {
    return numero * numero;
}
// Especialización para strings (hacemos esto por que si no lo especializamos para strings te va a dar un error)
template <>
std::string cuadrado<std::string>(std::string texto) {//para especializarla tenemos que poner <> y posteriormente el tipo de dato que vas a usar y el nombre de la plantilla
    return texto + texto;
}

template <typename T>
void CambioDeValores(T& a, T& b) { // Los argumentos se pasan por referencia y l a función es void porque no necesita devolver un valor; su propósito es modificar directamente los valores de las variables pasadas por referencia (a y b). Esto la hace eficiente y simple para tareas como intercambiar valores.
    T temp = a;//usamos una variable temporal para almacenar el valor de A si no no seria posible realizar el intercambio
    a = b;
    b = temp;
}
int main() {
//Esto sirve como las sobrecarga de funciones pero solo tienes que establecer una en vez de hacerlas una por una, facilita el trabajo y es mas legible
// Usar la plantilla con diferentes tipos de datos
  std::cout <<"FUNCION DE MAXIMOS \n";
  std::cout << "Maximo de 10 y 20: " << maximo(10, 20) << std::endl;        // Enteros
  std::cout << "Maximo de 5.5 y 2.3: " << maximo(5.5, 2.3) << std::endl;    // Flotantes
  std::cout << "Maximo de 'a' y 'z': " << maximo('a', 'z') << std::endl;    // Caracteres

  std::cout <<"\n";
  std::cout <<"\n";
  std::cout <<"\n";

//DEDUCCION DE TIPO DE PLANTILLA
//podemos definir el tipo de dato que va a ingresar a la plantilla para evitar errores con el statement <>
//NO va a funcionar por que int y string NO son compatibles o con otro cualquier otro tipo de dato inconpatible
  int a{87};
  int b{40};
  double c{33.33};
  double d{44.23};
  std::string e{"HOLA"};
  std::string f{"MUNDO"};
//tambien podemos alamcenar el resultado en variables para luego imprimirlo
  std::cout <<"DEDUICCION DE TIPOS AUTOMATICA \n";
  
  auto max =  maximo<double>(c,d);//Decimos explicitamente que queremos doubles
  auto max2 = maximo<double>(a,d);//Va a funcionar por que los int son compatibles con double
  std::cout << "max : " <<max <<std::endl;//imprimimos la primera llamada de la funcion
  std::cout << "max : " <<max2 <<std::endl;//imprimimos la segunda llamada de la funcion

  std::cout <<"\n";
  std::cout <<"\n";
  std::cout <<"\n";

//Plantillla de Funciones por Referencia
  int x = 10, y = 20;
  double m = 1.5, n = 3.7;

  std::cout <<"PLANTILLLA DE FUNCIONES POR REFERENCIA\n";

  std::cout << "Antes de intercambiar: x = " << x << ", y = " << y << std::endl;//como la plantilla referencia la variable directamente los cambios se van a guardar incluso fuera de la funcion
    CambioDeValores(x, y); // Intercambia enteros
  std::cout << "Despues de intercambiar: x = " << x << ", y = " << y << std::endl;

  std::cout << "Antes de intercambiar: m = " << m << ", n = " << n << std::endl;
    CambioDeValores(m, n); // Intercambia doubles
  std::cout << "Despues de intercambiar: m = " << m << ", n = " << n <<std:: endl;

  std::cout <<"\n";
  std::cout <<"\n";
  std::cout <<"\n";

//ESPECIALIZACION DE PLANTILLA 

  std::cout <<"FUNCION DE CUADRADOS \n";
  std::cout << "Cuadrado de 5: " << cuadrado(5) << std::endl;             // Entero
  std::cout << "Cuadrado de 3.5: " << cuadrado(3.5) << std::endl;         // Flotante
  std::cout << "Cuadrado de 'Hola'(funcion especializada): " << cuadrado(std::string("Hola")) << std::endl; // Cadena ESPECIALIZADA

  std::cout <<"\n";
  std::cout <<"\n";
  std::cout <<"\n";
}