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
  cout<<  <<endl;
}

//Prueba


int main() {
  std::string input;
  while (true) {
    imprimirSimbolo();
    getline(std::cin, input);
    
    switch (str2int(input))
    {
    case 'cargar_comandos'/* constant-expression */: //cargar_comandos nombre_archivo
      /* code */


      break;
    
    case 'cargar_elementos'/* constant-expression */: //cargar_elementos nombre_archivo
      /* code */

      
      break;

    default:
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