#include <iostream>
/*FUNCIONES LAMBDA
TIENEN 4 PARTES COMO LOS LOOPS
[lista de captura](parametros)tipo de retorno{
cuerpo de la funcion}*/
int main() {
    auto suma = [](int a, int b) -> int {
        return a + b;
    };

    std::cout << "La suma es: " << suma(5, 10) << std::endl;//aqui llamas a la funcion
/*En este ejemplo:
[] indica que no se capturan variables externas.
(int a, int b) son los parámetros.
-> int indica que el tipo de retorno es int.
{ return a + b; } contiene la lógica de la función.

Tipos de capturas:
Por valor ([x]): La lambda hace una copia de la variable. Si la variable cambia fuera de la lambda, la copia interna no se verá afectada.
Por referencia ([&x]): La lambda usa una referencia a la variable. Si la variable cambia fuera de la lambda, la lambda verá el cambio.
Capturar todo por valor ([=]): Todas las variables del ámbito son capturadas por valor.
Capturar todo por referencia ([&]): Todas las variables del ámbito son capturadas por referencia.
*/
    int a = 5, b = 10;

    // Captura por valor
    auto capturaValor = [a]() { return a + 10; };
    // Captura por referencia
    auto capturaReferencia = [&b]() { b += 10; };

    std::cout << "Captura por valor: " << capturaValor() << std::endl; // Usa una copia de 'a'
    capturaReferencia();
    std::cout << "Captura por referencia (b modificado): " << b << std::endl;

// Declaración e invocación directa de la función (no es necesario llamar a la funcion)
    [](int a, int b) {
        std::cout << "La suma de " << a << " y " << b << " es: " << (a + b) << std::endl;
    }(10, 20); // Llamada con los argumentos 10 y 20

return 0;
}
