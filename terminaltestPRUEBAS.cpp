#include <iostream>
#include <string>

void imprimirSimbolo() {
  std::cout << "$ ";
}

int main() {
  std::string input;
  while (true) {
    imprimirSimbolo();
    std::getline(std::cin, input);
    if (input == "exit") {
      break;
    }
    if (input == "ayuda") {
      std::cout<<"Bienvenido al controlador! en esta seccion puedes encontrar todas las funciones, proximamente";
      break;
    }
  }
  return 0;
}