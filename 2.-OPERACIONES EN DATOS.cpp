#include <iostream>
int main(){
//COMPUND OPERATIONS justo como los prefijos estos te ayudan a sumar restar multiplicae o dividir una variable 
   double numero1 {5};
   numero1 +=5;
   std::cout << numero1 << '\n';
   numero1 *=10;
   std::cout << numero1 << '\n';
   numero1 -=10;
   std::cout << numero1 << '\n';
   numero1 /=2;
   std::cout << numero1 << '\n';
   numero1 = {14};
   std::cout << numero1 << '\n';

//RELATIONAL OPERATORS son como los compound operators pero usados para comparar valores y solo devuelve 1 o 0, O TRUE OR FALSE
double numero2 {20}, numero3 {10};
std::cout << "NUMERO 1 : " << numero2 << std::endl;
std::cout << "NUMERO 2 : " << numero3 << std::endl;

std::cout << std::boolalpha; //este statement hace que en vez de mostrarse como 0 y 1 los booleans se muestren como true and false
std::cout << "numero 1 < numero 2 : " << (numero2 < numero3) <<std::endl;
std::cout << "numero 1 <= numero 2 : " << (numero2 <= numero3) <<std::endl;
std::cout << "numero 1 > numero 2 : " << (numero2 > numero3) <<std::endl;
std::cout << "numero 1 >= numero 2 : " << (numero2 >= numero3) <<std::endl;
std::cout << "numero 1 == numero 2 : " << (numero2 == numero3) <<std::endl;
std::cout << "numero 1 != numero 2 : " << (numero2 != numero3) <<std::endl;

std::cout << '\n';
std::cout << '\n';
std::cout << '\n';
std::cout << '\n';
std::cout << '\n';

//LOGICAL OPERATORS (AND, OR , NOT)

bool a {true};
bool b {false};
bool c {true};

std::cout << std::boolalpha;
std::cout << "BOOL A " << a << '\n';
std::cout << "BOOL B " << b << '\n';
std::cout << "BOOL C " << c << '\n';

//BASICAL AND OPERATIONS
std::cout << "OPERACIONES AND \n";
std::cout << "BOOL A AND BOOL B : " << (a && b) << '\n';
std::cout << "BOOL A AND BOOL C : " << (a && c) << '\n';
std::cout << "BOOL A AND BOOL B AND BOOL C :" << (a && b) << '\n';

std::cout << '\n';
std::cout << '\n';
std::cout << '\n';

//BASICAL OR OPERATIONS 
std::cout << "OPERACIONES OR \n";
std::cout << "BOOL A OR BOOL B : " << (a || b) << '\n';
std::cout << "BOOL A OR BOOL C : " << (a || c) << '\n';
std::cout << "BOOL A OR BOOL B AND BOOL C :" << (a || b) << '\n';

std::cout << '\n';
std::cout << '\n';
std::cout << '\n';

//OPERACIONES NOT 
std::cout << "BOOL A NOT : " << (!a) << '\n';
std::cout << "BOOL B NOT : " << (!b) << '\n';
std::cout << "BOOL C NOT : " << (!c) << '\n';
}