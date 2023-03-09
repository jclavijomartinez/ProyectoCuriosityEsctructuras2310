#include "analisis.h"
#include <iostream>

using namespace std;

void agregar_analisis ( string input ) {
	
   char tipo_analisis = input[17];
                char objeto_analisis = input[19];
                string comentario = input.substr(input.find(" ", 20) + 1);

                cout << "Opción elegida: agregar_analisis" << endl;

                if (tipo_analisis != 'f' && tipo_analisis != 'c' && tipo_analisis != 'p') {
                    cout << "Tipo de análisis inválido" << endl;
                    return;
                }

                if (objeto_analisis != 'r' && objeto_analisis != 'a' && objeto_analisis != 'm') {
                    cout << "Objeto de análisis inválido" << endl;
                    return;
                }

                cout << "Tipo de análisis: " << tipo_analisis << endl;
                cout << "Objeto de análisis: " << objeto_analisis << endl;
                cout << "Comentario: " << comentario << endl;
}