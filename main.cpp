//MENU
//Programa de seleccion para cualquiera de los 30 programas creados

#include <iostream>
using namespace std;

void ejerciciof1() {
    double number;

    cout <<"Ingresa un numero: "<<endl;
    cin >> number;

    //Identifica si el numero es positivo, negativo o en caso sea 0

    if (number > 0) {
        cout <<"El numero "<<number<<" es positivo"<<endl;
    } else if (number<0) {
        cout <<"El numero "<<number<<" es negativo"<<endl;
    } else {
        cout <<"El numero es cero"<<endl;
    }
}
void ejerciciof2() {
    int n;

    cout <<"Ingrese un numero: "<<endl;
    cin >> n;

    if (n % 2 == 0) {
        cout <<"El numero "<<n<<" es par"<<endl;
    } else {
        cout <<"El numero "<<n<<" es impar"<<endl;
    }
}
void ejerciciof3() {
    int a, b, c;

    cout <<"Digite tres numeros: "<<endl;
    cin>>a>>b>>c;

    if (a == b && b == c) {
        cout <<"Los tres numeros son iguales"<<endl;
    } else if (a >= b && a >= c) {
        cout << "El numero "<<a<<" es el mayor"<<endl;
    } else if (b >= a && b >= c) {
        cout <<"El numero "<<b<<" es el mayor"<<endl;
    } else {
        cout <<"El numero "<<c<<" es el mayor"<<endl;
    }
}