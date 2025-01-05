#include <iostream>
int main(){
//FOR LOOPS
//for loops son una manera de repetir un bloque de codigo un numero determinado de veces
//for loops tienen 4 partes y el iterador
//iterator es la variable que se usa para contar las veces que se ha repetido el bloque de codigo
//PUNTO DE INICIO (int i {};) DONDE INICIA EL LOOP
//TEST (i < 101;) CONTROLA CUANDO TERMINA EL LOOP
//INCREMENTO (i++) CONTROLA CUANTAS VECES SE REPITE EL LOOP
//CUERPO DEL LOOP ({std::cout << i << '\n';}) CODIGO QUE SE REPITE EN EL LOOP

for (int i {}; i < 100; i++){
    std::cout << i << '\n';
}
//podemos poner los valores de el loop fuera del loop paara que sea mas facil de cambiar
int inicio {0};
int test {1000};
int incremento {10};
for (int i {inicio}; i < test; i+=incremento){
    std::cout << i << '\n';
}
//no puedes mencionar la iteracion fuera del loop por que te va a dar un error (i)
//a no ser que la declares fuera del loop

//WHILE LOOPS
//while loops son otra manera de repetir un bloque de codigo un numero determinado de veces
//while loops tienen 2 partes y el iterador
//TEST (i < 100;) CONTROLA CUANDO TERMINA EL LOOP
//CUERPO DEL LOOP ({std::cout << i << '\n';}) CODIGO QUE SE REPITE EN EL LOOP
int i {0};//iterador
while (i < 100){//(i < 100;) TEST
    std::cout << i << " : SKIBIDI " << '\n';//CUERPO DEL LOOP
    i++;//INCREMENTO
}

//DO WHILE LOOPS
//do while loops son otra manera de repetir un bloque de codigo un numero determinado de veces
//do while loops tienen 2 partes y el iterador  
//CUERPO DEL LOOP ({std::cout << i << '\n';}) CODIGO QUE SE REPITE EN EL LOOP
//TEST (i < 100;) CONTROLA CUANDO TERMINA EL LOOP
//usando los mismos valores que el while loop por simplicidad
do{
    std::cout << i << " : SKIBIDI " << '\n';//CUERPO DEL LOOP
    i++;//INCREMENTO
}while (i < 100);//(i < 100;) TEST mientras que i sea menor a 100 se va a repetir el loop
//ESTE LOOP COMPILA PRIMERO EL CUERPO Y LUEGO EL TEST ASI QUE TEN ESO EN CONSIDERACION
return 0;
}