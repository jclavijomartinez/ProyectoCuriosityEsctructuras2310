#include <iostream>
#include <string>

using namespace std;

constexpr unsigned int str2int(const char* str, int h = 0)
{
    return !str[h] ? 5381 : (str2int(str, h+1) * 33) ^ str[h];
}

void imprimirSimbolo() {
  cout << "$ ";
}
void imprmirAyuda(){
  cout<<"estas son las funciones comunes que acepta la terminal de control:"<<endl;
  cout<< "alopolisia" <<endl;
  cout<< "superdupermegaopcion en un nuevo branch" <<endl;
}

//Prueba


int main() {
  std::string input;
  while (true) {
    imprimirSimbolo();
    getline(std::cin, input);
    
    switch (input[0]) {
        case 'c':
             if (input.substr(0, 14) == "cargar_comandos") {
                string nombre_archivo = input.substr(15);
                cout << "Opción elegida: cargar_comandos" << endl;
                cout << "Nombre de archivo: " << nombre_archivo << endl;
            } else if (input.substr(0, 15) == "cargar_elementos") {
                string nombre_archivo = input.substr(16);
                cout << "Opción elegida: cargar_elementos" << endl;
                cout << "Nombre de archivo: " << nombre_archivo << endl;
            } else {
                cout << "Opción inválida" << endl;
            }
            break;
        case 'a':
             if (input.substr(0, 17) == "agregar_movimiento") {
                char tipo_movimiento = input[18];
                double magnitud = stod(input.substr(20, input.find(" ", 20) - 20));
                char unidad = input[input.find(" ", 20) + 1];

                cout << "Opción elegida: agregar_movimiento" << endl;

                if (tipo_movimiento != 'a' && tipo_movimiento != 'g') {
                    cout << "Tipo de movimiento inválido" << endl;
                    break;
                }

                if (magnitud <= 0 || magnitud > 100) {
                    cout << "Magnitud inválida" << endl;
                    break;
                }

                if (unidad != 'c' && unidad != 'm' && unidad != 'g') {
                    cout << "Unidad de medida inválida" << endl;
                    break;
                }

                cout << "Tipo de movimiento: " << tipo_movimiento << endl;
                cout << "Magnitud: " << magnitud << endl;
                cout << "Unidad de medida: " << unidad << endl;
            }  else if (input.substr(0, 16) == "agregar_analisis") {
                char tipo_analisis = input[17];
                char objeto_analisis = input[19];
                string comentario = input.substr(input.find(" ", 20) + 1);

                cout << "Opción elegida: agregar_analisis" << endl;

                if (tipo_analisis != 'f' && tipo_analisis != 'c' && tipo_analisis != 'p') {
                    cout << "Tipo de análisis inválido" << endl;
                    break;
                }

                if (objeto_analisis != 'r' && objeto_analisis != 'a' && objeto_analisis != 'm') {
                    cout << "Objeto de análisis inválido" << endl;
                    break;
                }

                cout << "Tipo de análisis: " << tipo_analisis << endl;
                cout << "Objeto de análisis: " << objeto_analisis << endl;
                cout << "Comentario: " << comentario << endl;
            } else if (input == "agregar_elemento") {
                cout << "Opción elegida: agregar_elemento" << endl;
            } else if (input == "ayuda") {
                
                cout << "Comándos válidos :" << endl;
                cout << "  cargar_comandos nombre_archivo" << endl;
                cout << "  cargar_elementos nombre_archivo" << endl;
                cout << "  agregar_movimiento tipo_mov magnitud unidad_med" << endl;
                cout << "  agregar_analisis tipo_analisis objeto comentario" << endl;
                cout << "  agregar_elemento tipo_comp tamaño unidad_med coordX coordY" << endl;
                cout << "  guardar tipo_archivo nombre_archivo" << endl;
                cout << "  simular_comandos coordX coordY" << endl;
                cout << "  salir" << endl;
                
                

            } else {
                cout << "Opción inválida" << endl;
            }
            break;

        case 'g':

            if (input == "guardar") {
                cout << "input elegida: guardar" << endl;
            } else {
                cout << "input invalida" << endl;
            }
            break;
        case 's':
            if (input == "simular_comandos") {
                cout << "input elegida: simular_comandos" << endl;
            } else if (input == "salir") {
                cout << "input elegida: salir" << endl;
            } else {
                cout << "input invalida" << endl;
            }
            break;
        default:
            cout << "input invalida" << endl;
            break;
    }
    if (input == "exit") {
      break;
    }
    if (input == "ayuda") {
      cout<<"Bienvenido al controlador! en esta seccion puedes encontrar todas las funciones, proximamente";
      break;
    }
  }
  return 0;
}