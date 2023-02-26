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
}

//Prueba


int main() {
  std::string input;
  while (true) {
    imprimirSimbolo();
    getline(std::cin, input);
    
    switch (input[0]) {
        case 'c':
             if (opcion.substr(0, 14) == "cargar_comandos") {
                string nombre_archivo = opcion.substr(15);
                cout << "Opción elegida: cargar_comandos" << endl;
                cout << "Nombre de archivo: " << nombre_archivo << endl;
            } else if (opcion.substr(0, 15) == "cargar_elementos") {
                string nombre_archivo = opcion.substr(16);
                cout << "Opción elegida: cargar_elementos" << endl;
                cout << "Nombre de archivo: " << nombre_archivo << endl;
            } else {
                cout << "Opción inválida" << endl;
            }
            break;
        case 'a':
             if (opcion.substr(0, 17) == "agregar_movimiento") {
                char tipo_movimiento = opcion[18];
                double magnitud = stod(opcion.substr(20, opcion.find(" ", 20) - 20));
                char unidad = opcion[opcion.find(" ", 20) + 1];

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
            } else if (opcion == "agregar_analisis") {
                cout << "Opción elegida: agregar_analisis" << endl;
            } else if (opcion == "agregar_elemento") {
                cout << "Opción elegida: agregar_elemento" << endl;
            } else if (opcion == "ayuda") {
                cout << "Opciones válidas en el caso 'a':" << endl;
                cout << "  agregar_movimiento" << endl;
                cout << "  agregar_analisis" << endl;
                cout << "  agregar_elemento" << endl;
            } else {
                cout << "Opción inválida" << endl;
            }
            break;
        case 'g':
            if (input == "guardar") {
                cout << "Opcion elegida: guardar" << endl;
            } else {
                cout << "Opcion invalida" << endl;
            }
            break;
        case 's':
            if (input == "simular_comandos") {
                cout << "Opcion elegida: simular_comandos" << endl;
            } else if (input == "salir") {
                cout << "Opcion elegida: salir" << endl;
            } else {
                cout << "Opcion invalida" << endl;
            }
            break;
        default:
            cout << "Opcion invalida" << endl;
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