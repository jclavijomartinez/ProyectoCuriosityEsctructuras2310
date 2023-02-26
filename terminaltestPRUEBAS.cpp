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
                cout << "Opcion elegida: cargar_comandos" << endl;
            } else if (input == "cargar_elementos") {
                cout << "Opcion elegida: cargar_elementos" << endl;
            } else {
                cout << "Opcion invalida" << endl;
            }
            break;
        case 'a':
            if (input == "agregar_movimiento") {
                cout << "Opcion elegida: agregar_movimiento" << endl;
            } else if (input == "agregar_analisis") {
                cout << "Opcion elegida: agregar_analisis" << endl;
            } else if (input == "agregar_elemento") {
                cout << "Opcion elegida: agregar_elemento" << endl;
            } else {
                cout << "Opcion invalida" << endl;
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