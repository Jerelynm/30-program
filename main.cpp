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
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.