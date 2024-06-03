#include <iostream>
using namespace std;

int suma(int entero1,int entero2){
    int resultado = 0;
    resultado = (entero1 + entero2);
    return resultado;
}

int resta(int entero1, int entero2){
    int resultado = 0;
    resultado = (entero1 - entero2);
    return resultado;
}

int multiplicacion(int entero1, int entero2){
    int resultado = 0;
    resultado = (entero1 * entero2);
    return resultado;
}

float division(int entero1, int entero2){
    float resultado = 0.00;
    resultado = (float(entero1) /float (entero2));
    return resultado;
}

int main(){
    int n1= 0,n2 = 0, respuesta = 0, respuesta2 = 0, respuesta3 = 0;
    float respuesta4 = 0.00;
    n1 = 8;
    n2 = 6;
    
    respuesta = suma(n1,n2);
    respuesta2 = resta(n1,n2);
    respuesta3 = multiplicacion (n1,n2);
    respuesta4 = division(n1,n2);

    cout << "El valor de la suma de dos numeros enteros es:  "<< respuesta << endl;
    cout << "El valor de la resta de los numeros es: "<< respuesta2 << endl;
    cout << "El valor de la multilplicacion de los numeros es: "<< respuesta3 << endl; 
    cout << "El valor de la division de los numeros es: "<< respuesta4 << endl;


    return 0;
}
