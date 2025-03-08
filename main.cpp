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
void ejercicioif4() {
    int año;

    cout<<"El año es bisiesto o no"<<endl;
    cout<<"Escriba el año que desea: "<<endl;
    cin >> año;

    if ((año % 4 != 0 && año % 100 !=0) or (año % 400 == 0)) {
        cout <<"El año "<<año<<" no es bisiesto porque tiene 365 dias"<<endl;
    } else {
        cout <<"El año "<<año<<" es bisiesto tiene 366 dias"<<endl;
    }
}
void ejercicioif5() {
    char letter;

    cout <<"Digite una letra que deseas: "<<endl;
    cin>> letter;

    if (letter == 'a' or letter == 'e' or letter == 'i' or letter == 'o' or letter == 'u') {
        cout << "La letra " << letter <<" es una vocal"<<endl;
    } else {
        cout << "La letra "<< letter <<" es una consonante"<<endl;
    }
}
void ejercicioif6() {
    int cm;

    cout << "Ingrese el numero que desea: "<<endl;
    cin >> cm;

    if (cm % 2 == 0) {
        cout << "El numero " <<cm<< " no es primo"<<endl;
    } else {
        cout << "El numero " <<cm<< " es primo"<<endl;
    }
}
void ejercicioif7() {
    int N;

    cout <<"Verifique si es un año valido"<<endl;
    cout << "Ingrese el año: "<<endl;
    cin >> N;

    if (N >= 1901 && N <= 2024) {
        cout <<N<<" es un año de nacimiento valido"<<endl;
    } else {
        cout <<N<<" no es un año de nacimiento valido"<<endl;
    }
}
void ejercicioif8() {
    int j;

    cout<<"Por favor ingrese un numero: "<<endl;
    cin>>j;

    if (j % 5 == 0 && j % 7 == 0) {
        cout << "Es multiplo de 5 y 7"<<endl;
    } else if (j % 5 == 0) {
        cout << "Es multiplo de 5"<<endl;
    } else if (j % 7 == 0) {
        cout << "Es multiplo de 7"<<endl;
    }else {
        cout << "No es multiplo de 5 ni de 7"<<endl;
    }
}
void ejercicioif9() {
    int an;

    cout << "Determine su calificacion mediante su nota numerica de 0 - 100"<<endl;
    cout << "Ingrese su calificacion numerica: "<<endl;
    cin >> an;

    if (an >= 90 && an <=100) {
        cout << "Su calificacion es A"<<endl;
    } else if (an >=80) {
        cout << "Su calificacion es B"<<endl;
    } else if (an >=70) {
        cout << "Su calificacion es C"<<endl;
    } else if (an >= 60) {
        cout << "Su calificacion es D"<<endl;
    } else if (an >= 0) {
        cout << "Su calificacion es F"<<endl;
    } else {
        cout <<"Calificacion no valida, debe estar entre 0 y 100"<<endl;
    }
}
void ejercicioif10() {
    double precio0, PrecioDesc, PrecioFin;

    cout<<"Determine el precio con el descuento"<<endl;
    cout<<"Ingrese el precio: "<<endl;
    cin>>precio0;

    cout<<"Ingrese el descuento: "<<endl;
    cin>>PrecioDesc;

    if (precio0 < 0 or PrecioDesc < 0) {
        cout <<"No pueden ser numeros negativos"<<endl;
    } else if (PrecioDesc > 100) {
        cout <<"El descuento no puede ser mayor a 100%"<<endl;
    } else if (PrecioDesc == 0) {
        cout <<"No hay descuento "<<precio0<<" es el precio"<<endl;
    } else {
        PrecioFin = precio0-(precio0*(PrecioDesc/100));
        cout<<"El precio con descuento es:Q "<<PrecioFin<<endl;
    }
}
void ejwh1() {
    int i=1;
    while (i<=20) {
        cout << i << " ";
        i++;
    }
    cout<<endl;
}
void ejwh2() {
    int ut, i=1;

    cout << "Ingrese un numero entero: "<<endl;
    cin>>ut;

    if (ut<1) {
        cout<<"El numero no es valido"<<endl;
    } else {
        while (i<=ut) {
            cout<<i<<endl;
            i++;
        }
        cout<<endl;
    }
}
void ejwh3() {
    int bl, suma=0;
    cout<<"Ingrese un numero: "<<endl;
    cin>>bl;

    while (bl>=0) {
        suma+=bl;

        cout<<"Ingrese otro numero positivo: "<<endl;
        cin>>bl;
    }
    cout<<"La suma de los numeros positivos es: "<<suma<<endl;
    cout<<"Se ha detectado un numero negativo";
}