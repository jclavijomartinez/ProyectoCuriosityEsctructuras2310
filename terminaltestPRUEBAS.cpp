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
            if (input == "cargar_comandos") {
                cout << "Opción elegida: cargar_comandos" << endl;
            } else if (input == "cargar_elementos") {
                cout << "Opción elegida: cargar_elementos" << endl;
            } else {
                cout << "Opción inválida" << endl;
            }
            break;
        case 'a':
            if (input == "agregar_movimiento") {
                cout << "Opción elegida: agregar_movimiento" << endl;
            } else if (input == "agregar_analisis") {
                cout << "Opción elegida: agregar_analisis" << endl;
            } else if (input == "agregar_elemento") {
                cout << "Opción elegida: agregar_elemento" << endl;
            } else {
                cout << "Opción inválida" << endl;
            }
            break;
        case 'g':
            if (input == "guardar") {
                cout << "Opción elegida: guardar" << endl;
            } else {
                cout << "Opción inválida" << endl;
            }
            break;
        case 's':
            if (input == "simular_comandos") {
                cout << "Opción elegida: simular_comandos" << endl;
            } else if (input == "salir") {
                cout << "Opción elegida: salir" << endl;
            } else {
                cout << "Opción inválida" << endl;
            }
            break;
        default:
            cout << "Opción inválida" << endl;
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