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
void ejwh4() {
    int h, x=0, y=1, z=1;

    cout<<"Digite un numero: "<<endl;
    cin>>h;

    cout <<"1 "<<endl;
    while (z<=h) {
        z = x + y;
        cout << z << " "<<endl;
        x = y;
        y = z;
    }
    cout<<"\n";
}
void ejwh5() {
    int rz, suma=0;

    cout<<"Ingrese un numero positivo: "<<endl;
    cin>>rz;

    while (rz>=0) {
        if (suma + rz > 100) {
            cout << "La suma ha alcanzado el limite de 100." << endl;
            break; // Salir porque alcanzo el limite
        }
        suma+=rz;
        cout<<"Ingrese otro numero: "<<endl;
        cin>>rz;
    }
    cout<<"La suma es: "<<suma<<endl;
}
void ejwh6() {
    int MB, i=2;
    cout<<"Ingrese un numero: "<<endl;
    cin>>MB;

    while (i<=MB) {
        cout<<i<<endl;
        i+=2;
    }
}
void ejwh7() {
    double gm;
    double suma = 0.0;
    int contador = 0;

    cout << "Ingresa 10 numeros:" << endl;

    // Bucle while para ingresar exactamente 10 números
    while (contador < 10) {
        cin >> gm;

        // Sumar el número a la suma total y aumentar el contador
        suma += gm; // Siempre sumamos el número
        contador++;     // Incrementamos el contador
    }

    // Calculamos la media
    double media = suma / contador;

    cout << "La media de los numeros ingresados es: " << media << endl;
}
void ejwh8() {
    int Y;

    cout << "Ingresa numeros (ingresa 0 para terminar):" << endl;
    cin >> Y; // Leer el primer número antes del bucle

    while (Y != 0) {
        cout << "Ingresa otro numero: " << endl;

        // Leer el siguiente número
        cin >> Y;
    }
}
void ejwh9() {
    int i = 1; // Comenzamos desde el primer número natural

    cout << "Los primeros 10 numeros naturales y sus cuadrados son:" << endl;


    while (i <= 10) {
        cout << "Numero: " << i << ", Cuadrado: " << (i * i) << endl;
        i++; // Incrementamos el número natural
    }
}
void ejwh10() {
    int i = 1; // Comenzamos desde el primer número natural
    int producto = 1; // Inicializamos el producto en 1


    while (i <= 10) {
        producto *= i; // Multiplicamos el producto por el número actual
        i++; // Incrementamos el número natural
    }

    cout << "El producto de los primeros 10 numeros naturales es: " << producto << endl;
}
void ejercicioFOR1() {
    cout << "Los numeros pares del 2 al 20 son:" << endl;


    for (int i = 2; i <= 20; i += 2) {
        cout << i << endl; // Imprimir el número par actual
    }
}
void ejercicioFOR2() {
    int numero;

    // Solicitar al usuario que ingrese un número
    cout << "Ingresa un numero: ";
    cin >> numero;

    cout << "Tabla de multiplicar de " << numero << ":" << endl;

    // Bucle for para imprimir la tabla de multiplicar del número
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl; // Imprimir el resultado de la multiplicación
    }
}
int ejercicioFOR3() {
    int x;
    int suma = 0; // Variable para almacenar la suma de los números pares

    // Solicitar al usuario que ingrese un número entero positivo
    cout << "Ingresa un numero entero positivo: ";
    cin >> x;

    // Verificar que el número ingresado sea positivo
    if (x <= 0) {
        cout << "Por favor, ingresa un numero entero positivo." << endl;
        return 1; // Salir del programa si el número no es positivo
    }

    // Bucle for para calcular la suma de los números pares desde 1 hasta n
    for (int i = 2; i <= x; i += 2) {
        suma += i; // Sumar el número par actual
    }

    // Mostrar el resultado
    cout << "La suma de los numeros pares desde 1 hasta " << x << " es: " << suma << endl;
}
int ejercicioFOR4() {
    int n1;
    long long factorial = 1; // para manejar números grandes

    // Solicitar al usuario que ingrese un número entero no negativo
    cout << "Ingresa un numero entero no negativo: ";
    cin >> n1;

    // Verificar que el número ingresado sea no negativo
    if (n1 < 0) {
        cout << "El factorial no esta definido para numeros negativos." << endl;
        return 1; // Salir del programa si el número es negativo
    }

    // Bucle for para calcular el factorial
    for (int i = 1; i <= n1; i++) {
        factorial *= i; // Multiplicar el factorial por el número actual
    }

    // Mostrar el resultado
    cout << "El factorial de " << n1 << " es: " << factorial << endl;
}
void ejercicioFOR5() {
    cout << "Los numeros primos del 1 al 50 son:" << endl;

    // Bucle para imprimir los números primos del 1 al 50
    for (int num = 2; num <= 50; num++) { // Comenzamos desde 2, ya que 1 no es primo
        bool esPrimo = true; // Suponemos que el número es primo

        // Verificamos si num es primo
        for (int i = 2; i * i <= num; i++) { // Solo necesitamos verificar hasta la raíz cuadrada de num
            if (num % i == 0) {
                esPrimo = false; // Si es divisible, no es primo
                break; // Salimos del bucle
            }
        }

        // Si es primo, lo imprimimos
        if (esPrimo) {
            cout << num << " ";
        }
    }

    cout << endl; // Salto de línea al final
}
void ejercicioFOR6() {
    int z;

    // Solicitar al usuario que ingrese un número entero positivo
    cout << "Ingresa un número entero positivo: ";
    cin >> z;

    // Inicializar la variable para la suma de los números triangulares
    int suma = 0;

    cout << "La serie de números triangulares hasta " << z << " es:" << endl;

    // Bucle for para calcular e imprimir la serie de números triangulares
    for (int i = 1; suma <= z; i++) {
        suma += i; // Sumar el número actual
        // Imprimir el número triangular actual solo si es menor o igual a n
        cout << suma * (suma <= z) << " "; // Multiplicamos por 1 si suma es menor o igual a n, de lo contrario por 0
    }

    cout << endl; // Salto de línea al final
}
void ejercicioFOR7() {
    int n2 = 10; // Número de términos de la serie Fibonacci a imprimir
    int d = 0;  // Primer término
    int e = 1;  // Segundo término

    cout << "Los primeros " << n2 << " terminos de la serie Fibonacci son:" << endl;

    // Bucle for para calcular e imprimir los términos de la serie Fibonacci
    for (int i = 0; i < n2; i++) {
        cout << d << " "; // Imprimir el término actual
        int siguiente = d + e; // Calcular el siguiente término
        d = e; // Actualizar a para el siguiente término
        e = siguiente; // Actualizar b para el siguiente término
    }

    cout << endl; // Salto de línea al final
}
void ejercicioFOR8() {
    int suma = 0;

    // Bucle for para sumar los primeros 100 números naturales
    for (int i = 1; i <= 100; i++) {
        suma += i; // Sumar el número actual a la suma total
    }

    // Imprimir el resultado
    cout << "La suma de los primeros 100 numeros naturales es: " << suma << endl;
}
int ejercicioFOR9() {
    int aj;

    // Solicitar al usuario que ingrese un número entero
    cout << "Ingresa un numero entero positivo: ";
    cin >> aj;

    // Verificar que el número ingresado sea positivo
    if (aj <= 0) {
        cout << "Por favor, ingresa un numero entero positivo." << endl;
        return 1; // Salir del programa si el número no es positivo
    }

    cout << "Los divisores de " << aj << " son:" << endl;

    // Bucle for para encontrar e imprimir los divisores del número
    for (int i = 1; i <= aj; i++) {
        if (aj % i == 0) { // Verificar si i es un divisor de numero
            cout << i << " "; // Imprimir el divisor
        }
    }

    cout << endl; // Salto de línea al final
}
void ejercicioFOR10() {
    int count = 0; // Contador de números primos encontrados
    int num = 2;   // Primer número a verificar

    cout << "Los primeros 10 numeros primos son:" << endl;

    // Bucle for para encontrar los primeros 10 números primos
    for (count = 0; count < 10; num++) {
        bool esPrimo = true; // Suponemos que el número es primo

        // Verificar si num es primo
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                esPrimo = false; // No es primo si es divisible
                break; // Salir del bucle si encontramos un divisor
            }
        }

        // Si es primo, imprimirlo y aumentar el contador
        if (esPrimo) {
            cout << num << " ";
            count++; // Aumentar el contador de números primos encontrados
        }
    }

    cout << endl; // Salto de línea al final
}
void MENUIFELSE() {
    int opc;
    do {
        cout <<"\t Programas con If-Else  "<<endl;
        cout<<"Seleccione una opcion"<<endl;
        cout<<"1. Numero Positivo Negativo o Cero"<<endl;
        cout<<"2. Numero Par o Impar"<<endl;
        cout<<"3. Calcule el mayor de 3 numeros"<<endl;
        cout<<"4. Determine el año bisiesto"<<endl;
        cout<<"5. Determine si la letra es vocal o consonante"<<endl;
        cout<<"6. Calcule el numero primo"<<endl;
        cout<<"7. Año de nacimiento valido"<<endl;
        cout<<"8. Multiplos de 5 y 7"<<endl;
        cout<<"9. Determine su calificacion segun la escala A B C D F"<<endl;
        cout<<"10. Calcule el precio con el descuento"<<endl;
        cout<<"11. Volver al menu principal"<<endl;
        cin>>opc;

        switch (opc) {
            case 1: ejercicioif1();break;
            case 2: ejercicioif2();break;
            case 3: ejercicioif3();break;
            case 4: ejercicioif4();break;
            case 5: ejercicioif5();break;
            case 6: ejercicioif6();break;
            case 7: ejercicioif7();break;
            case 8: ejercicioif8();break;
            case 9: ejercicioif9();break;
            case 10: ejercicioif10();break;
        }
    }while (opc != 11);
}
void MENUWHILE() {
    int opc;
    do {
        cout <<"\t Programas con WHILE  "<<endl;
        cout<<"Seleccione una opcion"<<endl;
        cout<<"1. Los numeros del 1 al 20"<<endl;
        cout<<"2. Calcule los numeros desde 1 hasta el que digite"<<endl;
        cout<<"3. Sume numeros positivos"<<endl;
        cout<<"4. Determine la serie Fibonacci hasta un numero"<<endl;
        cout<<"5. Calcule la suma de numeros hasta 100"<<endl;
        cout<<"6. Numeros pares hasta uno determinado"<<endl;
        cout<<"7. La media de 10 numeros"<<endl;
        cout<<"8. Ingrese numeros hasta que sea igual a 0"<<endl;
        cout<<"9. El cuadrado de los primeros 10 numeros naturales"<<endl;
        cout<<"10. El producto de los primeros 10 numeros naturales"<<endl;
        cout<<"11. Volver al menu principal"<<endl;
        cin>>opc;

        switch (opc) {
            case 1: ejwh1();break;
            case 2: ejwh2();break;
            case 3: ejwh3();break;
            case 4: ejwh4();break;
            case 5: ejwh5();break;
            case 6: ejwh6();break;
            case 7: ejwh7();break;
            case 8: ejwh8();break;
            case 9: ejwh9();break;
            case 10: ejwh10();break;
        }
    }while (opc != 11);
}
void MENUFOR() {
    int opc;
    do {
        cout <<"\t Programas con FOR  "<<endl;
        cout<<"1. Numeros pares del 2 al 20"<<endl;
        cout<<"2. Tablas de multiplicar"<<endl;
        cout<<"3. Calcule la suma de los numeros pares de un determinado numero"<<endl;
        cout<<"4. Calcule el factorial de un numero"<<endl;
        cout<<"5. Numeros primos del 1 al 50"<<endl;
        cout<<"6. Determine la serie hasta el numero digitado"<<endl;
        cout<<"7. Los primeros 10 numeros de la serie Fibonacci"<<endl;
        cout<<"8. Calcula la suma de los primeros 100 numeros naturales"<<endl;
        cout<<"9. Determine todos los divisores de un numero"<<endl;
        cout<<"10. Los primeros 10 numeros primos"<<endl;
        cout<<"11. Volver al menu principal"<<endl;
        cin>>opc;
    }while (opc!=11);
}
int main() {
    int option;
    do {
        cout<<"\t MENU PRINCIPAL  "<<endl;
        cout<<"Seleccione una opcion"<<endl;
        cout<<"1. Programas con If-Else"<<endl;
        cout<<"2. Programas con WHILE"<<endl;
        cout<<"3. Programas con FOR"<<endl;
        cout<<"4. Salir"<<endl;
        cin>>option;

        switch (option) {
            case 1: MENUIFELSE();break;
            case 2: MENUWHILE();break;
            case 3: MENUFOR();break;
        }
    }while (option!=4);
}