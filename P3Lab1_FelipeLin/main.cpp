/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: felipelinzhao
 *
 * Created on October 16, 2020, 3:52 PM
 */

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int menu;
    cout << "1. Ejercicio 1\n2. Ejercicio 2\n3. Salida\n";
    cout << "Ingrese la opcion: ";
    cin >> menu;
    while (menu != 3) {
        switch (menu) {
            case 1:
            {
                double valor_x, resultado_Ej1;
                cout << "Ingrese la x: ";
                cin >> valor_x;
                resultado_Ej1 = 1 / (1 + exp(-valor_x));
                cout << "La respuesta de la funcion es: " << resultado_Ej1 << "\n";
                break;
            }
            case 2:
            {
                double repeticiones, resultado_Ej2=0, calculo=0;
                cout << "Ingrese las repeticiones que desea hacer: ";
                cin >> repeticiones;
                for (int i = 0; i <= repeticiones; i++) {
                    calculo += (pow(-1,i)) / ((2 * i) + 1);
                }
                resultado_Ej2 = calculo*4;
                cout << "La respuesta de la funcion es: " << resultado_Ej2 << "\n";
                break;
            }
            default:
                cout << "No existe esa opcion\n";
                break;
        }
        cout << "1. Ejercicio 1\n2. Ejercicio 2 \n3. Salida\n";
        cout << "Ingrese la opcion: ";
        cin >> menu;
    }
}

