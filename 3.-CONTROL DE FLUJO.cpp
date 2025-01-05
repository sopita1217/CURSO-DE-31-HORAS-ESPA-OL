#include <iostream>
int main(){

//FLOW CONTROL
//IF AND ELSE IF STATEMENTS
int numero4 {55};
int numero5 {60};
if (numero4 > numero5){//AQUI USAMOS UNA EXPRESION COMO CONDICION PARA EL IF STATEMENT 
 std::cout << "numero 4 es mayor que numero 5\n";
}else if (numero4 < numero5){ // el else if nos permite evaluar otra condicion si la primera o adicionales no se cumplen
 std::cout << "numero 4 es menor que numero 5\n";
}
//TAMBIEN PUEDES COMBINAR LOS IF STATEMNTS CON LOS OPERADORES LOGICOS AQUI UN EJEMPLO
int numero6 {55};
int numero7 {60};
int numero8 {65};
if (numero6 > numero7 && numero6 < numero8){//AQUI USAMOS UNA EXPRESION COMO CONDICION PARA EL IF STATEMENT Y EL OPERADOR LOGICO DE AND
 std::cout << "numero 6 es mayor que numero 7 y menor que numero 8\n";
}else if (numero6 < numero7 || numero6 < numero8){//AQUI USAMOS LOGICAL OPERATOR OR PARA COMPARAR DOS CONDICIONES
    std::cout << "numero 6 es menor que numero 7 o menor que numero 8\n";
}
 //switch statements son como los if statements pero mas eficientes para evaluar multiples condiciones
char op {'+'};
int num1 = {10};   
int num2 = {5};
double result {0};
   switch (op){//ESTE SWITCH ES PARA UNA CALCULADORA BASICA CON OPERACIONES BASICAS
     case '+'://si el operador es + entonces sumamos los dos numeros
        result = num1 + num2;
        std::cout << result << '\n';
        break;//el break nos permite salir del switch statement
     case '-':
        result = num1 - num2;
        std::cout << result << '\n';
        break;
    case '*':
        result = num1 * num2;
        std::cout << result << '\n';
        break;
    case '/':
        result = num1 / num2;
        std::cout << result << '\n';
        break;
    default://si no se cumple ninguna de las condiciones anteriores entonces ejecutamos el default
        std::cout << "no es un operador valido\n";
        break;
}
//OPERADOR TERNARIO
int max {};
int a {5};
int b {10};
max = (a > b) ? a : b;//ESTE ES UN OPERADOR TERNARIO QUE NOS PERMITE ASIGNAR UN VALOR A UNA VARIABLE DEPENDIENDO DE UNA CONDICION
//las 2 opciones deben ser del mismo tipo de dato o compatible de lo contrario habra un error

//INICIALIZACION TERNARIA
bool rapido {true};

int velocidad = rapido ? 100 : 50;//ESTE ES UN EJEMPLO DE INICIALIZACION TERNARIA
//si rapido es verdadero entonces la velocidad sera 100 de lo contrario sera 50
return 0;
}